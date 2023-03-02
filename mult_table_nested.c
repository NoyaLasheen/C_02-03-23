#include<stdio.h>
int main()
{
    int i,a;
    for(i=1;i<=5;i++)
    {
        for (a=1;a<=10;a++)
        {
            printf("%d x %d = %d\n",a,i,a*i);
        }
        printf("\n\n\n");
    }
    return 0;
}
