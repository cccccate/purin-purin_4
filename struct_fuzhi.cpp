//�ļ�����struct_fuzhi
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����ṹ�帳ֵ

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	char name[20];
	int age;
};

int main()
{
	struct student st1 = {"abc",30};
	struct student st2;
	//st2 = st1;//�ṹ������ĸ�ֵ,�����ڴ濽����Ҳ������memcopy
	memcpy(&st2,&st1,sizeof(st1));
	printf("%s,%d\n",st2.name,st2.age);
	return 0;
}