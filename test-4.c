#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//	printf("�������룺>");
//	//������"password":��������password[0]�ĵ�ַ
//	//"&password":������������password[20]�ĵ�ַ
//	int temp = scanf("%s", password);
//	printf("��ȷ�����룺��Y/N��>");
//	//��������
//	int a = 0;
//	while (a = getchar() != '\n')
//	{
//		continue;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ�ܣ�\n");
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
//	//��ʼ������
//	int i = 1;
//	//�жϲ���
//	while(i <= 10)
//	{
//		printf("%d ", i);
//		//��������
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

//forѭ����һЩ����
//int main()
//{
//	//�жϲ���ʡ�ԣ���Ϊ�棩��������ѭ��
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

//��ϰ���ж�ѭ������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//�ж�����"j = 0"Ϊ�٣�������ѭ�� -->ѭ������Ϊ0
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