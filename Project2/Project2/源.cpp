#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
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
//			printf("hehe\n");
//	}
// else
//			printf("haha\n");
//	return 0;
//}



//��֧����ѭ�����
//��֧��� if              switch
//ѭ����� while           for             do while
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//		printf("����\n");
//		else
//		{
//					if (age >= 28 && age < 45)
//					printf("׳��\n");
//					 else
//					 {
//											if (age >= 45 && age < 90)
//											printf("����\n");
//											else
//											{
//												printf("��������\n");
//											}
//
//					 }
//		}
//
//	}
//	
//	//else if (age >= 18 && age < 28)
//	//printf("����\n");
//	//else if (age >= 28 && age < 45)
//	//printf("׳��\n");
//	//else if (age >= 45 && age < 90)
//	//printf("����\n");
//	//else
//	//printf("��������\n");
//	return 0;
//}//������ʽ�����Ե�һ����Ƕ��
//0��ʾ�٣���0��ʾ��
//һ��{ }����һ�������
//һ��ifĬ��ִ�к����һ����䣬�������Ҫ��{ }������
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}
//else�������if��ԣ��ͽ�ԭ��
 



//   ��ӡ100���ڵ�����
//int main()//��һ��д��
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()//�ڶ���д��
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}


//scanf ��Ҫȡ��ַ����
//����1��2�������һ�����ڶ�
//int main()//��һ��д��  if
//{
//	int day = 1;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	return 0;
//}
//int main()//�ڶ���д�� switch-���֧������   break-��ϣ���ֹ     case-����           default   ����case��������ʱִ�е���䣬�������������˼
//{
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	}
//	return 0;
//}



//ѭ�����   while      for      do while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;       //��ֹ����continue����Ĵ��룬������벻��ִ�У�ֱ����ת��while�жϵĲ���
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//�ܽ᣺continue��while����е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�


//int main()
//{
//	int ch = getchar();//getchar�����뺯����һ��
//	putchar(ch);//putcharҲ�����
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)//����EOF��������ֹ��Ҫ��CTRL+z         EOF�� end of file = -1
//	{
//		putchar(ch);
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr1[] = "abc";//���飬�ַ���,""����\0,���ַ����Ľ�����־���������ַ�������
//	char arr2[] = { 'a', 'b', 'c',0 };//����0Ҫ��0��ʾ\0
//	printf("%s\n", arr1);//%c���ַ���%s���ַ���
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������123456 ASDF����ֻȡ�ո�ǰ����ַ���,���Զ��getchar();���������Ҫ��ѭ������ʣ���ַ�
//	//����������һ��\n,��getchar��������\n
//	while ((ch = getchar())!= 10) // 10����\n  ��\nҪ��''   '\n'
//	{
//		getchar();
//	}
//	printf("ȷ���ϣ�Y/N��:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//forѭ��     for(���ʽ1;���ʽ2;���ʽ3)
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;//����ѭ������ֹѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}

//��������forѭ���ڲ��ı�ѭ����������ֹforѭ��ʧȥ����
//����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д�� ���Ǿ���ֻ�ǽ���   ǰ�պ��������˼��ǰ��Ŀ�ȡ����Ĳ���ȡ����ǰi=1   ��i<10 
//int main()//���ѭ����ʧȥ�˿���
//{
//	int i = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		if (i = 5)
//			printf("hehe\n", i);
//		else
//		printf("haha\n", i);
//	}
//	return 0;
//}


//forѭ���ı���  ��һfor��;;��
//  1��forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//���ǣ�forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��/��
//2��������Ƿǳ������������Ҳ�Ҫ���ʡ��
//int main()//hehe��ѭ��
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()//��һ��forѭ��
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 10; i++)//i=0������һ��forѭ����j=0����ѭ��ֱ��j=10�����ص�һ��for�õ�i=1ֱ��ѭ������
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//i=0������һ��forѭ����j = 0����ѭ��ֱ��j = 10�����ص�һ��for�õ�i = 1��������һ��forѭ��������jû��������Ȼ��j=10�������ֱ��ѭ������
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//for�ĵڶ���ѭ��
//int main()
//{
//	int x, y;
//		for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//		{
//			printf("hehe\n");
//		}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�ڶ�������k=0�Ǽ٣���ѭ����ѭ������Ϊ0
//		k++;
//	return 0;
//}



//do while ѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}


//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//		for (i = 1; i <=n; i++)
//		{
//			ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//����1��+2��+3��+4!+5!+......+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = ret + sum;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()//Ĭд��һ��
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//������룬�Ժ��Ż�
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int num = 0;
//	while (n <= 3)
//	{
//		ret = 1;
//		while (i <= n)
//		{
//			ret = ret * i;
//			i++;
//			if (i > n)
//			{
//				i = 1;
//			}
//			else;
//		}
//		n++;
//	}
//	num = num + ret;
//	printf("%d\n", num);
//}



//while���Ľ׳�
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret = ret * i;
//		i++;
//	}
//	printf("%d\n", ret);
//}


//�Ż�forѭ����1��+2��+3��+4��+...+10!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//}


//whileѭ��д��1��+2��+3��+4��+...+10!
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n<=10)
//	{
//		ret = ret * n;
//		n++;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//���������ҵ����������±�        ���ַ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�󳤶ȣ�Ԫ������
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right)/2;//mid���±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "########################";
//	char arr2[] = "woshiniyibeiziyedebudaod";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left<=right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");//systemִ��ϵͳ�����һ������   cls�������Ļ
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ��������ɹ���ʾ��½�ɹ���������ξ�����������˳�����
//int main()
//{
//	int a = 0;
//	char ch[20] = {0};
//	for (a = 1; a <= 3; a++)
//	{
//		printf("���������룺");
//		scanf("%s", ch);
//		if (strcmp(ch, "123456")==0)//  ==���������Ƚ������ַ����Ƿ���ȣ�Ӧ������һ���⺯��  strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}	
//		else
//		{
//			printf("ɵ������˰�\n");
//		}
//	}
//	if (a > 3)
//	{
//		printf("��������˳�����\n");
//	}
//	return 0;
//}