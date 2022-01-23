#include <stdio.h>

int main()
{
    int i, j, k, SIZE, COUNT = 0;
    int arr[10];  
    printf("Enter the SIZE of the array\n");
    scanf("%d", &SIZE);

    printf("Enter %d elements for the array\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                COUNT++;
                for (k = j; k < SIZE; k++)
                {
                    arr[k] = arr[k + 1];
                }
                SIZE--;
                j--;
            }
        }
    }

    printf("The number of duplicate elements are: %d\n", COUNT);

    printf("The total elements after deleting duplicate elements are: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", arr[i]);
    }
 return 0;
}
