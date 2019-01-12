//文件名：struct_stu
//作  者：ccate
//时  间：2019.1
//描  述：一个简单的结构体变量使用方式

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name属性
	int age;//年龄属性
};

int main01()
{
	struct student st;//定义了一个student类型的结构体变量，名字叫st
	//struct student本身不占内存空间，定义st的时候才占内存空间（在栈里，默认auto struct student st）

	st.age = 20;
	//st.name = "一棵葱";//错误的赋值方法，name是一个数组
	strcpy(st.name,"一颗葱");//正确的赋值方法

	printf("name = %s, age = %d\n",st.name,st.age);
	return 0;
}

int main02()
{
	struct student st = {"两头蒜",30};//定义结构体变量的同时初始化成员变量的值
	//struct student st = {"两头蒜"};//不初始化的变量默认为0
	//struct student st = {0};//结果name = , age = 0，相当于所有变量都初始化为0
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
  //printf("%u",sizeof(b));//结果为8
  printf("%p\n",&b);//输出00DBF9E4
  return 0;
}