#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//ջ�����������Ƶ����Ա�ֻ���ڱ�β���в����ɾ������ -->������ȳ���
    //-->�����洢�ṹ��˳��ջ

//������������������������������������������������������˳��ջ����������������������������������������������������������

//ջ���������ͣ�
//#define MAXSIZE 100
//#define SElemType int  //������������������
//typedef struct
//{
//    SElemType* base;//ջ��ָ��
//    SElemType* top;//ջ��ָ��  -->Ϊ�˷��������topָ��ָ����������ջ��Ԫ��֮�ϵ��±��ַ
//    int stacksize;//ջ�����������
//}SqStack;
//
////ջ�ĳ�ʼ��
//int InitStack(SqStack* s)
//{
//    (*s).base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
//    if ((*s).base == NULL)
//    {
//        perror("InitStack:");
//        return ERROR;
//    }
//    (*s).top = (*s).base;
//    (*s).stacksize = MAXSIZE;
//    return OK;
//}
//
////�ж�ջ�Ƿ�Ϊ��
//int StackEmpty(SqStack s)
//{
//    if (s.base == s.top)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
////��ջ��Ԫ�ظ���
//int StackLength(SqStack s)
//{
//    return s.top - s.base;
//}
//
////���ջ
//void StackClear(SqStack* s)
//{
//    if ((*s).base)
//    {
//        (*s).stacksize = 0;
//    }
//}
//
////����ջ
//void StackDestroy(SqStack* s)
//{
//    if ((*s).base)
//    {
//        free((*s).base);
//        (*s).base = NULL;
//        (*s).top = NULL;
//        (*s).stacksize = 0;
//    }
//}
//
////��ջ
//int push(SqStack* s, SElemType e)
//{
//    //�ж�ջ�Ƿ�����
//    if (((*s).top - (*s).base) == (*s).stacksize)
//    {
//        //���ݵ�ԭ��������
//        int newsize = 2 * (s->stacksize);
//        SElemType* newbase = (SElemType*)realloc(s->base, newsize * sizeof(SElemType));
//        if (newbase == NULL)
//        {
//            perror("push");
//            return 0;
//        }
//        s->base = newbase;
//        s->top = s->base + s->stacksize;
//        s->stacksize = newsize;
//        //return 0;
//    }
//    *(s->top)++ = e;
//    return 1;
//}
//
////��ջ
//int pop(SqStack* s, SElemType* e)
//{
//    if (s->base == s->top) 
//    {
//        return ERROR;
//    }
//    *e = *(--s->top);
//    return OK;
//}


//----���䣺��Ľ�Σ�
//��һ�������ʾ����ջ������ջ���м�����
// 
//#define ElemType int
//#define MAXSIZE 100
//typedef struct DStack
//{
//    ElemType data[MAXSIZE];
//    int top1;
//    int top2;
//}*DStack;
//
//void Push(DStack s, ElemType e, int tag)
//{
//    if (s->top2 - s->top1 == 1)
//    {
//        printf("ջ��\n");
//        return;
//    }
//    if (tag == 1)
//    {
//        s->data[++(s->top1)] = e;
//    }
//    else
//    {
//        s->data[--(s->top2)] = e;
//    }
//}
//
//ElemType Pop(DStack s, int tag)
//{
//    if (tag == 1)
//    {
//        if (s->top1 == -1)
//        {
//            printf("ջ1��\n");
//            return NULL;
//        }
//        else
//        {
//            return s->data[(s->top1)--];
//        }
//    }
//    else
//    {
//        if (s->top2 == MAXSIZE)
//        {
//            printf("ջ2��\n");
//            return NULL;
//        }
//        else
//        {
//            return s->data[(s->top2)++];
//        }
//    }
//}

//Ӧ�ã����ʽ��ֵ/��׺���ʽת��Ϊ��׺���ʽ


//--------------------------------------------------��ջ----------------------------------------------------

//��ջ�ı�ʾ
//ע�⣺1.�����ͷָ�����ջ��     2.����Ҫͷ�ڵ�   3.��ջ�൱��ͷָ��ָ���

//#define SElemType int
//typedef struct StackNode
//{
//    SElemType data;
//    struct StackNode* next;
//}StackNode,*LinkStack;
//
////��ջ�ĳ�ʼ��
//int InitStack(LinkStack* s)
//{
//    *s = NULL;
//    return OK;
//}
//
////�ж���ջ�Ƿ�Ϊ��
//int StackEmpty(LinkStack s)
//{
//    if (s == NULL)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
////��ջ
//int Push(LinkStack* s, SElemType e)
//{
//    StackNode* p = (StackNode*)malloc(sizeof(StackNode));
//    if (p == NULL)
//    {
//        perror("Push:");
//        return 0;
//    }
//    p->data = e;
//    p->next = *s;
//    *s = p;
//    return 1;
//}
//
////��ջ
//int Pop(LinkStack* s, SElemType* e)
//{
//    if (*s == NULL)
//    {
//        printf("��ջ�޷���ջ");
//        return ERROR;
//    }
//    StackNode* p = *s;
//    *e = (*s)->data;
//    (*s) = (*s)->next;
//    free(p);
//    p = NULL;
//    return OK;
//}

