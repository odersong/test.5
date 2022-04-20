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



//分支语句和循环语句
//分支语句 if              switch
//循环语句 while           for             do while
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//		printf("成年\n");
//		else
//		{
//					if (age >= 28 && age < 45)
//					printf("壮年\n");
//					 else
//					 {
//											if (age >= 45 && age < 90)
//											printf("老年\n");
//											else
//											{
//												printf("长命百岁\n");
//											}
//
//					 }
//		}
//
//	}
//	
//	//else if (age >= 18 && age < 28)
//	//printf("成年\n");
//	//else if (age >= 28 && age < 45)
//	//printf("壮年\n");
//	//else if (age >= 45 && age < 90)
//	//printf("老年\n");
//	//else
//	//printf("长命百岁\n");
//	return 0;
//}//两种形式都可以第一种是嵌套
//0表示假，非0表示真
//一个{ }就是一个代码块
//一个if默认执行后面第一条语句，多条语句要用{ }括起来
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能上网\n");
//	}
//	else
//		printf("成年\n");
//	return 0;
//}
//else和最近的if配对，就近原则
 



//   打印100以内的奇数
//int main()//第一种写法
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
//int main()//第二种写法
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}


//scanf 需要取地址符号
//输入1，2输出星期一，星期二
//int main()//第一种写法  if
//{
//	int day = 1;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	return 0;
//}
//int main()//第二种写法 switch-多分支，条件   break-打断，终止     case-案例           default   所有case都不成立时执行的语句，有其他情况的意思
//{
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	}
//	return 0;
//}



//循环语句   while      for      do while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;       //终止本次continue后面的代码，后面代码不再执行，直接跳转到while判断的部分
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//总结：continue在while语句中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。


//int main()
//{
//	int ch = getchar();//getchar是输入函数的一种
//	putchar(ch);//putchar也是输出
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)//输入EOF并不能终止，要用CTRL+z         EOF是 end of file = -1
//	{
//		putchar(ch);
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr1[] = "abc";//数组，字符串,""含有\0,是字符串的结束标志，不算做字符串内容
//	char arr2[] = { 'a', 'b', 'c',0 };//不含0要加0表示\0
//	printf("%s\n", arr1);//%c是字符，%s是字符串
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//如果输入123456 ASDF密码只取空格前面的字符串,可以多个getchar();，最好用需要用循环读走剩余字符
//	//缓冲区还余一个\n,用getchar（）读走\n
//	while ((ch = getchar())!= 10) // 10就是\n  用\n要加''   '\n'
//	{
//		getchar();
//	}
//	printf("确认认（Y/N）:>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
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


//for循环     for(表达式1;表达式2;表达式3)
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;//跳出循环，终止循环
//		printf("%d ", i);
//	}
//	return 0;
//}

//不可以再for循环内部改变循环变量，防止for循环失去控制
//建议for语句的循环控制变量的取值采用"前闭后开区间"写法 不是绝对只是建议   前闭后开区间的意思是前面的可取后面的不可取例如前i=1   后i<10 
//int main()//这个循环就失去了控制
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


//for循环的变种  例一for（;;）
//  1、for循环的初始化、调整、判断都可以省略
//但是：for循环的判断部分如果被省略，那判断条件就是：恒为真/正
//2、如果不是非常熟练，建议大家不要随便省咯
//int main()//hehe死循环
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()//第一种for循环
//{
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 10; i++)//i=0进入下一个for循环，j=0进入循环直到j=10，返回第一个for得到i=1直到循环结束
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
//	for (; i < 10; i++)//i=0进入下一个for循环，j = 0进入循环直到j = 10，返回第一个for得到i = 1，进入下一个for循环，但是j没有重置仍然是j=10，不输出直到循环结束
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//for的第二种循环
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
//	for (i = 0, k = 0; k = 0; i++, k++)//第二个条件k=0是假，不循环，循环次数为0
//		k++;
//	return 0;
//}



//do while 循环
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


//计算n的阶乘
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

//计算1！+2！+3！+4!+5!+......+10!
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



//int main()//默写了一遍
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

//int main()//错误代码，以后优化
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



//while语句的阶乘
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


//优化for循环的1！+2！+3！+4！+...+10!
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


//while循环写的1！+2！+3！+4！+...+10!
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


//在数组中找到任意数的下标        二分法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求长度，元数个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right)/2;//mid是下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
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
//		system("cls");//system执行系统命令的一个函数   cls是清空屏幕
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


//编写代码实现，模拟用户登录场景，并且只能登录三次。如果密码成功提示登陆成功，如果三次均输入错误，则退出程序。
//int main()
//{
//	int a = 0;
//	char ch[20] = {0};
//	for (a = 1; a <= 3; a++)
//	{
//		printf("请输入密码：");
//		scanf("%s", ch);
//		if (strcmp(ch, "123456")==0)//  ==不能用来比较两个字符串是否相等，应该是用一个库函数  strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}	
//		else
//		{
//			printf("傻逼输错了吧\n");
//		}
//	}
//	if (a > 3)
//	{
//		printf("输入错误，退出程序\n");
//	}
//	return 0;
//}