//�ļ�����struct_array
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  �����ṹ������

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	 char name[20];
	 unsigned char age;//unsigned char���255��intû��Ҫ
	 int sex;//cpu����int��Ч������ߵģ�int��charҪ��ռ�ڴ���� 
};

int main02()
{
	struct student st[3];//����һ���ṹ�����飬��3����Ա��ÿ����Ա����struct student
	int i;
	for(i = 0;i<3;i++)
	{
		printf("please input name:");
		scanf("%s",st[i].name);//ע�⸳ֵ��ʽ
		printf("please input age:");
		scanf("%d",&st[i].age);
		printf("please input sex:");
		scanf("%s",&st[i].sex);
	}

	for(i = 0;i<3;i++)
	{
		if(st[i].sex == 1)
			printf("%s,%d,��\n", st[i].name,st[i].age);
		else
			printf("%s,%d,Ů\n", st[i].name,st[i].age);

	}
	return 0;
}