int CreateProduct(kitchenControl* p, char* name, float price, int quantity, char vagflag)
{
	kitchenProduct tmp = (kitchenProduct)malloc(sizeof(kitchenProduct));
	if (tmp == NULL)
	{
		ErrorMsg("ALLOCATION MEMMORY ERROR!");
		return 0;
	}

	tmp->ProductName = (char*)malloc((strlen(name) + 1)*sizeof(char));
	if (tmp->ProductName == NULL)
	{
		free(tmp);
		ErrorMsg("ALLOCATION MEMMORY ERROR!");
		return 0;
	}
	strcpy(tmp->ProductName, name);
	tmp->price = price;
	tmp->quantity = quantity;
	tmp->orders_count = 0;

	if (p->size == 0)
	{
		p->head = tmp;
		p->tail = tmp;
		tmp->next = NULL;
		(p->size)++;
		return 1;
	}
	else
	{
		tmp->next = p->head;
		p->head = tmp;
	}
}