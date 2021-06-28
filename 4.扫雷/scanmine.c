#include "game.h"


void menu() {
	printf("---------------------------\n");
	printf("-------1.play--------------\n");
	printf("-------0.exit--------------\n");
}

void game() {
	// 存雷的信息;
	char mine[ROWS][COLS] = { 0 };
	// 查出雷的信息;
	char show[ROWS][COLS] = { 0 };
	// 初始化棋盘;
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// 打印棋盘;
	DisplayBoard(show, ROW, COL);
	// 布置雷
	SetMine(mine, ROW, COL);
	// DisplayBoard(mine, ROW, COL);
	// 扫雷
	FindMine(mine, show, ROW, COL);
	
}


int main() {

	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("请输入>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit game!\n");
			break;
		default:
			printf("输入非法，不支持，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}