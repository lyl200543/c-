#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h" 

//��̬�İ汾:
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//	//memset(pc, 0, sizeof(pc));
//}

//��̬�İ汾:
void check_capcity(Contact* pc)
{
	if (pc->capcity == pc->count)
	{
		PeoInfo* ptr = realloc(pc->data, (pc->capcity + ADD_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
		}
		else
		{
			pc->data = ptr;
			printf("���ݳɹ�\n");
		}
	}
}

void LoadContact(Contact* pc)
{
	FILE* pfread = fopen("Contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo buf;
	//fread�ķ���ֵΪ��ȡ��Ԫ�ظ������˴���ȡ�ɹ�����1������EOF����0
	while (fread(&buf, sizeof(PeoInfo), 1, pfread) == 1)
	{
		check_capcity(pc);
		pc->data[pc->count] = buf;
		pc->count++;
	}
	fclose(pfread);
	pfread = NULL;
}

int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->capcity = InitCapcity;
	pc->data = (PeoInfo*)calloc(InitCapcity, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	LoadContact(pc);
	return 0;
}

//��̬�İ汾:
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("ͨѶ¼����\n");
//		return;
//	}
//	printf("������������> ");
//	scanf("%s", pc->data[pc->count].name);
//	printf("���������䣺> ");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("�������Ա�> ");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰���룺> ");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ס��ַ��> ");
//	scanf("%s", pc->data[pc->count].addr);
//	printf("��ӳɹ�\n");
//	pc->count++;
//}

//��̬�İ汾:


void AddContact(Contact* pc)
{
	assert(pc);
	check_capcity(pc);

	printf("������������> ");
	scanf("%s", pc->data[pc->count].name);
	printf("���������䣺> ");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�> ");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰���룺> ");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ס��ַ��> ");
	scanf("%s", pc->data[pc->count].addr);
	printf("��ӳɹ�\n");
	pc->count++;
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "����", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-30s\n",  pc->data[i].name, 
								pc->data[i].age,
								pc->data[i].sex,
								pc->data[i].tele, 
								pc->data[i].addr);
	}
}

const int find_by_name(Contact* pc, char name[])
{
	assert(pc);
	int i;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("�޷�ɾ��\n");
		return;
	}
	//����
	char name[20];
	printf("������Ҫɾ������ϵ�˵����֣�>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	//ɾ��
	int i;
	for (i = ret; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
}

void SearchContact(Contact* pc)
{
	char name[20];
	printf("������Ҫ���ҵ���ϵ�˵����֣�>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	printf("����ϵ�˴���\n");
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "����", "��ַ");
	printf("%-10s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[ret].name,
												pc->data[ret].age,
												pc->data[ret].sex,
												pc->data[ret].tele,
												pc->data[ret].addr);

}

void ModifyContact(Contact* pc)
{
	char name[20];
	printf("������Ҫ�޸ĵ���ϵ�˵����֣�>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	printf("��ϵ�˴��ڣ����Կ�ʼ�޸�\n");
	printf("������������> ");
	scanf("%s", pc->data[ret].name);
	printf("���������䣺> ");
	scanf("%d", &(pc->data[ret].age));
	printf("�������Ա�> ");
	scanf("%s", pc->data[ret].sex);
	printf("������绰���룺> ");
	scanf("%s", pc->data[ret].tele);
	printf("�������ס��ַ��> ");
	scanf("%s", pc->data[ret].addr);
	printf("�޸ĳɹ�\n");
}

int data_cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), data_cmp_by_name);
	printf("����ɹ�\n");
}

void ExitContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void SaveContact(Contact* pc)
{
	FILE* pfwrite = fopen("Contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;
}
