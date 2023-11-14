#include <stdio.h>

int main()
{
    int i,j;
    printf("Введите размер массива\n");
    scanf("%d",&i);
    int arr[i];
    srand(time(NULL));
    for (j=0; j < i; j++)
    {
        arr[j] = rand()%100;
    }
    
    for (j=0;j<i;j++)
    {
        printf("arr[%d]=%d;\n",j,arr[j]);
    }

    for (j=1; j < (i-1); j++)
    {
        if ((arr[j] < arr[j-1]) || (arr[j] < arr[j+1])) 
        {   
            printf("arr[%d]=%d;\n",j,arr[j]);
            printf("Номер первого локального минимума - %d",j);
            break;
        }
    }
}
