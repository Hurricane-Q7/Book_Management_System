#pragma once
#define MAX_SIZE 1000
//关于图书管理系统的一些相关的结构体定义
struct Book
{
	char ISBN[50];
	char bookName[50];
	int bookPrices;
};
struct Bms 
{
	struct Book book[MAX_SIZE];
	int book_Count;
};
