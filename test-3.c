#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//a���ڴ���Ҫ����ռ�--4���ֽ�
//	int a = 10;
//	char b = 'a';
//	//%p ר��������ӡ��ַ��
//	printf("%p\n", &a);
//	// *:˵��pa��ָ�����
//	//int:˵��paִ�ж�����int���͵�
//	int* pa = &a;
//	char* ba = &b;
//	printf("%p\n", pa);
//	printf("%p\n", ba);
//	return 0;
//}

//int main()
//{
//	//ָ���ܲ���ȡ�Լ��ĵ�ַ��
//	int* pa = &pa;
//	printf("%p\n", pa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//* :�����ò���
//	//*pa :ͨ��pa��ĵ�ַ���ҵ�a����ֵa=20
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

//�ṹ�������C���Դ����µ�����
//struct stu
//{
//	//��������Ϊ�ṹ��ĳ�Ա����
//	char name[20];
//	int age;
//	double score;
//};


//int main()
//{
//	//�ṹ��Ĵ������ʼ��
//	struct stu s = { "����",20,90 };
//	// . :�������
//	//�ṹ�� .��Ա����
//	printf("1:%s %d %f\n", s.name, s.age, s.score);
//	struct stu * pa = &s;
//	printf("2:%s %d %f\n", (*pa).name, (*pa).age, (*pa).score);
//	//-> :��ͷ������
//	//ʹ�÷������ṹ��ָ��->��Ա������
//	printf("3:%s %d %f\n", pa->name, pa->age, pa->score);
//	return 0;
//}

//��ҵһ
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
//	printf("����������������\n");
//	int d = scanf("%d %d", &a, &b);
//	int c = max(a, b);
//	printf("%d��%d�нϴ����� %d\n",a,b,c);
//}

//��ҵ��
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
//	printf("���������� ��");
//	int b = scanf("%d",&age);
//	if (age >= 18)
//		printf("�ѳ��꣡\n");
//	//else ֻ�ܿ���һ�����
//	//���������Ҫʹ��{}
//	else
//		printf("δ����!\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("���������� ��");
//	int b = scanf("%d",&age);
//	if (age < 18)
//		printf("���꣡\n");
//	else if (18 <= age && age < 26)
//		printf("���꣡\n");
//	else if (26 <= age && age < 40)
//		printf("���꣡\n");
//	else if (40 <= age && age < 60)
//		printf("׳�꣡\n");
//	else if (60 <= age && age < 100)
//		printf("���꣡\n");
//	else
//		printf("���٣�\n");
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

//��ϰ���ж�һ�����ǲ�������
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	int b = scanf("%d", &num);
//	if (1 == num % 2)
//		printf("%d��������\n",num);
//	else
//		printf("%d�ǲ�������\n", num);
//
//	return 0;
//}

//���1-100֮�������
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

//��ϰ����������1-7���������һ��������
//int main()
//{
//	int day = 0;
//	int b = scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n"); 
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//����1-5����������գ�����6��7�������Ϣ��
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	//����������⣬�����������Ĭ��Ϊdefault���
//	default:
//		printf("����������1-7��\n");
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

//EOF : �ļ�������־
//getchar() :��ȡһ���ַ�
//putchar() :���һ���ַ�
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
    //����һ���ַ�����Ϊѭ�����ã��Ὣ�����ַ�ȫ�����
	//ctrl+z:getchar������ȡ�������
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}