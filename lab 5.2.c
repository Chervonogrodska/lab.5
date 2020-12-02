#include <stdio.h>

int main()
{
    
    const int n = 10;
    printf("Введiть масив");
    int A[n];
    int pluss = 0;
        int min_id = 0;
        int min = A[0];
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }
        int dob = 1;
        for (int i = 0; i < n; i++)
        {
           if (A[i]<0)
           dob *= A[i];
        }

        printf("Добуток відємних елементів масиву = %d", dob);

 

        for (int i = 0; i < n; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
                min_id = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
          if (i>min_id)
            pluss += A[i];
        }

        printf("\nСума елементів масиву розташованих після мінімального елемента = %d", pluss);
}
