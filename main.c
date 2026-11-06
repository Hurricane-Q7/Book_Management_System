//Project Name: 图书管理系统（C）
//Creation Date: 2026/11/2
//founder of project: Hurricane-Q7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add_book.h"
#include"Book_Struct_Infomation.h"
#include"show_Books.h"
#include"find_book.h"
#include"delete_book.h"
#include"modifyBook.h"
//定义枚举变量，提升代码的可读性。
typedef enum {
	ADD = 1,
	FIND,
	DEL,//这里写DELETE会报错，因为和<windows.h>里面的冲突了
	MODIFY,
	SORT,
	COUNT_BOOK,
	SHOW_BOOKS,
	EXIT_SYS
	
}MenuOpt;
void showMenu()
{
	printf("*****#*****#*****#*****\n");
	printf("1. ADD\n");
	printf("2. FIND\n");
	printf("3. DEL\n");
	printf("4. MODIFY\n");
	printf("5. SORT\n");
	printf("6. COUNT_BOOK\n");
	printf("7. SHOW_BOOKS\n");
	printf("8. EXIT_SYS\n");
	printf("*****#*****#*****#*****\n");
}
int main()
{
	struct Bms bms;
	bms.book_Count = 0;
	MenuOpt opt; //接收用户的选项
	printf("Bms:欢迎使用图书管理系统！\n");
	while (1)
	{
		showMenu();
		printf("Bms:请输入选项:>");
		scanf("%d", &opt);
		switch (opt)
		{
		case ADD:
		{
			addBook(&bms);
			//添加书本
		}break;
		case FIND:
		{
			printf("Bms:请输入你要查找书本的ISBN号：");
			char isbn1[14];
			scanf("%s",isbn1);
			findBook(&bms,isbn1);
			//查找书本信息
		}break;
		case DEL:
		{
			printf("Bms:请输入你要删除的书本的ISBN号：");
			char isbn2[14];
			scanf("%s", isbn2);
			deleteBook(&bms, isbn2);
			//删除书本信息
		}break;
		case MODIFY:
		{
			printf("Bms:请输入你要修改的书本的ISBN号：");
			char isbn3[14];
			scanf("%s", isbn3);
			modifyBook(&bms, isbn3);
			//修改书本信息
		}break;
		case SORT:
		{

			//排序书本信息
		}break;
		case COUNT_BOOK:
		{
			printf("Bms:当前书本的数量是%d\n", bms.book_Count);
			system("pause");
			system("cls");
			//统计书本的数量
		}break;
		case SHOW_BOOKS:
		{
			showAllBooks(&bms);
		}break;
		case EXIT_SYS:
		{
			//退出程序
			printf("Bms:《Book Mangement System》程序已退出，欢迎下次再次使用！\n");
			return;
		}
		default:
		{
			printf("Bms:输入错误，请重新输入！\n");
			system("pause");
			system("cls");
		}
		}
	}
	return 0;
}
