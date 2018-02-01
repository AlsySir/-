#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdio.h>
#include <time.h>

using namespace std;
void selection(int *ar, int n)
 {
     int i, j, mx, nmx;

     for(i = 0; i < n-1; i++)
       {
         mx=ar[i];
         nmx=i;
         for(j = i+1; j < n; j++)
           {
             if (ar[j]<mx)
                {
                 mx=ar[j];
                 nmx=j;
                 }
           }
          ar[nmx]=ar[i];
          ar[i]=mx;
           }
     }

int main()

{ setlocale (LC_ALL,"RUS");
int  n;
cin>>n;
    int *ar= new int[n];
for (int i=0;i<n; i++)
{
    ar[i]=rand()%100;

}
 //cout<<"Отсортированный массив"<<endl;
  selection(ar,n);

clock_t start = clock();
      selection(ar,n);
      clock_t end = clock();
      double seconds = (double)(end - start) / CLOCKS_PER_SEC;
      printf("The time: %f seconds\n", seconds);
system("pause");

    return 0;
}
