#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//expl_1:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	int sum = a + b;
//	int difference = a - b;
//	int product = a * b;
//	int quotient1 = a / b;
//	double quotient2 = (double)a / b;
//	int ave1 = (a + b) / 2;
//	double ave2 = (double)(a + b) / 2;
//	printf("��Ϊ��%d\n", sum);
//	printf("��Ϊ��%d\n", difference);
//	printf("��Ϊ��%d\n", product);
//	printf("��Ϊ��%d��%f\n", quotient1, quotient2);
//	printf("ƽ��ֵΪ��%d, %f\n",ave1,ave2 );
//
//}

//exp1_3
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = 0;
//	printf("����ǰa=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������a=%d,b=%d\n", a, b);
//	
//	return 0;
//}
//
//exp1_4
//int main()
//{
//	const double pi = 3.141592;
//	double r;
//	double h;
//	printf("������Բ������İ뾶�����ף���Բ���ĸߣ����ף�:");
//	scanf("%lf%lf", &r, &h);
//	double area = 2 * pi * r * r + 2 * pi * r * h;
//	double money = 10 * area;
//	printf("Բ����ı������ƽ�����ף���������ã�Ԫ���ֱ�Ϊ:%.2f, %.2f",area,money);
//	return 0;
//}

//exp1_6
//int main()
//{
//	int num = 0;
//	printf("������һ����λ��������");
//	scanf("%d", &num);
//	if (num >= 100 && num <= 999)
//	{
//		int a = num / 100;
//		int b = num % 10;
//		int c = (num / 10) % 10;
//		printf("�����������ǣ�%d%d%d", b, c, a);
//	}
//	else
//	{
//		printf("�������\n");
//	}
//	return 0;
//}

//10.21
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 1;
//	int sum = 0;
//	while (i <= n)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//

//int main()
//{
//	unsigned int a = 0;
//	int b = -1;
//	//if (a < b)             /* �Զ�����ת����int-->unsigned int*/
//	//{
//	//	printf("a<b");
//	//}
//	//else
//	//{
//	//	printf("a>b");
//	//}
//	printf("%u", b);
//	return 0;
//}

//int main()
//{
//	int n ;
//	scanf("%d", &n);
//	int i = 1;
//	int fac = 1;
//	do
//	{
//		fac = fac * i;
//		i++;
//	} while (i <= n);
//	printf("%d", fac);
//	return 0;
//}


//11.5
//�����exp2_6.c������3��double�ͱ���a, b, c��ֵ����if����ж������ܷ񹹳������Σ�
//����ܹ������������ǹ��ɵĺ��������Σ��ȱ������Ρ����������Ρ�ֱ�������Ρ�����ֱ�������Ρ�һ�������Σ���
//�������������жϵĽ����������ο�ʵ��ָ���̲ĵ�����ͼ4.20���ȶ�a, b, c������С�����������Լ򻯴��룩
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	while (1)
//	{
//		scanf("%lf%lf%lf", &a, &b, &c);
//		//ȷ��c���
//		if (a > c)
//		{
//			double tmp1 = a;
//			a = c;
//			c = tmp1;
//		}
//		if (b > c)
//		{
//			double tmp2 = b;
//			b = c;
//			c = tmp2;
//		}
//		if (a + b > c)
//		{
//			if (fabs(a - b) < 1e-5 || fabs(a - c) < 1e-5 || fabs(b - c) < 1e-5)
//			{
//				if (fabs(a - b) < 1e-5 && fabs(a - c) < 1e-5)
//				{
//					printf("�ȱ�������\n");
//				}
//				else if (fabs(a * a + b * b - c * c) < 1e-1)
//				{
//					printf("����ֱ��������\n");
//				}
//				else
//				{
//					printf("����������\n");
//				}
//			}
//			else if (fabs(a * a + b * b - c * c) < 1e-5)
//			{
//				printf("ֱ��������\n");
//			}
//			else
//			{
//				printf("һ��������\n");
//			}
//		}
//		else
//		{
//			printf("���ܹ���������\n");
//		}
//	}
//	return 0;
//}


//����while��for��do��whileѭ��������������⣺
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (1)
//	{
//		scanf("%d", &n);
//		double a = 1;
//		double b = 2;
//		double c = 0;
//		double sum = 0;
//		int flag = 1;
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			sum += flag * (b / a);
//			c = a + b;
//			a = b;
//			b = c;
//			flag = -flag;
//		}
//		printf("%f\n", sum);
//	}
//	return 0;
//}

//��д����exp3_4.c������һ��ѭ���жϴӼ��̶����������x�Ƿ�Ϊ������������жϽ�����ڴ˻����ϸ�д��
// �ټ������ѭ�����ҳ��涨��Χ��a, b���ڵ���������������ÿ��5���ĸ�ʽ�����
// ������a��b�����Ӽ������벢�ҷ�ΧΪ��10��a��b��1000��
//ʵ����
//��	��д����exp3_4.cʵ�ִӼ����϶���һ��������x���ж��Ƿ�Ϊ����������жϽ�����������£�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int x;
//	do
//	{
//		printf("������һ����������");
//		scanf("%d", &x);
//		if (x <= 0)
//		{
//			printf("����Ƿ������ٴ�����\n");
//		}
//		else
//		{
//			if (x == 1)
//			{
//				printf("��������\n");
//			}
//			else
//			{
//				int i;
//				for (i = 2; i <=(int)sqrt(x); i++)
//				{
//					if (x % i == 0)
//					{
//						printf("��������\n");
//						break;
//					}
//				}
//				if (i>(int)sqrt(x))
//				{
//					printf("������\n");
//				}
//			}
//		}
//	} while (x <= 0);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int i;
//	for (i = 2; i <= (int)sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	if (i > (int)sqrt(x))
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int a, b;
//	do
//	{
//		printf("��������Ҫ�������ķ�Χ��10<=a<=b<=1000): ");
//		scanf("%d%d", &a,&b);
//		if (a<10 || b>1000 || a>b )
//		{
//			printf("����Ƿ������ٴ�����\n");
//		}
//		else
//	    {
//			int i;
//			int count = 0;
//			for (i = a; i <= b; i++)
//			{
//				int ret = is_prime(i);
//				if (ret)
//				{
//					printf("%d ", i);
//					count++;
//					if (count % 5 == 0)
//					{
//						printf("\n");
//					}
//				}
//			}
//		}
//	} while (a < 10 || b>1000 || a > b);
//	return 0;
//}
//
//
//
//����ʵ��̲�ʵ��������Ŀ6���������exp3_6.c������ѭ��Ƕ�����һ�����Ρ�
//*
//***
//*****
//*******
//*****
//***
//*
//ʵ����
//����д������exp3_6.c��Դ���벢���ʵ�ע�ͣ�

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m = n / 2;
//	int i;
//	//ǰ����
//	for (i = 0; i < m; i++)
//	{
//		int j;
//		for (j = 0; j < m-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�м�һ��
//	if (n % 2)
//	{
//		int k = i;
//		for (i = 0; i < 2 * k + 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//������
//	for (i = m-1; i >= 0; i--)
//	{
//		int j;
//		for (j = 0; j < m - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	//ǰ����
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * i + 1)/2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�м�һ��
//	int k = i;
//	for (i = 0; i < (2 * k + 1)/2+1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	//������
//	for (i = 2; i >= 0; i--)
//	{
//		int j;
//		for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * i + 1)/2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	//ǰ����
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		/*for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}*/
//		for (j = 0; j < (2 * i + 1)/2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�м�һ��
//	int k = i;
//	for (i = 0; i < (2 * k + 1)/2+1; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	//������
//	for (i = 2; i >= 0; i--)
//	{
//		int j;
//		/*for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}*/
//		for (j = 0; j < (2 * i + 1) / 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//11.14
//1.�����exp4_2.c�����ú������ã���ӡ��ͬ�������ַ����ɵĵ��������Ρ�
// ����Ҫ�󣺶���һ������ԭ��void DrawTriangle(int n, char c); ��
// ʵ�ֹ���Ϊ��ӡһ��n�е����ַ�c��ɵĵ��������Ρ�
// ��������øú�����ʵ�ִ�ӡ5�С� '* ' ����10�С� '# ' ���ĵ��������Ρ�
//#include<stdio.h>
//void DrawTriangle(int n, char c)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	DrawTriangle(5, '*');
//	printf("\n");
//	DrawTriangle(10, '#');
//	return 0;
//}

//2.
//�����exp4_5.c����֤��°ͺղ��룺2000���ڵ���ż����������2�����ܹ��ֽ�Ϊ��������֮�͡�
// ���㷨��ʾ���������ֽ�Ϊ����������Ȼ���ж������Ƿ��Ϊ������
// ���ǣ����������Ⲣ������������½��зֽ���жϡ����У��ж�һ�������Ƿ�Ϊ�������ú���ʵ�֡�
// ÿ��ż��ֻҪ�õ�һ�ַֽ��ֹͣ������Ҫ�����ż����������������ϣ���
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i, j;
//	int count = 0;
//	for (i = 4; i <= 2000; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (is_prime(j) && is_prime(i - j))
//			{
//				if (count % 4 == 0)
//				{
//					printf("\n");
//				}
//				printf("%-4d=%-4d+%-4d       ", i, j, i - j);
//				count++;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//3.�����exp4_7.c���ֱ��õ�����ѭ����������ݹ鷽��ʵ������������������Լ����
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	//bΪ���Լ��
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int max(int x, int y)
//{
//	int z = 0;
//	int n = 0;
//	if (z = x % y)
//	{
//		n = max(y, z);
//	}
//	if (z == 0)
//	{
//		return y;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//4.
//�õ������۲����exp4_8.c�����й��̣�����¼���ֱ�����ÿһ��ִ��ʱ�ı仯�����
//�ڱ������дÿһ�����ٲ�ÿ��������Ӧ��ֵ��
//����������¡�
//#include<stdio.h>
//int a = 1;
//int f(int a)
//{
//    int b = 2;
//    static int c = 3;
//    a = a + 1;
//    b = b + 1;
//    c = c + 1;
//    return (a + b + c);
//}
//
//int main()
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        a = a + 2;
//        printf("%d \n", f(a));
//    }
//    return 0;
//}


//#include <stdio.h>
//
//// �ݹ麯�������Լ��
//int gcd(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return gcd(b, a % b);
//    }
//}
//
//int main() {
//    int num1, num2;
//
//    printf("�������һ������: ");
//    scanf("%d", &num1);
//
//    printf("������ڶ�������: ");
//    scanf("%d", &num2);
//
//    int result = gcd(num1, num2);
//
//    printf("%d��%d�����Լ����: %d\n", num1, num2, result);
//
//    return 0;
//}
//


//11.19
//��д����exp5_1.c�����������ж���һά����int array[10]���Զ������º�����
//1����������Ԫ�أ�
//2���������Ԫ�أ�
//3��������Ԫ��ƽ��ֵ��
//4���������Ԫ�����ֵ��
//5���������Ԫ����Сֵ��
//6������ĳ��ֵԪ���Ƿ���ڣ������ڣ�������±꣩��
//7��������Ԫ������
//Ҫ�����������жԸ��Զ��庯�����е��úͲ��ԡ�
//#include<stdio.h>
////��������Ԫ��
//void input(int array[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//}
//
////�������Ԫ��
//void output(int array[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//
////������Ԫ��ƽ��ֵ
//int avar(int array[],int sz)
//{
//	int i;
//	double sum = 0;
//	for (i = 0; i < sz; i++)
//	{
//		sum += (double)array[i];
//	}
//	return sum / (double)sz;
//}
//
////�������Ԫ�����ֵ
//int max_num(int array[],int sz)
//{
//	int i;
//	int max = array[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (array[i] > max)
//		{
//			max = array[i];
//		}
//	}
//	return max;
//}
//
////�������Ԫ����Сֵ
//int min_num(int array[],int sz)
//{
//	int i;
//	int min = array[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (array[i] < min)
//		{
//			min = array[i];
//		}
//	}
//	return min;
//}
//
////����ĳ��ֵԪ���Ƿ���ڣ������ڣ�������±꣩
//int search_num(int array[],int sz,int n)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if (array[i] == n)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////������Ԫ������
//void my_sort(int array[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz-1 ; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (array[j] > array[j + 1])
//			{
//				int tmp = array[j + 1];
//				array[j + 1] = array[j];
//				array[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int array[10];
//	int sz = sizeof(array) / sizeof(array[0]);
//	//��������Ԫ��
//	input(array,sz);
//
//	//�������Ԫ��
//	output(array,sz);
//
//	//������Ԫ��ƽ��ֵ
//	int ret = avar(array,sz);
//	printf("%d\n", ret);
//	
//	//�������Ԫ�����ֵ
//	int max=max_num(array,sz);
//	printf("%d\n", max);
//
//	//�������Ԫ����Сֵ
//	int min = min_num(array,sz);
//	printf("%d\n", min);
//
//	//����ĳ��ֵԪ���Ƿ���ڣ������ڣ�������±꣩
//	int n;
//	scanf("%d", &n);
//	int sign = search_num(array, sz, n);
//	if (sign == -1)
//	{
//		printf("�Ҳ�����Ԫ��\n");
//	}
//	else
//	{
//		printf("%d\n", sign);
//	}
//
//	//������Ԫ������
//	my_sort(array, sz);
//	output(array, sz);
//
//	return 0;
//}

//2.��д����exp5_2.c������һ��3*3�ľ���Ҫ��ʵ�֣�
//1��	�������
//2��	�������
//3��	����ת�ã�
//4��	����������Խ���Ԫ��֮�͡�
//���й��ܾ������Զ��庯��ʵ�֡�

//#include<stdio.h>
////�������
//void input(int arr[3][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//}
//
////�������
//void output(int arr[3][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void trans(int arr[3][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i > j)
//			{
//				int tmp = arr[i][j];
//				arr[i][j] = arr[j][i];
//				arr[j][i] = tmp;
//			}
//		}
//	}
//}
//
////����������Խ���Ԫ��֮��
//int sum(int arr[3][3])
//{
//	int sum = 0;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int arr[3][3];
//	//�������
//	input(arr);
//
//	//�������
//	output(arr);
//
//	//����ת��
//	trans(arr);
//	output(arr);
//
//	//����������Խ���Ԫ��֮��
//	int ret = sum(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//3.��д����exp5_4.c�����ɲ����һ��N������������ͼ1��ʾ��
//1	    2	3	4
//12	13	14	5
//11	16	15	6
//10	9	8	7
//ͼ 1  N = 4 ʱ�ķ���
//#include<stdio.h>
//void generate(int n)
//{
//	int arr[100][100];
//	int left = 0, right = n - 1, top = 0, bottom = n - 1;
//	int row, col;
//	int num = 1;
//	while (left <= right && top <= bottom)
//	{
//		for (col = left; col <= right; col++)
//		{
//			arr[top][col] = num++;
//		}
//		top++;
//		for (row = top; row <= bottom; row++)
//		{
//			arr[row][right] = num++;
//		}
//		right--;
//		for (col = right; col >= left; col--)
//		{
//			arr[bottom][col] = num++;
//		}
//		bottom--;
//		for (row = bottom; row >= top; row--)
//		{
//			arr[row][left] = num++;
//		}
//		left++;
//	}
//	//��ӡ������
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%-4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	generate(n);
//	return 0;
//}


//11.25
//Ľ����ҵ��
//1.
//#include<stdio.h>
//int main()
//{
//	int y, m, d;
//	scanf("%d-%d-%d", &y, &m, &d);
//	int arr[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//	{
//		arr[1] = 29;
//	}
//	else
//	{
//		arr[1] = 28;
//	}
//	int sum = 0;
//	int i;
//	for (i = 0; i < m - 1; i++)
//	{
//		sum += arr[i];
//	}
//	sum += d;
//	printf("%d\n", sum);
//	return 0;
//}

//2.
//#include<stdio.h>
//int fun(int a, int b, int r[])
//{
//	int i;
//	int count = 0;
//	for (i = a; i <= b; i++)
//	{
//		if (i % 7 == 0 || i % 11 == 0)
//		{
//			if (i % 7 == 0 && i % 11 == 0)
//			{
//				;
//			}
//			else
//			{
//				r[count++] = i;
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = fun(a, b, arr);
//	int i;
//	for (i = 0; i < ret; i++)
//	{
//		if (i == ret - 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//3.
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//		sum += arr[i];
//	}
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == max)
//		{
//			count1++;
//		}
//		if (arr[i] == min)
//		{
//			count2++;
//		}
//	}
//	double aver = 1.0 * (sum - count1 * max - count2 * min) / (10 - count1 - count2);
//	printf("%lf\n", aver);
//	return 0;
//}

//11.30
//1.
//#include<stdio.h>
//void move(int arr[])
//{
//	int tmp = arr[9];
//	int i;
//	for (i = 8 ; i >=0 ; i--)
//	{
//		arr[i + 1] = arr[i];
//	}
//	arr[0] = tmp;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int m;
//	scanf("%d", &m);
//	int i;
//	for (i = 0; i < m; i++)
//	{
//		move(arr);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//2.
//#include<stdio.h>
//void sort(int* a, int n)
//{
//	int i, j, min, flag;
//	for (i = 0; i < n - 1; i++)
//	{
//		min = a[i];
//		flag = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[j] < min)
//			{
//				min = a[j];
//				flag = j;
//			}
//		}
//		a[flag] = a[i];
//		a[i] = min;
//
//	}
//}
//int main()
//{
//	int arr[10];
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, n);
//	for (i = 0; i < n ; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//3.
//#include<stdio.h>
//int SumDiff(int a, int b, int* dif)
//{
//    *dif = a - b;
//    return a + b;
//}
//int main()
//{
//    int a, b, sum, dif;
//    scanf("%d%d", &a, &b);
//    sum = SumDiff(a, b, &dif);
//    printf("sum=%d, difference=%d\n", sum, dif);
//    return 0;
//}
// 
// 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s1[] = "Basic", s2[] = "Base";
//	if(strcmp(s1, s2))
//		strcpy(s1, s2);
//	printf("%s\n", s1);
//}


//12 5
//1.����ָ���Ӧ�ã�
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int cmp(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int (*pf)(int x, int y);
//	pf = add;
//	printf("%d\n", pf(x, y));
//	pf = cmp;
//	printf("%d\n", pf(x, y));
//	return 0;
//}


//12.9
//1.gets(),puts()
//#include<stdio.h>
//int main()
//{
//	char ch[15]={0};
// 	gets(ch);
//	puts(ch);
//	return 0;
//}

//2.
//#include<stdio.h>
//#include<string.h>
//
//int pali(char* ch, int n)
//{
//	char* start = ch;
//	char* end = ch + n - 1;
//	while (*start == ' ')
//	{
//		start++;
//	}
//	while (*end == ' ')
//	{
//		end--;
//	}
//	while (start <= end)
//	{
//		if (*start != *end)
//		{
//			return 0;
//		}
//		start++;
//		end--;
//	}
//	return 1;
//}
//
//int main()
//{
//	char r;
//	do
//	{
//		char ch[50] = { 0 };
//		printf("Input a string:");
//		gets(ch);
//		int len = strlen(ch);
//		int ret = pali(ch, len);
//		if (ret)
//		{
//			printf("It is a palindorm.\n");
//		}
//		else
//		{
//			printf("It is not a palindorm.\n");
//		}
//		printf("continue?(Y/N)");
//		r = getchar();
//		getchar();   //�����ո�
//	} while (r != 'N' && r != 'n');
//	return 0;
//}

//3.
//#include<stdio.h>
//int main()
//{
//	long  n = 0;
//	scanf("%ld", &n);
//	char s[] = "0123456789ABCDEF";
//	char tmp[9];
//	tmp[8] = '\0';
//	char* p = &tmp[8];
//	while (n)
//	{
//		*--p = s[n % 16];
//		n = n / 16;
//	}
//	printf("%s\n", p);
//	return 0;
//}

//4.
//#include<stdio.h>
//#define MAXSIZE 50
//int main()
//{
//	char ch[MAXSIZE];
//	char tmp[MAXSIZE];
//	scanf("%s", ch);
//	int len = strlen(ch);
//	int i, j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (ch[i] < '9' && ch[i] > '0')
//		{
//			tmp[j++] = ch[i];
//		}
//	}
//	tmp[j] = '\0';
//	printf("%s\n", tmp);
//	return 0;
//}

//5.
//#include<stdio.h>
//#include<string.h>
//#define MAXSIZE 50
//int main()
//{
//	printf("Input the source sentence:");
//	char ch[MAXSIZE][MAXSIZE];
//	int i = 0, j = 0;
//	char r;
//	/*do
//	{
//		scanf("%s", ch[i++]);
//		r=(char)getchar();
//	} while (r != '\n');*/
//	do
//	{
//		r = (char)getchar();
//		if (r >= 'a' && r <= 'z' || r>='A' && r <= 'Z')
//		{
//			ch[i][j] = r;
//			j++;
//		}
//		else
//		{
//			ch[i][j] = '\0';
//			j = 0;
//			i++;
//		}
//	} while (r != '\n');
//	printf("Input the key word:");
//	char key[MAXSIZE];
//	scanf("%s", key);
//	int n = i;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(ch[i], key) == 0)
//		{
//			count++;
//		}
//	}
//	printf("There are %d key word in this sentence.\n", count);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int search(const char* ps, const char* pk)
//{
//	int count = 0;
//	int i = 0;
//	char tmp[15];
//	while (*ps)
//	{
//		i = 0;
//		while ((*ps >= 'a' && *ps <= 'z') || (*ps >= 'A' && *ps <= 'Z'))
//		{
//			tmp[i++] = *ps++;
//		}
//		tmp[i] = '\0';
//		ps++;
//		if (strcmp(pk, tmp) == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char source[100];
//	char key[15];
//	printf("Input the source sentence:");
//	gets(source);
//	printf("Input the key word:");
//	gets(key);
//	printf("There are %d key word in this sentence.\n", search(source, key));
//	return 0;
//}