#include <string.h>
#include <stdio.h>

int main(void)
{
    int a[20];
    int i;
    
    i = 0;
    while (i < 20)
    {
        a[i] = i+1;
        printf("%d ", a[i]);
        i++;
    }
    bzero(a, 20);
    i = 0;
    printf("\n");
    while (i < 20)
    {
        printf("%d ", a[i]);
        i++;
    }
}
