//�ļ�����struct_qiantao
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����ṹ��Ƕ��

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct A
{
	int a1;
	char a2;
};
struct B
{
	struct A a;
	char a2;
	int a3;
};
struct C
{

};
//c�����нṹ�岻��Ϊ�գ�����c++����

int main()
{
	printf("%u\n",sizeof(struct B));//���Ϊ16
	printf("%u\n",sizeof(struct A));//���Ϊ8
	//�ṹ����Ϊһ��������ڣ�char���Ƿ���һ���

	//�ṹ��ĵ���
	struct B b;
	b.a.a1 = 0;
	return 0;
}