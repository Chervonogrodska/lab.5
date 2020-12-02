#include <stdio.h>
#include <time.h>

int main()
{
    
   const int n=10, Low=-100, High=100;
srand(time(0));
int A[n];
    int pluss = 0;
        int min_id = 0;
        int min = A[0];
   for (int i=0; i<n; i++)
{
A[i]=Low+rand()%High;
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
