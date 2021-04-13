#include "dsa.h"
#include <stdio.h>

int main(void)
{
    int A[] = {5, 2, 4, 7, 1, 3, 2, 6};
    merge_sort(A,0,7);
    for(int i = 0; i < 8; i++)
    {
	printf("%d", A[i]); 
    }
    printf("\n"); 
    
    
    return 0; 
}

