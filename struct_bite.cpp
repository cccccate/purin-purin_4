//�ļ�����struct_bite
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����

#include <stdio.h>

struct A
{
	unsigned char a : 2;//aֻ��2������
	char b : 4;//b��4�����أ���һλ�Ƿ���λ
};

int main()
{
	struct A a;
	a.a = 5;
	a.b = 13;
	printf("%d\n",a.a);//���Ϊ1
	printf("%d\n",a.b);//���Ϊ-3
	return 0;
}
