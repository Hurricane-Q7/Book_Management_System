//Project Name: 图书管理系统（C）
//Creation Date: 2026/11/2
//maker of project: Hurricane-Q7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Book_Struct_Infomation.h"
//枚举变量定义，提升代码的可读性。
typedef enum {
	ADD = 1,
	FIND,
	INSERT,
	DELETE,
	MODIFY,
	SORT,
	COUNT_BOOK,
	EXIT
}MenuOpt;
void showMenu()
{
	printf("*****#*****#*****#*****\n");
	printf("1. ADD\n");
	printf("2. FIND\n");
	printf("3. INSERT\n");
	printf("4. DELETE\n");
	printf("5. MODIFY\n");
	printf("6. SORT\n");
	printf("7. COUNT_BOOK\n");
	printf("8. EXIT\n");
	printf("*****#*****#*****#*****\n");
}
int main()
{
	Bms bms;
	bms.book_Count = 0;//初始为零。
	MenuOpt opt; //接收用户的选项
	showMenu();
	printf("Bms:欢迎使用图书管理系统！\n");
	while (1)
	{
		printf("Bms:请输入选项:>");
		scanf("%d", &opt);
		switch (opt)
		{
		case ADD:
		{
			//添加书本
		}break;
		case FIND:
		{
			//查找书本信息
		}break;
		case INSERT:
		{
			//插入书本信息
		}break;
		case DELETE:
		{
			//删除书本信息
		}break;
		case MODIFY:
		{
			//修改书本信息
		}break;
		case SORT:
		{
			//排序书本信息
		}break;
		case COUNT_BOOK:
		{
			//统计书本的数量
		}break;
		case EXIT:
		{
			//退出程序
			printf("Bms:《Book Mangement System》程序已退出，欢迎下次再次使用！\n");
			return;
		}
		default:
			printf("Bms:输入错误，请重新输入！\n");
		}
	}
	return 0;
}