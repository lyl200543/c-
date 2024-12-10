#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//11.16
//1.������ʽ���ڶ��ְ취Ч�ʸ���-->�㷨��ͬ
// 
//#include<math.h>
//#include<time.h>
//double f1(int n, double a[], double x)
//{
//	int i;
//	double p = 0.0;
//	for (i = 0; i <= n; i++)
//	{
//		p += a[i] * pow(x, i);
//	}
//	return p;
//}
//double f2(int n, double a[], double x)
//{
//	int i;
//	double p = 0.0;
//	for (i = n; i >= 0; i--)
//	{
//		p = p * x + a[i];
//	}
//	return p;
//}
//
//void time_count(double(*pf)(int ,char*, double),double a[])
//{
//	int t = 100000;
//	clock_t start = clock();
//	while (t--)
//	{
//		(*pf)(9, a, 1.1);
//		//pf(9, a, 1.1);
//	}
//	clock_t stop = clock();
//	double duration = (double)(stop - start) / CLK_TCK;
//	printf("%f\n", duration);
//}
//int main()
//{
//	double a[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = 1;
//	}
//	time_count(f1,a);
//	time_count(f2,a);
//	return 0;
//}


//11.17
//1.������ʵ�֣�
// �������ݽṹ��ʽ���壺
//ADT Complex {
// ���ݶ���D = { r1, r2 | r1, r2 ����ʵ�� }
// ���ݹ�ϵ��S = { <r1, r2> | r1 ��ʵ����r2 ���鲿 }
// ����������
// assign(&C, V1, V2)
//        ��ʼ�������յĸ��� C �Ѵ���
//        ������������츴�� C��r1, r2 �ֱ� �����Բ��� v1, v2 ��ֵ��
// destroy(&C)
//        ��ʼ���������� C �Ѵ���
//        ������������� C �����١�
//}ADT Complex

//���� z = (8 + 6i)(4 + 3i) / ((8 + 6i) + (4 + 3i))
//typedef struct
//{
//	float realpart;
//	float imagpart;
//}complex;
//
//void assign(complex* A, float real, float imag)
//{
//	A->realpart = real;
//	A->imagpart = imag;
//}
//
//void add(complex* C, complex A, complex B)
//{
//	C->realpart = A.realpart + B.realpart;
//	C->imagpart = A.imagpart + B.imagpart;
//}
//
//void mul(complex* C, complex A, complex B)
//{
//	C->realpart = (A.realpart) * (B.realpart) - (A.imagpart) * (B.imagpart);
//	C->imagpart = (A.imagpart) * (B.realpart) + (A.realpart) * (B.imagpart);
//}
//
//void rev(complex* C, complex A)
//{
//	C->realpart = A.realpart;
//	C->imagpart = -A.imagpart;
//}
//
//void div(complex* C, complex A, complex B)
//{
//	if (B.realpart == 0 && B.realpart == 0)
//	{
//		printf("��ĸΪ0���޷����г���\n")
//	}
//	complex m = { 0,0 };
//	complex n = { 0,0 };
//	complex k = { 0,0 };
//	rev(&k, B);
//	mul(&m, A, k);
//	mul(&n, B, k);
//	C->realpart = (m.realpart) / (n.realpart);
//	C->imagpart = (m.imagpart) / (n.realpart);
//}
//int main()
//{
//	complex A = { 8,6 };
//	complex B = { 4,3 };
//	complex m, n, k;
//	mul(&m, A, B);
//	add(&n, A, B);
//	div(&k, m, n);
//	printf("%f+%fi\n", k.realpart, k.imagpart);
//	/*complex A = { 8,6 };
//	complex B = { 4,-3 };
//	complex k;
//	div(&k, A, B);
//	printf("%f+(%fi)\n", k.realpart, k.imagpart);*/
//	return 0;d
// }
// 
// 
// 
//11.18
//���Ա��˳���ʾ��ʵ�֣���˳���
#include<stdlib.h>
#define MAXSIZE 100
#define elemtype int
//����˳�������
typedef struct
{
	elemtype* elem;
	int length;
}sqlist;    //sequence list 

//˳���ĳ�ʼ��
int InitList_sq(sqlist* L)
{
	L->elem = (elemtype*)malloc(MAXSIZE*sizeof(elemtype));
	if (L->elem == NULL)
	{
		perror("initlist_sp:");
		return 0;
	}
	L->length = 0;
	return 1;
}

//����˳���
void DestroyList(sqlist* L)
{
	if (L->elem != NULL)
	{
		free(L->elem);
		L->elem = NULL;
	}
}

//���˳���
void ClearList(sqlist* L)
{
	L->length = 0;
}

//˳����ȡֵ
int GetElem(sqlist L, int i, elemtype* e)
{
	if (i<1 || i>(L.length))
	{
		return 0;
	}
	*e = L.elem[i - 1];
	return 1;
}

//˳���Ĳ���
int LocateElem(sqlist L, elemtype e)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (e == L.elem[i])
		{
			return i + 1;  //����Ԫ�ص����
		}
	}
	return 0;
}

//˳���Ĳ���
int ListInsert_sq(sqlist* L, int i, elemtype e)
{

	if (i<1 || i>L->length + 1)  //iֵ���Ϸ�
	{
		return 0;
	}
	if (L->length == MAXSIZE)  //�洢�ռ�����
	{
		return 0;
	}
	int j;
	for (j = L->length - 1 ; j >= i - 1 ; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}
	L->elem[i - 1] = e;
	L->length++;
	return 1;
}

//˳����ɾ��
int ListDelete_sq(sqlist* L, int i)
{
	if (i<1 || i>L->length)
	{
		return 0;
	}
	int j;
	for (j = i - 1; j <= L->length - 2; j++)
	{
		L->elem[j] = L->elem[j + 1];
	}
	L->length--;
	return 1;
}
//
//int main()
//{
//	sqlist L;
//	InitList_sq(&L);
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (!ListInsert_sq(&L, i + 1, i))
//		{
//			printf("Failed to insert element %d.\n", i);
//		}
//	}
//	for (i = 0; i < L.length ; i++)
//	{
//		printf("%d ",L.elem[i]);
//	}
//	printf("\n");
//	ListDelete_sq(&L, 10);
//	for (i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.elem[i]);
//	}
//	DestroyList(&L);
//	return 0;
//}


//���Ա��Ӧ�ã�
//1.���Ա�ĺϲ�����ȥ���ظ���Ԫ�أ�-->��˳���Ϊ��
//void combine(sqlist* La, sqlist Lb)
//{
//	//����Lb���Ա��е�Ԫ�أ����Ԫ����La�в����ڣ������La
//	int i;
//	elemtype e = 0;
//	for (i = 1; i <= Lb.length; i++)
//	{
//		GetElem(Lb, i, &e);
//		if (!LocateElem(*La, e))
//		{
//			ListInsert_sq(La, ++(La->length), e);
//		}
//	}
//}


//2.�������Ա�ĺϲ����ظ�Ԫ�ز�ȥ����
//void merge(sqlist La, sqlist Lb, sqlist* Lc)
//{
//	elemtype* pa = La.elem;
//	elemtype* pb = Lb.elem;
//	Lc->length = La.length + Lb.length;
//	Lc->elem = malloc((Lc->length) * sizeof(elemtype));
//	elemtype* pc = Lc->elem;
//	elemtype* pa_last = La.elem + La.length - 1;
//	elemtype* pb_last = Lb.elem + Lb.length - 1;
//	while (pa <= pa_last && pb <= pb_last)
//	{
//		if (*pa <= *pb)
//		{
//			*pc++ = *pa++;
//		}
//		else
//		{
//			*pc++ = *pb++;
//		}
//	}
//	//ѭ��������һ����һ�����Ա���û��Ԫ����
//	while (pa <= pa_last)
//	{
//		*pc++ = *pa++;
//	}
//	while (pb <= pb_last)
//	{
//		*pc++ = *pb++;
//	}
//}


//ϡ�����ʽ���㣺
//typedef struct 
//{
//	float coef;//ϵ��
//	int expn;//ָ��
//}data;
//
//void CreatePolyn(data** p, int i)
//{
//	*p = malloc(i * sizeof(data));
//	if (*p == NULL)
//	{
//		printf("�ڴ����ʧ��");
//		exit(1);
//	}
//	int j;
//	printf("��ֱ�����ÿһ���ϵ����ָ����");
//	for (j = 0; j < i; j++)
//	{
//		scanf("%f%d", &((*p)[j].coef), &((*p)[j].expn));
//	}
//}
//
//void PrintPolyn(data* p, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i > 0 && p[i].coef > 0) printf(" + ");
//		printf("%.2fx^%d", p[i].coef, p[i].expn);
//	}
//	printf("\n");
//}
//
//void AddPolyn(data* p1, data* p2, data** p3, int m, int n)
//{
//	*p3 = malloc((m + n) * sizeof(data));
//	if (*p3 == NULL)
//	{
//		printf("�ڴ����ʧ��");
//		exit(1);
//	}
//	int i = 0, j = 0, k = 0;
//	while (i < m && j < n)
//	{
//		if ((p1 + i)->expn == (p2 + j)->expn)
//		{
//			if ((p1 + i)->coef == -(p2 + j)->coef)
//			{
//				i++;
//				j++;
//			}
//			else
//			{
//				(*p3 + k)->coef = (p1 + i)->coef + (p2 + j)->coef;
//				(*p3 + k)->expn = (p1 + i)->expn;
//				i++;
//				j++;
//				k++;
//			}
//		}
//		else if ((p1 + i)->expn < (p2 + j)->expn)
//		{
//			(*p3)[k++] = p1[i++];
//		}
//		else
//		{
//			(*p3)[k++] = p2[j++];
//		}
//	}
//	while (i < m)
//	{
//		(*p3)[k++] = p1[i++];
//	}
//	while (j < n)
//	{
//		(*p3)[k++] = p2[j++];
//	}
//}
//
//int main()
//{
//	int m, n;
//	data* p1 = NULL;
//	data* p2 = NULL;
//	data* p3 = NULL;
//	printf("���������ʽ��������");
//	scanf("%d%d", &m, &n);
//	CreatePolyn(&p1,m);
//	CreatePolyn(&p2,n);
//	AddPolyn(p1, p2, &p3, m, n);
//	PrintPolyn(p3, m + n);
//	free(p1);
//	free(p2);
//	free(p3);
//	return 0;
//}


