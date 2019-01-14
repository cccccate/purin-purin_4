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
