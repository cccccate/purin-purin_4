//�ļ�����struct_paixu
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����ṹ�����鰴����������,ð������

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	 char name[20];
	 int age;
	 int sex;//��Ϊ1ŮΪ2
};

//�����ַ�������
void swap_str(char *a,char *b)
{
	char tmp[20] = { 0 };
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}
//�������䣬�Ա�
void swap_int(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void swap_char(char *a,char *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

int main()
{
	struct student st[] = { {"��",30,1}, {"��",35,0}, {"��",20,1} };
	int i,j;

	for(i=0;i<3;i++)
	{
		for (j=1;j<3-i;j++)
		{
			if(st[j].age<st[j-1].age)
			{
				swap_str(st[j].name,st[j-1].name);
				swap_int(&st[j].age,&st[j-1].age);
				swap_int(&st[j].sex,&st[j-1].sex);
			}
		}
	}

	for(i = 0;i<3;i++)
	{
		if(st[i].sex == 1)
			printf("%s,%d,��\n", st[i].name,st[i].age);
		else
			printf("%s,%d,Ů\n", st[i].name,st[i].age);

	}
	return 0;
}