#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//动态内存分配
//int main(){
//	int *p = NULL;
//	p = (int  *)malloc(sizeof(int));
//	*p = 8;
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//int main(){
//	int *p = NULL;
//	p = (int *)malloc(INT_MAX);
//	if (p == NULL){
//		printf("%s\n", strerror(errno));
//	}
//	system("pause");
//	return 0;
//}

//#define N 10
//int main(){
//	int *p = NULL;
//	int i = 0;
//	p = (int *)malloc(sizeof(int)*N);
//	for (i = 0; i < N; ++i){
//
//	}
//	system("pause");
//	return 0;
//}

//动态内存申请的基本框架
//int main(){
//	int *p = NULL;
//	int *q = NULL;
//	p = (int *)malloc(4);
//	if (p != NULL){
//		//工作内容
//	}
//	else{
//		//exit;
//	}
//	//p = (int *)realloc(p, 6 * sizeof(int));//若确定可以申请到就可以这样
//	q = (int *)realloc(p, 6 * sizeof(int));
//	if (q != NULL){
//		p = q;
//	}
//	//工作使用
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//void GetMemory(char **p){
//	*p = (char *)malloc(100);
//}
//void Test(void){
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hellow world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(){
//	Test();
//	system("pause");
//	return 0;
//}

//char *p = "abcd";//定义一个p指向一个字符串常量

int main(){
	char c;
	FILE *fpr = fopen("C:\\Users\\86155\\Desktop\\1.txt", "r");
	FILE *fpw = fopen("C:\\Users\\86155\\Desktop\\2.txt", "w");
	while ((c = fgetc(fpr)) != EOF){
		fputc(c, fpw);
	}
	printf("%c\n", c);
	fclose(fpr);
	fclose(fpw);
	system("pause");
	return 0;
}
