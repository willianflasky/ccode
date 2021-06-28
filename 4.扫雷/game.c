#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	// 打印列号
	for (int n = 0; n <= col; n++) {
		printf("%d ", n);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		// 打印行号
		printf("%d ", i);
		for (int j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

// 布雷过程
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

//
int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';  // 字符0是48;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT) {
		printf("请输入坐标>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			// 合法坐标
			// 1. 踩雷
			if (mine[x][y] == '1') {
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else {
				// 计算x,y周围有几个雷;
				int count = get_mine_count(mine, x,y);
				show[x][y] = count + '0'; 
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else {
			printf("输入非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("you win!\n");
		
	}
}