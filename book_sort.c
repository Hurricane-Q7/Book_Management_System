#include"sort_book.h"
void sortBook(struct Bms * bms)
{
	//默认升序，小的在前面，大的在后面
	//排序算法：选择排序
	printf("注意：排序功能按照书本价格的升序排列\n");
	if (bms->book_Count == 0)
	{
		printf("图书系统里面啥也没有，添加一些书本再来吧！");
		system("pause");
		system("cls");
		return;
	}
	int i = 0;
	for (i = 0; i < bms->book_Count - 1; i++)
	{
		int p = i;//记录当前最小元素下标，默认是第一位
		for (int j = i + 1; j < bms->book_Count;j++)
		{
			if (bms->book[p].bookPrices > bms->book[j].bookPrices)
			{
				p = j;//如果发现默认最下元素比后面的元素还大的话，就更新最小元素下标
			}
		}
		if (p != i)
		{
			//小的在前面，大的在后面,到这里的话，p里面放的就是最小下标
			int temp = bms->book[i].bookPrices;
			bms->book[i].bookPrices = bms->book[p].bookPrices;
			bms->book[p].bookPrices = temp;
		}
	}
	printf("已经排序完毕！\n");
	system("pause");
	system("cls");
}