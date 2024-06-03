#include <stdio.h>

int main()
{
    int n, sum = 0; 
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d", &n); 

    for (int i = 1; i <= n; i++)
    {
        sum += i; 
    }

    
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0; 
}
