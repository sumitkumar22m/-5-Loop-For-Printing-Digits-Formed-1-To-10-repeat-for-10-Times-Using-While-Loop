#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,j=1;
    while(i<=10)
    {
        while(j<=10)
        {
            printf("%d",j);
            j++;
        }
        j=1;
        i++;
        printf("\n");
    }
    getch();
}
