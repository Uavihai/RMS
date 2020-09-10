#include "prog.h"

//main file


void main()
{
	int flag = 0;
	int i;
	char *ProductName[55];
	int Price;
	int Quantity;
	char VegFlag;
	manager boss;
	boss.tail = NULL;
	boss.head = NULL;
	boss.size = 0; 
	FILE *f = fopen("Manot.txt", "rt");
	if (f == NULL)
		Error_Msg("Error opening file");

	while (fscanf(f, "%s %d %d %c ", ProductName, &Price, &Quantity, &VegFlag) != EOF)
	{
		//creating the list
		flag = CreatProducts(boss, ProductName, Price, Quantity, VegFlag);
	}
	if (flag)
		printf("Succeeded input!:\n");













	getch();
}