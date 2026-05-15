#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main() {
//	int a = 10; 
//	if (a=2) {
//		printf("hehe\n");	
//	}
//	return 0;
//}

//int main() {
//	int age = 18; 
//	if (age < 18) {
//		printf("未成年\n");
//	}
//	else { printf("成年\n"); }
//	return 0;
//}

//int main() {
//	int age = 10; 
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28) 
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else printf("老年\n");
//	return 0;
//}

//int main() {
//	int a = 0; 
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else 
//			printf("haha\n");
//return 0;
//}

//int main() {
//	int a = 10;
//	int b = 29;
//	if (a > 12)
//		return 1;
//	return 2;
//
//	return 0; 
//}

//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num%2 == 1) {
//		printf("%d\n", num);
//	    }
//		num++;
//	}
//		
//	return 0;
//}

//int main() {
//	int day = 0; 
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期1");
//	else if (2 == day)
//		printf("星期2");
//	else if (3 == day)
//		printf("星期3");
//	else if (4 == day)
//		printf("星期4");
//	else if (5 == day)
//		printf("星期5");
//	else if (6 == day)
//		printf("星期6");
//	else if (7 == day)
//		printf("星期7");
// return 0;
//}

//int main() {
//	int day = 0; 
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		//printf("Monday\n");
//		//break;
//	case 2:
//	//	printf("Tuesday\n");
//	//	break;
//	case 3:
//	//	printf("Wednesday");
//	//	break;
//	case 4:
//	//	printf("Thursday");
//	//	break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6: 
//	//	printf("Saturday");
//	//	break;
//	case 7: 
//		printf("Sunday");
//		break;	 
//  default:
//      printf("null");
//      break;
//	}
//return 0;
//}

//int main(){
//	int a = 0; 
//	while(a <=9) {
//		a++;
//		if (5 == a)
//			//break;
//			continue;
//		printf("%d\n",a);
//		
//	}
//	return 0; 
//}

//int main() { 
//	int ch = 0; 
//	while ((ch = getchar()) != EOF) {
//		printf("%c\n", ch);
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//
//}

//int main() {
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

// 作业
// 
//int main() {
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++) {
//		putchar(arr[i]);
//	}
//	return 0;
//}
//int main() {
//	
//	int year = 0;
//	int month = 0; 
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0; 
//}
//int main() {
//	int id = 0; 
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f\n",id, c, math, eng);
//	return 0;
//}
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n); 
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<< \"Hello world!\"<< endl;\n");
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0; 
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0]; 
//	i = 1;
//	while (i < 4)
//	{
//		if (max < arr[i]) 
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0; 
//}

#include <math.h>
//int main()
//{
//	double r = 0.0;
//	double V = 0.0;
//	scanf("%lf", &r);
//	V = 4/3.0 * 3.141596 * pow(r, 3);
//	printf("%.3lf\n", V);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	float bmi = 0.0;
//	bmi = a /( pow(b / 100.0, 2));
//	printf("%.2lf", bmi);
//	return 0;
// }

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		//	continue;
//		//  break;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe");
//
//	}
//	return 0;
//}

//int main()
//{
//	
//	int i = 0;
//	do {
//		i++;
//		printf("%d\n", i);
//		
//	}
//
//	while (i < 10);
//	return 0;
//}

//int main() 
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int s = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		s = s + ret;
//		printf("阶乘 %d\n", ret);
//		printf("阶乘和 %d\n", s);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int s = 0;
//	scanf("%d", &n);
//	int j = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//	   for (i = 1; i <= j; i++)
//	   {
//		ret *= i;
//		
//		printf("阶乘 %d\n", ret);
//		
//	   }
//	   s +=ret;
//	  printf("阶乘和 %d\n", s);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int s = 0;
//	scanf("%d", &n);
//	int j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			printf("阶乘 %d\n", ret);
//			s += ret;
//			printf("阶乘和 %d\n", s);
//		}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < 10; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("arr[%d]", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("unfound");
//	}*/
//
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	for (;left<=right;)
//	{
//		mid = left + (right-left) / 2;
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
//			printf("arr[%d]=%d", mid, k);
//			break;
//		}
//		if (left > right)
//		{
//			printf("unfound");
//		}
//	}
//	return 0; 
//}

#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//int right= sizeof(arr1)/sizeof(arr1[0])-2;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	int i = 0;
//	char PIN[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("Please input your PIN code:>");
//		scanf("%s", PIN);
//		if (strcmp(PIN ,"abcdef")==0)
//		{
//			printf("Login successful\n");
//			break;
//		}
//		else
//		{
//			printf("fack\n");
//		}
//	}
//	if (3==i)
//	{
//		printf("out\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("****************\n");
//	printf("*****1.play*****\n");
//	printf("*****0.exit*****\n");
//	printf("****************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	printf("%d\n", random_num);
//	int guess = 0;
//	
//	while(1){
//		printf("guess:>");
//		scanf("%d", &guess);
//		if (guess < random_num)
//		{
//			printf("too small\n");
//		}
//		else if (guess > random_num)
//		{
//			printf("too big\n");
//		}
//		else
//		{
//			printf("bingo\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{ 
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:printf("play\n");
//			game();
//			break;
//		case 0:printf("exit\n");
//			break;
//		default:printf("rechoose\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//a:
//	printf("hehe\n");
//	goto a;
//	return 0;
//}
