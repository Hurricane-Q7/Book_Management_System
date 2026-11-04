#include"show_Books.h"
void showAllBooks(struct Bms * bms)
{
	//打印输出所有书籍信息
	if (bms->book_Count == 0)
	{
		//先判断当前系统有没有书
		printf("当前图书管理册为存放任何书籍，请先添加一些！\n");
		return;
	}
    //正式打印部分
	int index_Of_Book = 0;
	for (index_Of_Book = 0; index_Of_Book < bms->book_Count; index_Of_Book++)
	{
		printf("ISBN                 书名                     定价\n");
		printf("%s                    %s                      %d\n",
		bms->book[index_Of_Book].ISBN, bms->book[index_Of_Book].bookName, bms->book[index_Of_Book].bookPrices);
	}

	system("pause");
	system("cls");
}