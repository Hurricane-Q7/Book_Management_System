#pragma once
#define MAX_SIZE 1000
//本项目一些相关的结构体定义
struct Book
{
	char ISBN[50];
	char bookName[50];
	int bookPrices;
};
typedef struct Bms
{
	struct Book book[MAX_SIZE];
	int book_Count;
}Bms;
