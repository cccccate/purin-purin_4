//文件名：struct_qiantao
//作  者：ccate
//时  间：2019.1
//描  述：结构体嵌套

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
//c语言中结构体不能为空，但是c++可以

int main()
{
	printf("%u\n",sizeof(struct B));//结果为16
	printf("%u\n",sizeof(struct A));//结果为8
	//结构体作为一个整体存在，char不是放在一起的

	//结构体的调用
	struct B b;
	b.a.a1 = 0;
	return 0;
}