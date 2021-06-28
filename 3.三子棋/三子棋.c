#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("#########################\n");
	printf("#####1. play  0. exit####\n");
	printf("#########################\n");
}


void game() {
	char ret = 0;
	// 棋盘
	char board[ROW][COL] = {0};
	// 初始化棋盘
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DisplayBoard(board, ROW, COL);
	// 下棋
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢\n");
	}
	else if(ret == '#'){
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			printf("三子棋\n");
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("选择错误，重新选择。\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}