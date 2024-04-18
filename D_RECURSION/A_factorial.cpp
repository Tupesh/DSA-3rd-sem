#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main(){
    printf("%d\n",factorial(5));
    printf("%d\n",factorial(7));
    printf("%d\n",factorial(19));
    printf("%d\n",factorial(13));
    return 0;
}