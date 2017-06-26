#include "list_base.h"


int is_empty(list_t * list)
{
	if(list->next ==NULL)
		return 1;
	else
		return 0;
}

list_t * create_list(list_t *list)
{
	list = (list_t *)malloc(sizeof(struct list));
	if(list ==NULL)
	{
		printf("malloc failed\n");
		//return -1;
		exit(-1);
	}
	list->id = 0;
	list->header = NULL;
	list->next = NULL;
	return list;
}
/*
list * init_list(list_t *list)
{
	list->id = 0;
	list->next = null;
	return list;
}*/
int add_to_list(list_t *list, header_t header)
{
	list_t *p =NULL;
    list_t  *q =NULL;
	//p =list->next;
	p =list;
	//if(p)
	//for(p =list->next; list->next !=NULL;  p++)
	while((p != NULL)&&(p->next != NULL))
		p =p->next;

  //header =(header_t *)malloc(sizeof(struct header));
	//if(header==NULL)
		//	return -1;
	q  =(list_t *) malloc(sizeof(struct list));
	 if(q ==NULL)
	 {
		 printf("faild \n");
		 return -1;
	 }
	q->header  =& header;
	q->next = NULL;
	p->next = q;
	return 0;
}

int print_list(list_t *list)
{
	list_t *p;
	if(is_empty(list))
		return -1;
	p = list->next;
	while((p!= NULL)&&(p->next !=NULL))
	{
		printf("header sender =%d \n", p->next->header->sender);
		p =p->next;
	}

	return 0;
}
int remove_from_list(list_t *list, header_t header)
{
	struct list *p,*q;
	p=list->next;
	//q= list->next->next;
	while(p->next->header !=(& header))
		p = p->next;
	p->next = p->next->next;
	//free(&header);
	free(p->next);

}
