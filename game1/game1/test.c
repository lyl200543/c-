#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
int count = 0;
void menu()
{
	printf("*******************  ������  *********************\n");
	printf("****************** 1.��ʼ��Ϸ ********************\n");
	printf("****************** 0.�˳���Ϸ ********************\n");
	printf("**************************************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	initboard(board,ROW,COL);
	//��ӡ����
	printboard(board, ROW, COL);
	//ȷ���Ⱥ�˳��
	printf("\n");
	printf("�ж��Ⱥ�˳��\n");
	printf("��������루0/1����");
	int m;
	scanf("%d", &m);
	int n = rand() % 2;
	printf("���������%d\n", n);
	if (m == n)
	{
		while (1)
		{
			/*�������*/
			playerboard(board, ROW, COL);
			count++;
			char ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("��һ�ʤ��\n");
				printf("\n");
				break;
			}
			else if (ret == '#')
			{
				printf("���Ի�ʤ��\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("ƽ��\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
			//��������
			computerboard(board, ROW, COL);
			count++;
			ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("��һ�ʤ\n");
				printf("\n");

				break;
			}
			else if (ret == '#')
			{
				printf("���Ի�ʤ��\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("ƽ��\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
		}
	}
	else
	{
		while (1)
		{
			//��������
			computerboard(board, ROW, COL);
			count++;
			char ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("��һ�ʤ��\n");
				printf("\n");
				break;
			}
			else if (ret == '#')
			{
				printf("���Ի�ʤ��\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("ƽ��\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
			/*�������*/
			playerboard(board, ROW, COL);
			count++;
			ret = is_win(board, ROW, COL, count);
			if (ret == '*')
			{
				printf("��һ�ʤ\n");
				printf("\n");

				break;
			}
			else if (ret == '#')
			{
				printf("���Ի�ʤ��\n");
				printf("\n");

				break;
			}
			else if (ret == 'Q')
			{
				printf("ƽ��\n");
				printf("\n");

				break;
			}
			printboard(board, ROW, COL);
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("�����룺");
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
			printf("�������\n");
			break;
		}
	} while(input);
	return 0;
}