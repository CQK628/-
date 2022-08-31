#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Stu
{
	char name[10];
	char password[20];
	short age;
	int height;
	int weight;
}Stu;
void Print1(Stu tmp)
{
	printf("name:>%s\n", tmp.name);
	printf("password:>%s\n", tmp.password);
	printf("age:>%d\n", tmp.age);
	printf("height:>%d\n", tmp.height);
	printf("weight:>%d\n", tmp.weight);
}//未来在工作当中不推荐使用该方法，函数传参时，参数需要压栈，如传递一个结构体对象，结构体过大系统开销会较大，性能会下降，故函数传参时一般使用结构体的地址进行传递。
void Print2(Stu* S)
{
	printf("name:>%s\n", S->name);
	printf("password:>%s\n", S->password);
	printf("age:>%d\n", S->age);
	printf("height:>%d\n", S->height);
	printf("weight:>%d\n",S->weight);
}//使用结构体地址进行传参
int main()
{
	Stu S = { "陈xx", "36012220020628XXXX", 20, 174, 58 };
	Print1(S);
	Print2(&S);
	return 0;
}