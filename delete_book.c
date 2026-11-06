#include"delete_book.h"
void deleteBook(struct Bms * bms,char isbn[])
{
	//删除前先判断一下，系统里面有没有这本书
	int ret_value = findByIsbn(bms, isbn);
	//1. 找到的情况下，返回当前要删除元素的下标值
	//2. 找不到就返回-1
	if (-1 == ret_value)
	{
		printf("Bms:在当前系统中找不到该书籍！");
		system("pause");
		system("cls");
		return;
	}
	//删除书的功能实现
	int i = 0;
	//i用来记录要删除元素的下标值
	for (i = ret_value;i<bms->book_Count;i++)
	{
		bms->book[i] = bms->book[i + 1];//结构体数组允许这种整体拷贝
		//但是
		// bms->book[i].bookName = bms->book[i + 1].bookName;这种操作是不被允许的
	}
	bms->book_Count--;
	printf("删除成功！\n");
	system("pause");
	system("cls");
}