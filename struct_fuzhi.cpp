//文件名：struct_fuzhi
//作  者：ccate
//时  间：2019.1
//描  述：结构体赋值

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
	//st2 = st1;//结构体变量的赋值,就是内存拷贝，也可以用memcopy
	memcpy(&st2,&st1,sizeof(st1));
	printf("%s,%d\n",st2.name,st2.age);
	return 0;
}