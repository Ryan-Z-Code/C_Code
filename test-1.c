#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("你好，世界！\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%lld\n", sizeof(char));
//	printf("%lld\n", sizeof(short));
//	printf("%lld\n", sizeof(int));
//	printf("%lld\n", sizeof(long));
//	printf("%lld\n", sizeof(long long));
//	printf("%lld\n", sizeof(float));
//	printf("%lld\n", sizeof(double));
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//	int age = 20;
//	double weight = 74.9;
//	age -=1;
//	weight -= 10;
//	printf("age=%d岁\n", age);
//	printf("weight=%lf kg\n", weight);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("a=%d b=%d c=%d\n",a,b, c);
//	return 0;
//}

//#include<stdio.h>
//extern int g_val;
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//#include<stdio.h>
//#define MAX 1000
//int main()
//{
//    int n = MAX;
//    printf("%d", n);
//    return 0;
//}

//#include<stdio.h>
//enum Sex
//{
//    male,//0
//    female,//1
//    secret//2
//};
//int main()
//{
//    //用Sex定义变量s，s赋值只能是Sex中的元素
//    enum Sex s = male;
//    printf("%d\n", male);//0
//    printf("%d\n", female);//1
//    printf("%d\n", secret);//2
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	// '\0'：字符串结束标志
	char arr2[] = {'a','b','c'};
	size_t len = strlen("abc");
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//printf("len=%d\n", len);
	printf("arr1_len=%zd\n", strlen(arr1));
	printf("arr2_len=%zd\n", strlen(arr2));
	return 0;
}