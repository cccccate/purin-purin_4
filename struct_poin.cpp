//文件名：struct_poin
//作  者：ccate
//时  间：2019.1
//描  述：指针访问结构体数组

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name属性
	int age;//年龄属性
};

int main()
{
	struct student st1[3] = {{"zs",20},{"ls",30},{"we",50}};
	struct student *p = st1;
	p->age = 100;//此时修改的是zs的年龄
	p++;
	p->age = 222;//此时修改的是ls的年零
	p--;//为了下列代码能正常输出

	int i;
	for(i=0;i<3;i++)
		printf("%s,%d\n",p[i].name,p[i].age);

  return 0;
}