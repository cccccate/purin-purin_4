//�ļ�����struct_stu
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����һ���򵥵Ľṹ�����ʹ�÷�ʽ

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name����
	int age;//��������
};

int main01()
{
	struct student st;//������һ��student���͵Ľṹ����������ֽ�st
	//struct student����ռ�ڴ�ռ䣬����st��ʱ���ռ�ڴ�ռ䣨��ջ�Ĭ��auto struct student st��

	st.age = 20;
	//st.name = "һ�ô�";//����ĸ�ֵ������name��һ������
	strcpy(st.name,"һ�Ŵ�");//��ȷ�ĸ�ֵ����

	printf("name = %s, age = %d\n",st.name,st.age);
	return 0;
}

int main02()
{
	struct student st = {"��ͷ��",30};//����ṹ�������ͬʱ��ʼ����Ա������ֵ
	//struct student st = {"��ͷ��"};//����ʼ���ı���Ĭ��Ϊ0
	//struct student st = {0};//���name = , age = 0���൱�����б�������ʼ��Ϊ0
	printf("name = %s, age = %d\n",st.name,st.age);
	return 0;
}

struct B
{
  char b1;
  short b2;
  int b3;
};
int main()
{
  struct B b={1,2,3};
  //printf("%u",sizeof(b));//���Ϊ8
  printf("%p\n",&b);//���00DBF9E4
  return 0;
}