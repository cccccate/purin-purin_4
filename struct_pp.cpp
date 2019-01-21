//文件名：struct_pp
//作  者：ccate
//时  间：2019.1
//描  述：结构体中的指针成员和数组成员

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name属性
	int age;//年龄属性
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
	strcpy(st.name,"六六");
	st.age = 30;
	st1 = st;//结构体数组变量的赋值
	printf("%s,%d\n",st1.name,st1.age);

	struct man m = {0};//错误，初始化后，m的name为空指针，直接跨掉，加上下面一行
	struct man m1 = {0};
	m.name = calloc(20,sizeof(char));//不要忘记free
	strcpy(m.name,"正");
	m.age = 30;
	m1.name = calloc(20,sizeof(char));
	memcpy(m1.name,m.name,20);//深拷贝
	m1.age = m.age;
	free(m1.name);
	//m1 = m;
	free(m.name);
	printf("%s,%d\n",m1.name,m1.age);


  return 0;
}