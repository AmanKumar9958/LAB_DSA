#include <stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter the number of elements");
    scanf("\n%d", &n);

    printf("Enter the elements");
    for(i=0; i<n; i++)
    scanf("%d", &array[i]);
    printf("Enter the value to find\n");
    scanf("%d", &key);
    
    low=0;
    high = n-1;
    mid = (low+high)/2;
    while (low <= high)
    {
        if (array[mid]<key)
        {
            low = mid +1;
        }
        else if (array[mid]==key)
        {
            printf("%d found at location %d.\n", key, mid+1);
            break;
        }
        else
        {
            high = mid-1;
            mid = (low + high)/2;
        }
        if (low>high)
        {
            printf("Not found! %d is not present in the list.\n", key);
        }
        
    }
    getch();
    return 0;
}