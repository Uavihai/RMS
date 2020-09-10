#include "prog.h"

int  CreatProducts(manager boss, char *ProductName, int Price, int Quantity, char VegFlag)
{
	
		int len;
		food *temp = (food*)malloc(sizeof(food));
		temp->next = NULL;
		if (temp == NULL){
			printf("\nError allocating memory");
			exit(1);
		}
		len = strlen(ProductName) + 1;
		temp->name = (char*)malloc(len*sizeof(char));
		//need to add a case that there is a same name...
		strcpy(temp->name, ProductName);
		temp->price = Price;
		temp->veg = VegFlag;


		if (boss.size==0)//if is the first node
		{ 
			boss.tail = temp; //point on last node
		}
		(boss.size)++;

		//creating list
		boss.head = temp;
		boss.head->next = boss.tail;
		boss.tail = boss.head;
	
		return 1;
}
void Error_Msg(char* str)
{
	printf("\n%s", str);
	exit(1);
}


void AddItems(food cur, char *ProductName, int Quantity)
{





}




void OrderItem(int TableNumber, char *ProductName, int Quantity)