#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("***************ɨ��***************\n");
	printf("************1.��ʼ��Ϸ************\n");
	printf("************0.�˳���Ϸ************\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ������׵���Ϣ������
	intiboard(mine, ROWS, COLS,'0');
	//��ʼ��ɨ����Ϣ������
	intiboard(show, ROWS, COLS,'*');
	/*printboard(mine, ROW, COL);*/
	printboard(show, ROW, COL);
	//������
	mineset(mine, ROW, COL);
	//printboard(mine, ROW, COL);
	//ɨ��
	findmine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��������룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}