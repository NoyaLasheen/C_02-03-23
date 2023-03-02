#include<stdio.h>
int main()
{
    int x;
    label1:
        printf("Enter value of x: ");
        scanf("%d",&x);
        if (x>100)
            goto label1;
        else
            goto label2;
    label2:
        printf("The value is ok");
    return 0;

}
