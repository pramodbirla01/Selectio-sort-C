#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of an Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("input value are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int indexof = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexof])
            {
                indexof = j;
            }   
        }

        temp = arr[i];
        arr[i]=arr[indexof];
        arr[indexof]=temp;
    }
    printf("\nArray after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}