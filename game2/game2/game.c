#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void intiboard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		int j;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}

}

void printboard(char arr[ROWS][COLS], int row, int col)
{
	int i;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


void mineset(char arr[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x - 1][y - 1] - 8 * '0';
	//����׵�λ��Ϊ'1'��û���׵�λ��Ϊ'0'����1����ASCII��ֵΪ49����0����Ϊ48����1��-��0��=1����������Χ�м����׿�ͨ����ΧԪ��֮�ͼ�ȥ8*��0��
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = row * col - COUNT;
	while (win)
	{
		printf("�������������꣺");
		int x, y;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��ϲ�㣬�㱻ը����!\n");
				printboard(mine, ROW, COL);
			}
			else
			{
				int ret = get_mine_count(mine, x, y);
				show[x][y] = ret + '0';   /*����ת��Ϊchar*/
				win--;
				printboard(show, ROW, COL);
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == 0)
	{
		printf("���ź�����ͨ����\n");
		printboard(mine, ROW, COL);
	}
}
