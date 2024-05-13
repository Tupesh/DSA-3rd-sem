#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    int flag = 0;

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag++;
            }
        }
    }

    printf("The array after being sorted is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Flag: %d\n", flag);
}