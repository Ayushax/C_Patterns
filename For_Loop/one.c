#include <stdio.h>

int main() 
{
    
    int n;
    scanf("%d", &n);
  	int size = 2*n -1;
    
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            int min = i<j?i:j;
            
            if(min>size-1-i){
            min = size - 1 -i;
            }
            if(min>size -1 -j)
            {
            min = size -1-j;
            }
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}