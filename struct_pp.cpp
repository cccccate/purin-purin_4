//�ļ�����struct_pp
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����ṹ���е�ָ���Ա�������Ա

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name����
	int age;//��������
};
struct man
{
	char *name;
	int age;
};


int main()
{
	struct student st = {0};
	struct student st1 = {0};
	strcpy(st.name,"����");
	st.age = 30;
	st1 = st;//�ṹ����������ĸ�ֵ
	printf("%s,%d\n",st1.name,st1.age);

	struct man m = {0};//���󣬳�ʼ����m��nameΪ��ָ�룬ֱ�ӿ������������һ��
	struct man m1 = {0};
	m.name = calloc(20,sizeof(char));//��Ҫ����free
	strcpy(m.name,"��");
	m.age = 30;
	m1.name = calloc(20,sizeof(char));
	memcpy(m1.name,m.name,20);//���
	m1.age = m.age;
	free(m1.name);
	//m1 = m;
	free(m.name);
	printf("%s,%d\n",m1.name,m1.age);


  return 0;
}