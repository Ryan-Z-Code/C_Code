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
//	//��ӡ�˽�����130 ASCII��Ӧ���ַ�
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
//	printf("������أ�>");
//	printf("�Ƿ�׼����ѧϰ����1/0��>;");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("���Ͱɣ����꣡\n");
//	if (input == 0)
//		printf("Googbye!\n");
//	if(input != 1 & input !=0)
//		printf("������1��0��\n");
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	while (x < 30000)
//	{
//		printf("Ŭ��ѧϰ�������ô��룡%d\n",x);
//		x++;
//	}
//	if (x >= 30000)
//	{
//		printf("�����������գ��������ͣ�");
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
//	//a��int�ͣ�4���ֽڣ�32������λ��00000000 00000000 00000000 00000010
//	int a = 2;
//	//b��int�ͣ�4���ֽڣ�32������λ��00000000 00000000 00000000 00000100
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
//	//�����������
//	printf("%zd\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	// a:00000000 00000000 00000000 00000000
//	int a = 0;
//	 //~:���������ƣ�λȡ��
//	 //~a:11111111 11111111 11111111 11111111(��һ��1�������Ǹ��������룩
//	 //-->�������һ�÷��룩11111111 11111111 11111111 11111110
//	 //-->(���������λ�⣬��λȡ��)1000000 0000000 0000000 00000001 --> -1
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//ǰ��++ :����++����ʹ������
//	//a�ȼ�һ����a=11,�ٸ�ֵ��b,��ʱ��a��ֵ�Ѿ��̶�Ϊ11
//	int b = ++a;
//	printf("%d %d\n",a,b);
//	int c = 10;
//	//����++ :��ʹ�����ݣ�����++
//	//c�ȸ�ֵ��d,�ټ�һ����c=11,��ʱ��c��ֵ�Ѿ��̶�Ϊ11
//	int d = c++;
//	printf("%d %d\n", c, d);
//	return 0;
//}

//int main()
//{
//	//(����):ǿ������ת����
//	int a =(int) 3.14;
//    printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//�߼��루&&����ͬ��Ϊ�棬һ��Ϊ��
//	//int c = a && b;
//	//�߼���||����ͬ��Ϊ�٣�һ��Ϊ��
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//��Ŀ������
//int main()
//{
//	int a = 3;
//	int b = 9;
//	int max;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//���ű��ʽ
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//���ű��ʽ�������������μ��㣬������Ϊ���һ�����ʽ������
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("%d\n", b);
//	return 0;
//}

//�±����ò�������[]
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}

//�������ò�����:()
//int main()
//{
//	printf("Hello World!");
//	return 0;
//}

//�����ض���
//typedef unsigned int u_int;
//int main()
//{
//	//��������������ȫ��ͬ
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

//�����ⲿ���ţ��������͡����ƣ�
//ȫ�ֱ��������������ж�����ʹ��
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

//define ��Ԥ����ָ��
//#define max 1000
//int main()
//{
//	printf("%d\n", max);
//	return 0;
//}

//define :�����
#define add(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4*add(2 , 3));
	return 0;
}