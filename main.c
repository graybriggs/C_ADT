
#include <stdio.h>

#include "list.h"
#include "debug.h"



int main()
{
	
	list lst;
	init_list(&lst);
	
	char* c;
	
	c = malloc(sizeof(char));
	*c = 'y';
	push_front(&lst, c);

	c = malloc(sizeof(char));
	*c = 'a';
	push_front(&lst, c);
	
	c = malloc(sizeof(char));
	*c = 'r';
	push_front(&lst, c);
	
	c = malloc(sizeof(char));
	*c = 'g';
	push_front(&lst, c);
	
	dbg_print_list(&lst);
	
	return 0;
}
