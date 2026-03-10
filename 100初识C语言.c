#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main() {
//	printf("hehe\n");
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int ));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double)); 
//	return 0;
//}
//int main() {
//	short age = 20;
//	int high = 180; 
//	float weight = 88.5;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	/*30;
//	3.14;
//	const int a = 10;
//	a = 20;
//	printf("%d\n", a);*/
//	const  int n = 10;
//	int arr[n] = { 0 };
//	int c = red;
//	return 0;
//}
//enum Color {
//	red,
//	green,
//	blue
//};
//int main() {
//	int a = red;
//	printf("%d\n", a);
//		return 0;
//
//}

//int main() {
//	char ch = 'a';
//	char arr1[] = "abcdefg";
//	printf("%s\n", arr1);
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr2);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);
//	printf("%d\n", len1);
//	return 0;
//}

//int main() {
//	printf("abc\n");
//	printf("def\r");
//	printf("ghi");
//	printf("Hello\rWorld");
//
//	return 0;
//}

//int main() {
//	printf("are you ??)\n");
//	printf("%c\n", '\'');
//	printf("\a\a\a\a\a\a");
//	printf("%c\n", '\130');
//	printf("%c\n", '\x61');
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0; 
//}

//int main() {
//	int* p = NULL;
//	printf("%p\n", p);
//	return 0; 
//}

//int main() {
//	printf("是否学习(1/0)");
//	int input = 0;
//	scanf("%d", &input);
//	if (input==1){
//		printf("good!");
//	}
//	else { printf("bad!"); }
//	return 0;
//}

//int main() {
//	int i = 0; 
//	while (i < 10) {
//		printf("%d\n", i);
//		i++;
//	}
//	if (i >= 10) { printf("good!");
//	}
//	else { printf("continue"); }
//	return  0;
//}

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 0;
//	int b = 0; 
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//
//	printf("%d+%d=%d\n",a,b, sum);
//	return 0;
//}

//int main() {
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0; 
//	while (i < 10) {
//		printf("%d\n", arr[i]);
//		i++;
//		}
//	return 0; 
//}
 
//int main() {
//	char arr[] = { '0','i','t','\0'};
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//
//	const int a = 4;
//	char arr1[4] ;
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(arr1));
//
//	char str[4] = "bit\0";
//	printf("%d\n", strlen(str));
//	printf("%d\n", sizeof(str));
//
//	return 0;
//}

//int Max(int x, int y) {
//	return (x > y) ? x : y;
//}
//int  main() {
//	int a = 0;
//	int b = 0; 
//	scanf("%d %d", &a, &b);
//	int r= Max(a, b);
//	printf("%d\n", r);
//	return 0;
//}

//int  xuanze(int x) {
//	int y = 0;
//	if (x < 0) { y = 1;}
//	else if (x == 0) { y = 0;}
//	else {  y = -1; }
//	return y;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int y =xuanze(a);
//	printf("%d\n", y);
//	return 0;
//}

//int main() {
//	int a = 7 / 2;
//	int b = 7 % 2; 
//float  c = 7.0 / 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%.2f\n", c);
//
//	return 0;
//}
  
//int main() {
//		int a =10; 
//		int b = 20; 
//		int c = a > b ? a : b;
//		printf("%d", c);
//		return 0;
//}

//int main() {
//	int a = 3; 
//	int b = 6;
//	int c = 0; 
//	int d = (c = a - 2, a = b + c, c + 1);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}

//typedef unsigned int uint;
//typedef struct {
//	int data;
//	struct Node* next;
//}Node;
//int main() {
//	unsigned int num1 = 0; 
//	uint num2 = 0;
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//void test() {
//	static int a = 1; 
//	a++; 
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0; 
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int a;
//int main() {
//	
//	printf("%d", a);
//	return 0; 
//}

//extern int Add(int x, int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf(" %d \n", z);
//	return 0;
//}

//定义标识符常量
//#define NUM 100

//#define ADD(x,y)((x)+(y))
//int Add (int x, int y) { 
//	return x + y;
//}
//int main() {
//	/*printf("%d\n",NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };*/
//	int a = 10;
//	int b = 20; 
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int a = 10; 
//	int* p = &a; 
//	printf("%p\n", &a);
//	printf("%p\n", *p);
//
//	char ch = 'w'; 
//	char* p1 = &ch;
//	printf("%p\n", &ch);
//	printf("%p\n", *p1);
//
//	return 0;
//}

//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//struct Stu {
//	char name[20];
//	int age; 
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps) {
//	printf("%s %d %s %s\n", (*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main() {
//	struct Stu s1 = { "zhangsan ", 20, "male ","12345678901" };
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.tele);
//	print(&s1);
//	return 0;
//}

//int main() {
//	int a = 0; 
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d\n", c,d);
//	printf("%d %d\n", a / b, a % b);
//
//	return 0;
//}