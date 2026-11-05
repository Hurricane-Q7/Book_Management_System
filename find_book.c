#include"find_book.h"
int isExit(struct Bms* bms, char isbn[])
{
	int i = 0;
	for (i = 0; i < bms->book_Count; i ++)
	{
		if (strcmp(bms->book[i].ISBN,isbn) == 0)
		{
			//直接用库函数去判断字符串相等不，方便！

			return i;//找到了，直接返回下标。
		}
	}
	return -1;
}
void findBook(struct Bms * bms,char isbn[])
{
  //查找书本的标准，这里我按照ISBN号来决定，不重复
  //1. 先去判断这本书在不在系统里面，在的话返回下标，不在的话返回-1
  //2. 打印书本信息
	int ret_value = isExit(bms, isbn);
	if (ret_value >= 0)
	{
		printf("Bms:%-15s %-30s %10d元\n",
			bms->book[ret_value].ISBN,
			bms->book[ret_value].bookName,
			bms->book[ret_value].bookPrices);
	}
	else {

		printf("Bms:当前书本不在系统里面！\n");
		system("pause");
		system("cls");
		return;
	}
	system("pause");
	system("cls");

}