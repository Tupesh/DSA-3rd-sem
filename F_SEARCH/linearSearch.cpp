#include <stdio.h>

int greatest(int * a, int maxsize, int search)
{
    int start = 0;
    int end = maxsize - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == search)
        {
            return mid;
        }
        else if (a[mid] > search)
        {
            end = mid;
        }
        else if (a[mid] < search)
        {
            start = mid;
        }
        if (start == end || end == mid)
        {
            break;
        }
    }
    return -1;
}

int main()
{
    int n, s;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array in ascending order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search element of array: ");
    scanf("%d", &s);

    int g = greatest(arr, n, s);
    if (g != -1)
        printf("The required number is found at index: %d", g);
    else
        printf("The required number is not found in the array");
}