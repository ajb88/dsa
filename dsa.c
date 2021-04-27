#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<math.h>
#include "dsa.h"

/* merge sort */
void merge(int *A, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int *L = malloc((n1 + 1) * sizeof(int));
    int *R = malloc((n2 + 1) * sizeof(int));
    for(int i = 0; i < n1; i++)
    {
	L[i] = A[p + i];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    
    for(int i = 0; i < n2; i++)
    {
	R[i] = A[(q + 1) + i];
    }
    int i = 0;
    int j = 0;
    
    for(int k = p; k <= r; k++)
    {
	if(L[i] < R[j])
	    A[k] = L[i++];
	else
	    A[k] = R[j++]; 
    }
}

void merge_sort(int *A, int p, int r)
{
    if(p < r)
    {
	int q = floor((p + r) / 2);
	merge_sort(A, p, q);
	merge_sort(A, q + 1, r);
	merge(A, p, q, r);
    }
}

/* linked list */
node *list_search(list *L, int k)
{
    node *x = L->nil->next;
    while(x != L->nil && x->key != k)
	x = x->next;
    return x; 
}

void list_insert(list *L, int k)
{
    node *x = malloc(sizeof(node));
    x->key = k; 
    x->next = L->nil->next;
    L->nil->next->prev = x;
    L->nil->next = x; 
    x->prev = L->nil;
}

void list_delete(list *L, int k)
{
    node *x = L->nil->next;
    while(x->key != k)
	x = x->next;
    x->prev->next = x->next;
    x->next->prev = x->prev; 
}

void print_list(list *L)
{
    node *x = L->nil->next;
    while(x != L->nil)
    {
	printf("%d ", x->key);
	x = x->next; 
    }
	
    printf("\n"); 
}
