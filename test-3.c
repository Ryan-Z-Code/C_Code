#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//a在内存中要分配空间--4个字节
//	int a = 10;
//	char b = 'a';
//	//%p 专门用来打印地址的
//	printf("%p\n", &a);
//	// *:说明pa是指针变量
//	//int:说明pa执行对象是int类型的
//	int* pa = &a;
//	char* ba = &b;
//	printf("%p\n", pa);
//	printf("%p\n", ba);
//	return 0;
//}

//int main()
//{
//	//指针能不能取自己的地址？
//	int* pa = &pa;
//	printf("%p\n", pa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//* :解引用操作
//	//*pa :通过pa里的地址，找到a并赋值a=20
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(long long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}

//结构体可以让C语言创建新的类型
//struct stu
//{
//	//大括号内为结构体的成员变量
//	char name[20];
//	int age;
//	double score;
//};


//int main()
//{
//	//结构体的创建与初始化
//	struct stu s = { "张三",20,90 };
//	// . :点操作符
//	//结构体 .成员变量
//	printf("1:%s %d %f\n", s.name, s.age, s.score);
//	struct stu * pa = &s;
//	printf("2:%s %d %f\n", (*pa).name, (*pa).age, (*pa).score);
//	//-> :箭头操作符
//	//使用方法：结构体指针->成员变量名
//	printf("3:%s %d %f\n", pa->name, pa->age, pa->score);
//	return 0;
//}

//作业一
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a ;
//	int b ;
//	printf("请输入两个整数：\n");
//	int d = scanf("%d %d", &a, &b);
//	int c = max(a, b);
//	printf("%d和%d中较大数是 %d\n",a,b,c);
//}

//作业二
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a+b+c);
//}
//
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i; i < 5; i++)
//	{
//		printf("%d\n",sum(a));
//	}
//	return 0;
//}

//int main()
//{
//	int age=0;
//	printf("请输入年龄 ：");
//	int b = scanf("%d",&age);
//	if (age >= 18)
//		printf("已成年！\n");
//	//else 只能控制一条语句
//	//多条语句需要使用{}
//	else
//		printf("未成年!\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("请输入年龄 ：");
//	int b = scanf("%d",&age);
//	if (age < 18)
//		printf("少年！\n");
//	else if (18 <= age && age < 26)
//		printf("青年！\n");
//	else if (26 <= age && age < 40)
//		printf("青年！\n");
//	else if (40 <= age && age < 60)
//		printf("壮年！\n");
//	else if (60 <= age && age < 100)
//		printf("老年！\n");
//	else
//		printf("长寿！\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int test()
//{
//	if (1)
//		return 0;
//	printf("hehe\n");
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}

//练习：判断一个数是不是奇数
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	int b = scanf("%d", &num);
//	if (1 == num % 2)
//		printf("%d是奇数！\n",num);
//	else
//		printf("%d是不奇数！\n", num);
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		if (1 == num % 2)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//练习：输入数字1-7，输出星期一至星期日
//int main()
//{
//	int day = 0;
//	int b = scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n"); 
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//输入1-5，输出工作日；输入6和7，输出休息日
//int main()
//{
//	int day = 0;
//	int b = scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	//除以上情况外，所有其他情况默认为default情况
//	default:
//		printf("请输入数字1-7！\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:m++;
//		case 2:n++;
//		case 3:
//			switch (n)
//			{
//			case 1:
//				n++;
//			case 2:
//				m++; n++;
//				break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF : 文件结束标志
//getchar() :获取一个字符
//putchar() :输出一个字符
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ch = 0;
    //输入一串字符，因为循环作用，会将整串字符全部输出
	//ctrl+z:getchar（）读取输入结束
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}