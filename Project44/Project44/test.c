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
}//δ���ڹ������в��Ƽ�ʹ�ø÷�������������ʱ��������Ҫѹջ���紫��һ���ṹ����󣬽ṹ�����ϵͳ������ϴ����ܻ��½����ʺ�������ʱһ��ʹ�ýṹ��ĵ�ַ���д��ݡ�
void Print2(Stu* S)
{
	printf("name:>%s\n", S->name);
	printf("password:>%s\n", S->password);
	printf("age:>%d\n", S->age);
	printf("height:>%d\n", S->height);
	printf("weight:>%d\n",S->weight);
}//ʹ�ýṹ���ַ���д���
int main()
{
	Stu S = { "��xx", "36012220020628XXXX", 20, 174, 58 };
	Print1(S);
	Print2(&S);
	return 0;
}