//文件名：struct_paixu
//作  者：ccate
//时  间：2019.1
//描  述：结构体数组按照年龄排序,冒泡排序

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	 char name[20];
	 int age;
	 int sex;//男为1女为2
};

//交换字符串函数
void swap_str(char *a,char *b)
{
	char tmp[20] = { 0 };
	strcpy(tmp,a);
	strcpy(a,b);
	strcpy(b,tmp);
}
//交换年龄，性别
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
	struct student st[] = { {"明",30,1}, {"红",35,0}, {"刚",20,1} };
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
			printf("%s,%d,男\n", st[i].name,st[i].age);
		else
			printf("%s,%d,女\n", st[i].name,st[i].age);

	}
	return 0;
}