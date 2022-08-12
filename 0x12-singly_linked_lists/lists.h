#ifndef _LISTS_
#define _LISTS_

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length  of the string
 * @next: points to next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _putchar(char c);

#endif