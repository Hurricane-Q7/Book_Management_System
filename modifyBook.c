#define _CRT_SECURE_NO_WARNINGS
#include"modifyBook.h"
void modifyBook(struct Bms * bms,char isbn[])
{
	char newIsbn[14];
	char newName[50];
	int newPrice;
	int ret_value = findByIsbn(bms, isbn);
	int modified_index = ret_value;
	if (-1 != ret_value)
	{
		//修改功能的实现部分
		printf("请输入新的书本ISBN编号：");
		scanf("%s", newIsbn);
		printf("请输入新的书本名字：");
		scanf("%s", newName);
		printf("请输入新的书本价格：");
		scanf("%d",&newPrice);
		//赋值替换操作
		strcpy(bms->book[modified_index].ISBN,newIsbn);
		strcpy(bms->book[modified_index].bookName, newName);
		bms->book[modified_index].bookPrices = newPrice;

		printf("修改完成！\n");
	}
	else
	{
		printf("要修改的书籍不在当前图书管理系统里面！");
	}
	system("pause");
	system("cls");
}