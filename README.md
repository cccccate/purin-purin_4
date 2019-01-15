# c语言：复合类型
之前学过的数据类型像是整型int，浮点型float，指针类型等都属于基本数据类型，c语言所有数据类型代表的就是这个东西在内存中占用了多大的空间，char一个字节short两个字节int四个字节，指针放的地址，32位4个字节，64位8个字节，某些时候需要更复杂的数据类型满足应用，就要用到结构体struct  
### 结构体
#### 结构体的定义与初始化  
```
struct student
{
	char name[100];//name属性
	int age;//年龄属性
};
```
初始化方法有多种  
[一个简单的结构体变量使用方式](struct_stu.cpp)   

#### 结构体的对齐说明
一个结构体变量的成员总是以最大的元素作为对齐单位  
```
struct A
{
  char a1;
};
int main()
{
  struct A a;
  printf("%u",sizeof(a));//结果为1
  return 0;
}
```
```
struct A
{
  int a1;
};
int main()
{
  struct A a;
  printf("%u",sizeof(a));//结果为4
  return 0;
}
```
```
struct A
{
  int a1;
  char a2
};
int main()
{
  struct A a;
  printf("%u",sizeof(a));//结果为8
  return 0;
}
```
![图像表示](https://github.com/cccccate/purin-purin_4/blob/master/1.png)  
```
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
  printf("%p\n",&a);
  return 0;//此处添加断点
}
```
![图像表示](https://github.com/cccccate/purin-purin_4/blob/master/2.png)  
理解下面两处代码的不同  
```
struct B
{
  char b1;
  short b2;
  char b4;
  int b3;
};
```
占用的内存大小是12  
![图像表示](https://github.com/cccccate/purin-purin_4/blob/master/3.png)   
存在内存浪费的问题，对代码进行优化  
```
struct B
{
  char b1;
  char b4;
  short b2;
  int b3;
};
```
占用内存的大小变为8  
如果结构体成员出现数组，是以数组的具体每个成员作为对齐标准   
如果所有成员都是一种类型，就不用考虑对齐了（跟一个数组类似）  
```
struct D  //占用内存大小为16
{
  char a[10];
  int b;
};
```
```
struct D  //占用内存大小为41
{
  int a[10];
  char b;
};
```

#### 结构体元素的位字段
[程序](struct_bite.cpp)输入a为5，运行结果为1，分析原因：  
5在内存中表示为101，但是a的内存只有两个为变成01，所以最后结果为1.  
输入b为13，结果为-3，分析原因：  
b第一位为符号位，正为1，负为0,13在内存中表示为1101，取反加1变成1011，即为-3  
为什么要精确到位？以流水灯为例，整个电路设计比较简单容量也比较小，也就几个k，此时精确到位能够合理利用内存；但是在大型服务器上，就没有必要如此精确。  
因此在很多条件比较恶劣的情况下，c语言为首选，其他语言不能精确到用位来控制内存   
```
struct C
{
	char a1 : 1;
	int a2 : 1;
};
int main()
{
	printf("%u\n",sizeof(struct C));//输出结果为8
	return 0;
}
```
```
struct C //大小为4
{
	int a1 : 1;
	int a2 : 1;
};
```
```
struct C //大小为1
{
	char a1 : 1;
	char a2 : 1;
};
```

注意char是1个比特=8个字节，所以char a1 : 8是没有意义的，同样的int a2 : 32也是没有必要的  

#### 结构体数组  
小知识：cpu处理int的效率是最高的，int比char要多占内存而已  
[程序](struct_array.cpp)
几种初始化的方法  
```
struct man m[3] = { { "tom",12,男 },{ "marry",10,女 },{ "jack",9,男 } };
struct man m[3] = { { "tom",12,男 },{ "marry",10,女 }}
struct man m[] = { { "tom",12,男 },{ "marry",10,女 },{ "jack",9,男 } };
```
练习题：数组按照年龄排序  

