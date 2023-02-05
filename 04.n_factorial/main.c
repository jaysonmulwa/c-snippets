#include <stdio.h>
int main()
{
    int i, n, fakt = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i=1;i<= n;i++) //use braces to write more than one statement inside the loop
    {
         fakt=fakt*i;
         printf("Factorial of %d is %d\n", i, fakt);
    }
    getch();
}