/* merge sort */

void merge(int *A, int p, int q, int r);

void merge_sort(int *A, int p, int r);

/* linked list */
typedef struct node
{
    int key;
    struct node *prev; 
    struct node *next;
} node;

typedef struct list
{
    struct node *nil;
} list;

node *list_search(list *L, int k);

void list_insert(list *L, int k);

void list_delete(list *L, int k);
                                     
void print_list(list *L); 

