#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输密码：>");
//	//数组名"password":代表数组password[0]的地址
//	//"&password":代表整个数组password[20]的地址
//	int temp = scanf("%s", password);
//	printf("请确认密码：（Y/N）>");
//	//清理缓冲区
//	int a = 0;
//	while (a = getchar() != '\n')
//	{
//		continue;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认失败！\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//		{
//			continue;
//		}
//		printf("%c\n",ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	//初始化部分
//	int i = 1;
//	//判断部分
//	while(i <= 10)
//	{
//		printf("%d ", i);
//		//调整部分
//		i++;
//	}
//
//	return 0;
//}

//int  main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//{
//		//	break;
//		//}
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//for循环的一些变种
//int main()
//{
//	//判断部分省略（恒为真），陷入死循环
//	for (;;)
//	{
//		printf("hehe ");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe ");
//		}
//	}
//
//	return 0;
//}

//练习：判断循环次数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//判断条件"j = 0"为假，不进入循环 -->循环次数为0
//	for (i = 0, j = 0; j = 0; i++, j++)
//		k++;
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}