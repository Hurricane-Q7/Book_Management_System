#pragma once
#include"stdio.h"
#include"Book_Struct_Infomation.h"
#include<Windows.h>
#include<string.h>
int findByIsbn(struct Bms* bms, char isbn[]);
void findBook(struct Bms* bms, char isbn[]);
