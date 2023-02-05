#include <stdio.h>
int main()
{
    int first, second;
    scanf("%d", &first);
    scanf("%d", &second);

    if (second == 0) {
        printf("Error, division by zero");
        return 0;
    }

    float result = first/second;
    printf("Result is %.3f", result);
    return 0;
}
