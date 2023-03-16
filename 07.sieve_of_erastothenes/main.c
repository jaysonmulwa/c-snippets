#include<stdio.h>  
#include<math.h>  
 
#define N 100  
//get/generate Prime numbers between 0 and 100
int main()  
{  
    int num[N], i, j;  
    int limit = sqrt(N);  
  
    for(i = 0; i < N; i++)  
        num[i] = i + 1;  
  
    for(i = 1; i <= limit; i++)  
    {  
        if(num[i] != 0)  
        {  
            for(j = pow(num[i], 2); j <= N; j = j + num[i])  
            {  
                num[j - 1] = 0;  
            }  
        }  
  
    }  
  
    printf("Sieve of Eratosthenes Method: To find Prime numbers from 2 to %d\n\n", N);  
    for(i = 1; i < N; i++)  
    {  
        if(num[i] != 0)  
            printf("%d\t", num[i]);  
    }  
  
    printf("\n");  
  
    return 0;  
}  
