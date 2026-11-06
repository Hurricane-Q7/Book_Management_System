#define _CRT_SECURE_NO_WARNINGS
#include"add_book.h"
#include<stdio.h>
void addBook(struct Bms * bms)
{
	//添加之前一定要判断一下，图书管理系统有没有上限！
	if (bms->book_Count >= MAX_SIZE)
	{
		printf("图书库已满，无法新增！\n");
		system("pause");
		system("cls");
		return;
	}
	printf("Bms:请输入书的ISBN编号:");
	scanf("%s", bms->book[bms->book_Count].ISBN);
	//隐患：`%s` 不做长度保护，输入太长会数组溢出，后面优化可以改成 `%19s` 这种限制长度。（等待优化ing）
	printf("Bms:请输入书的名字:");
	scanf("%s", bms->book[bms->book_Count].bookName);

	printf("Bms:请输入书的价格:");
	scanf("%d", &(bms->book[bms->book_Count].bookPrices));
	printf("Bms:添加成功！\n");
	bms->book_Count++;
	system("pause");
	system("cls");
	
}