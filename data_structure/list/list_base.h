/**
 * list base operate: declare list struct ,creacte,add ,remove,
 */
#ifndef __LIST_BASE_H
#define __LIST_BASE_H
#include <stdlib.h>
#include <stdio.h>

typedef struct header
{
	int sender;
	int receiver;
	//struct header * header_next;

}header_t;
typedef struct list
{
	int id;
	struct header *header;
	struct list *next;
}list_t;
int is_empty(list_t *);
list_t * create_list(list_t *list);
int add_to_list(list_t *list, header_t header);
int previous_node(list_t *list, header_t header);
int remove_from_list(list_t *list,header_t header);
int print_list(list_t *list);



#endif

