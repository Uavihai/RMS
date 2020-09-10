#ifndef _prog
#define _prog



//libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>                //Header file
#include <string.h>


//structures definition



typedef struct food{
	char *name; //name of food
	int stock;  //amount of food
	int price; //price of food
	char veg; //the food vegetable or not
	int size;
	food *next;
	
}food;

typedef struct manager
{
	food *head;
	food *tail;
	int size;
}manager;


typedef struct table
{
	int num;
	food *Next;
	food *Prev;
}Table, *PTable;





//declaring func
void Error_Msg(char* str);
int  CreatProducts(manager boss, char *ProductName, int Price, int Quantity, char VegFlag);
void AddItem(char *ProductName, int Quantity);
void OrderItem(int TableNumber, char *ProductName, int Quantity);
void RemoveItem(int TableNumber, char *ProductName, int Quantity);
void RemoveTable(int TableNumber);


#endif