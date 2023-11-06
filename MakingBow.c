#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<(n/2)+1;i++)
    {
        for (int s=1;s<=i;s++)
            printf("*");
        for(int r=n-(2*i);r>0;r--)
            printf(" ");
        for (int s=1;s<=i;s++)
            printf("*");
        printf("\n");
    }
    for(int r=n;r>0;r--)
        printf("*");
    printf("\n");
    for(int i=1;i<n;i=i+2)
    {
        for(float s=(n-i+1)/2;s>0;s--)
            printf("*");
        { for(int s=i;s>0;s--)
                printf(" ");}
        for(float s=(n-i+1)/2;s>0;s--)
            printf("*");
        printf("\n");
    }





}