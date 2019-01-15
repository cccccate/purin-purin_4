//文件名：struct_array
//作  者：ccate
//时  间：2019.1
//描  述：结构体数组

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	 char name[20];
	 unsigned char age;//unsigned char最大255，int没必要
	 int sex;//cpu处理int的效率是最高的，int比char要多占内存而已 
};

int main02()
{
	struct student st[3];//定义一个结构体数组，有3个成员，每个成员都是struct student
	int i;
	for(i = 0;i<3;i++)
	{
		printf("please input name:");
		scanf("%s",st[i].name);//注意赋值方式
		printf("please input age:");
		scanf("%d",&st[i].age);
		printf("please input sex:");
		scanf("%s",&st[i].sex);
	}

	for(i = 0;i<3;i++)
	{
		if(st[i].sex == 1)
			printf("%s,%d,男\n", st[i].name,st[i].age);
		else
			printf("%s,%d,女\n", st[i].name,st[i].age);

	}
	return 0;
}