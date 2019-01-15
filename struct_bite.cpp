//文件名：struct_bite
//作  者：ccate
//时  间：2019.1
//描  述：

#include <stdio.h>

struct A
{
	unsigned char a : 2;//a只有2个比特
	char b : 4;//b是4个比特，第一位是符号位
};

int main()
{
	struct A a;
	a.a = 5;
	a.b = 13;
	printf("%d\n",a.a);//结果为1
	printf("%d\n",a.b);//结果为-3
	return 0;
}
