#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printboard(char board[ROW][COL], int row, int col)
{

	int i;
	printf(" 0");
	for (i = 1; i <= row; i++)
	{
		printf(" %d  ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		int j;
		printf("%2d", i + 1);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		printf("  ");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}

void playerboard(char board[ROW][COL], int row, int col)
{
	int x, y;
	do
	{
		printf("\n");
		printf("�������\n");
		printf("�������������꣺");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã�������������������");
			}
		}
		else
		{
			printf("������Ƿ�����������������");
		}
	} while (1);
}

//�����
//int obstacle(char board[ROW][COL], int row, int col)
//{
//	int i;
//	for (i = 0; i < row; i++)
//	{
//		int j;
//		for (j = 0; j < col; j++)
//		{
//			//�ж���
//			/*if (j - 1 >= 0 && j + 3 <= col)*/
//			//{
//			if (board[i][j] == '* ' && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2])
//			{
//				if (board[i][j - 1] == ' ')
//				{
//					board[i][j - 1] = '#';
//					return 0;
//				}
//				else if (board[i][j + 3] == ' ')
//				{
//					board[i][j + 3] = '#';
//
//					return 0;
//				}
//			}
//			//}
//			/*lse if (j + 2 == col)
//			{
//				if (board[i][j] == '* ' && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2])
//				{
//					if (board[i][j - 1] == ' ')
//					{
//						board[i][j - 1] = '#';
//					}
//				}
//			}
//			else if (j == 0)
//			{
//				if (board[i][j] == '* ' && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2])
//				{
//					if (board[i][j + 3] == ' ')
//					{
//						board[i][j + 3] = '#';
//					}
//				}
//			}*/
//
//			//�ж���
//			//if (i - 1 >= 0 && i + 3 <= row)
//			//{
//			if (board[i][j] == '* ' && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j])
//			{
//				if (board[i - 1][j] == ' ')
//				{
//					board[i - 1][j] = '#';
//					return 0;
//
//
//				}
//				else if (board[i + 3][j] == ' ')
//				{
//					
//					board[i + 3][j] = '#';
//					return 0;
//
//				}
//			}
//			//}
//			/*else if (i == 0)
//			{
//				if (board[i][j] == '* ' && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j])
//				{
//					if (board[i + 3][j] == ' ')
//					{
//						board[i + 3][j] = '#';
//					}
//				}
//			}
//			else if (i + 3 == row)
//			{
//				if (board[i][j] == '* ' && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j])
//				{
//					if (board[i - 1][j] == ' ')
//					{
//						board[i - 1][j] = '#';
//					}
//				}*/
//
//				//�ж϶Խ���
//			else if (board[i][j] == '* ' && board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2])
//			{
//				if (board[i - 1][j - 1] == ' ')
//				{
//					board[i - 1][j - 1] = '#';
//					return 0;
//
//				}
//				else if (board[i + 3][j + 3] == ' ')
//				{
//					board[i + 3][j + 3] = '#';
//					return 0;
//
//				}
//			}
//
//			else if (board[i][j] == '* ' && board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2])
//			{
//				if (board[i - 1][j + 1] == ' ')
//				{
//					board[i - 1][j + 1] = '#';
//					return 0;
//
//				}
//				else if (board[i + 3][j - 3] == ' ')
//				{
//					board[i + 3][j - 3] = '#';
//					return 0;
//
//				}
//			}
//		}
//	}
//	return 1;
//}
void computerboard(char board[ROW][COL], int row, int col)
{
	/*int ret = obstacle(board, ROW, COL);
	if (ret)
	{*/
		int x, y;
		printf("��������\n");
		while (1)
		{
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
		Sleep(1000);
	//}
}
	



char is_win(char board[ROW][COL], int row, int col,int count)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				//�ж���
				if (j+4 <= col)
				{
					if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4] )
					{
						return '*';
					}
				}
				//�ж���
				else if (i + 4 <= row)
				{
					if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && board[i][j] == board[i + 4][j])
					{
						return '*';
					}
				}
				//�ж϶Խ���
				else if (i + 4 <= row && j + 4 <= col)
				{
					if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] == board[i + 3][j + 3] && board[i][j] == board[i + 4][j + 4])
					{
						return '*';
					}
				}
				else if (i + 4 <= row && j - 4 >= 0)
				{
					if (board[i][j] == board[i + 1][j -1] && board[i][j] == board[i + 2][j - 2] && board[i][j] == board[i + 3][j -3] && board[i][j] == board[i + 4][j -4])
					{
						return '*';
					}
				}
			}
			if (board[i][j] == '#')
			{
				//�ж���
				if (j + 4 <= col)
				{
					if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && board[i][j] == board[i][j + 4])
					{
						return '#';
					}
				}
				//�ж���
				else if (i + 4 <= row)
				{
					if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && board[i][j] == board[i + 4][j])
					{
						return '#';
					}
				}
				//�ж϶Խ���
				else if (i + 4 <= row && j + 4 <= col)
				{
					if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] == board[i + 3][j + 3] && board[i][j] == board[i + 4][j + 4])
					{
						return '#';
					}
				}
				else if (i + 4 <= row && j - 4 >= 0)
				{
					if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2] && board[i][j] == board[i + 3][j - 3] && board[i][j] == board[i + 4][j - 4])
					{
						return '#';
					}
				}
			}
			if (count>=row*col)
			{
				return 'Q';
			}
		}
	}
	return 'c';
}
