//�ļ�����struct_poin
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����ָ����ʽṹ������

#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student
{
	char name[100];//name����
	int age;//��������
};

int main()
{
	struct student st1[3] = {{"zs",20},{"ls",30},{"we",50}};
	struct student *p = st1;
	p->age = 100;//��ʱ�޸ĵ���zs������
	p++;
	p->age = 222;//��ʱ�޸ĵ���ls������
	p--;//Ϊ�����д������������

	int i;
	for(i=0;i<3;i++)
		printf("%s,%d\n",p[i].name,p[i].age);

  return 0;
}