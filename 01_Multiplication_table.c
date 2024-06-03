// print multiplication Table of a given number 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter The Value Of number Whose Multiplication Table Is to Be printed\n");

    scanf("%d",&num);
    for ( int  i = 0; i < 10; i++)
    {
     printf("%d X %d = %d\n",num, i+1 , (i+1)*num);
     
    }
    
return 0;
}