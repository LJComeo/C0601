//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//enum menu{
//	EXIT,
//	ADD,
//	DEL,
//	MODIFY,
//	SEARCH,
//	SORT,
//	EMPTY,
//	SHOW,
//};
//#define NAME_SIZE 30
//#define SEX_SIZE 5
//#define ADDR_SIZE 20
//#define TEL_SIZE 12
//#define MAX 100
//typedef struct student{
//	char name[NAME_SIZE];
//	char sex[SEX_SIZE];
//	short int age;
//	char addr[ADDR_SIZE];
//	char tel[TEL_SIZE];
//}Student;
//typedef struct MailList{
//	//Student data[MAX];
//	Student *data;
//	int capecity;
//	int size;
//}MailList;
//void menu(){
//	printf("********************************\n");
//	printf("*****1.add		2.del    *******\n");
//	printf("*****3.modify	4.search *******\n");
//	printf("*****5.sort		6.empty  *******\n");
//	printf("*****7.show		0.exit   *******\n");
//	printf("********************************\n");
//}
//void InitMailList(MailList * ml){
//	assert(ml != NULL);//断言指针不为0
//	ml->capecity = MAX;
//	ml->size = 0;
//	ml->data = (Student*)malloc(sizeof(Student)*ml->capecity);
//	memset(ml->data, 0, MAX*sizeof(Student));
//}
//int IncCapacity(MailList *ml){
//	Student *temp = NULL;
//	assert(ml != NULL);
//	ml->capecity = ml->capecity + MAX;
//	temp = (Student*)realloc(ml->data,sizeof(Student)*ml->capecity);
//}
//void AddMailListInfo(MailList * ml){
//	assert(ml != NULL);
//	if (ml->size >= ml->capecity && !IncCapacity){
//		printf("通讯录已满，不能插入\n");
//		return;
//	}
//	printf("请输入姓名，性别，年龄，住址，电话：\n");
//	scanf("%s",ml->data[ml->size].name);
//	scanf("%s", ml->data[ml->size].sex);
//	scanf("%d", &ml->data[ml->size].age);
//	scanf("%s", ml->data[ml->size].addr);
//	scanf("%s", ml->data[ml->size].tel);
//	++ml->size;
//}
//void ShowMailListInfo(MailList * ml){
//	assert(ml != NULL);
//	int i;
//	printf("%15s %5s %3s %10s %12s\n", "姓名", "性别", "年龄", "住址", "电话");
//	for (i = 0; i < ml->size; ++i){
//		printf("%15s %5s %3d %10s %12s\n", ml->data[i].name, ml->data[i].sex,
//		ml->data[i].age, ml->data[i].addr, ml->data[i].tel);
//	}
//}
//void SortMailListInfo(MailList * ml){
//	int i, j;
//	assert(ml != NULL);
//	Student temp;
//	for (i = 0; i < ml->size; ++i){
//		for (j = 0; ml->size - i - 1; ++j){
//			if (strcmp(ml->data[j].name, ml->data[j + 1].name)>0){
//				temp = ml->data[j];
//				ml->data[j] = ml->data[j + 1];
//				ml->data[j] = temp;
//			}
//		}
//	}
//}
//int FindName(MailList *ml,char *name){
//	int i;
//	for (i = 0; i < ml->size; ++i){
//		if (strcmp(ml->data[i].name, name) == 0)
//			return i;
//	}
//	return -1;
//}
//int IsEmpty(MailList *ml){
//	return ml->size == 0 ? 1 : 0;
//}
//void DelMailList(MailList *ml){
//	char name[NAME_SIZE];
//	int i,n;
//	assert(ml != NULL);
//	if (IsEmpty(ml)){
//		printf("通讯录为空\n");
//		return;
//	}
//	printf("请输入要删除的信息的姓名\n");
//	scanf("%s", name);
//	n = FindName(ml, name);
//	if (n == -1)
//		return;
//	for (i = n; i < ml->size - 1; ++i){
//		ml->data[i] = ml->data[i + 1];
//	}
//	ml->size--;
//}
//void Test(){
//	MailList ml;
//	int input;
//	InitMailList(&ml);
//	do
//	{
//		menu();
//		printf("请输入要实现的功能\n");
//		scanf("%d", &input);//scanf函数的返回值为int类型
//		switch (input){
//		case 1://add
//			AddMailListInfo(&ml);
//			break;
//		case 2://del
//			DelMailListInfo(&ml);
//			break;
//		case 3://Modify
//			//ModifyMailListInfo(&ml);
//			break;
//		case 4://search
//			//SearchMailListInfo(&ml);
//			break;
//		case 5://Sort
//			SortMailListInfo(&ml);
//			break;
//		case 6://Empty
//			//EmptyMailListInfo(&ml);
//			break;
//		case 7://Show
//			ShowMailListInfo(&ml);
//			break;
//		case 0://Exit
//			printf("退出\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//}
//int main(){
//	Test();
//	system("pause");
//	return 0;
//}