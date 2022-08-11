#ifndef _LISTS_
#define _LISTS_

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length  of string
 * @next: points to next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);


#endif
