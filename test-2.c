#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//printf("E:\VS-Code\test-2\test-2\test.c");
//	//printf("ab\ncd");
//	printf("%s\n","abc");
//	printf("%s\n","\"");
//	printf("E:\VS-Code\\test-2\\test-2\\test.c");
//	return 0;
//}

//int main()
//{
//	//打印八进制数130 ASCII对应的字符
//	printf("%c\n", '\130');
//	printf("%c\n", '\101');
//	printf("%d\n", '\101');
//	printf("%c\n", '\x30');
//	printf("%d\n", '\x30');
//	printf("%d\n", strlen("E:\VS-Code\test-2\test-2\test.c"));
//	return 0;
//}

//int main()
//{
//	int input;
//	printf("加入比特：>");
//	printf("是否准备好学习？（1/0）>;");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("加油吧！少年！\n");
//	if (input == 0)
//		printf("Googbye!\n");
//	if(input != 1 & input !=0)
//		printf("请输入1或0！\n");
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	while (x < 30000)
//	{
//		printf("努力学习！继续敲代码！%d\n",x);
//		x++;
//	}
//	if (x >= 30000)
//	{
//		printf("技术初步掌握！继续加油！");
//	}
//	return 0;
//}

//add(int x, int y)
//{
//	int temp = x + y;
//	return temp;
//}
//
//int main()
//{
//	int x, y,z,p;
//	p=scanf("%d%d", &x, &y);
//	//z = x + y;
//	z=add(x, y);
//	printf("%d\n%d\n", z,p);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr2[10] = { 'a','b','c' };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr1[i]);
//		printf("%c\n", arr2[i]);
//		i++;
//	}
//	//printf("%d\n", arr1[0]);
//	//printf("%c\n", arr2[0]);
//	return 0;
//}

//int main()
//{
//	//a是int型，4个字节，32个比特位：00000000 00000000 00000000 00000010
//	int a = 2;
//	//b是int型，4个字节，32个比特位：00000000 00000000 00000000 00000100
//	int b = a << 1;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int b = 0b00110011;
//	printf("%d\n", !a);
//	printf("%o\n", a);
//	printf("%d\n", b);
//	printf("%d\n", !b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr[0]));
//	//计算数组个数
//	printf("%zd\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	// a:00000000 00000000 00000000 00000000
//	int a = 0;
//	 //~:按（二进制）位取反
//	 //~a:11111111 11111111 11111111 11111111(左一是1，代表是负数、补码）
//	 //-->（补码减一得反码）11111111 11111111 11111111 11111110
//	 //-->(反码除符号位外，按位取反)1000000 0000000 0000000 00000001 --> -1
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//前置++ :先算++，再使用数据
//	//a先加一，得a=11,再赋值给b,此时的a的值已经固定为11
//	int b = ++a;
//	printf("%d %d\n",a,b);
//	int c = 10;
//	//后置++ :先使用数据，再算++
//	//c先赋值给d,再加一，得c=11,此时的c的值已经固定为11
//	int d = c++;
//	printf("%d %d\n", c, d);
//	return 0;
//}

//int main()
//{
//	//(类型):强制类型转换；
//	int a =(int) 3.14;
//    printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//逻辑与（&&）：同真为真，一假为假
//	//int c = a && b;
//	//逻辑或（||）：同假为假，一真为真
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//三目操作符
//int main()
//{
//	int a = 3;
//	int b = 9;
//	int max;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//逗号表达式：从左向右依次计算，输出结果为最后一个表达式计算结果
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("%d\n", b);
//	return 0;
//}

//下标引用操作符：[]
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}

//函数调用操作符:()
//int main()
//{
//	printf("Hello World!");
//	return 0;
//}

//类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	//下面两个定义完全相同
//	unsigned int a = 100;
//	u_int b = 100;
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	printf("%d\t", a);
//	a++;
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//声明外部符号（数据类型、名称）
//全局变量在整个工程中都可以使用
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int p_val;
//int main()
//{
//	printf("%d\n", p_val);
//	return 0;
//}

//extern int add(int x, int y);
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int c=add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//define ：预处理指令
//#define max 1000
//int main()
//{
//	printf("%d\n", max);
//	return 0;
//}

//define :定义宏
#define add(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4*add(2 , 3));
	return 0;
}