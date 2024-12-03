#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>

//#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 30
#define InitCapcity 3
#define ADD_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//��̬�İ汾:
//typedef struct Contact
//{
//	int count;
//	PeoInfo data[MAX];
//}Contact;

//��̬�İ汾:
typedef struct Contact
{
	int count;
	PeoInfo* data;
	int capcity;
}Contact;



//��ʼ��ͨѶ¼
int InitContact(Contact* pc);
//�����ϵ��
void AddContact(Contact* pc);
//��ʾͨѶ¼
void ShowContact(Contact* pc);
//ɾ����ϵ��
void DelContact(Contact* pc);
//������ϵ��
void SearchContact(Contact* pc);
//�޸���ϵ��
void ModifyContact(Contact* pc);
//����ϵ������
void SortContact(Contact* pc);
//�ͷŶ�̬�ڴ�ռ�
void ExitContact(Contact* pc);
//����ͨѶ¼��Ϣ���ļ���
void SaveContact(Contact* pc);
//�����ļ���Ϣ��ͨѶ¼��
void LoadContact(Contact* pc);





