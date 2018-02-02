#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
using namespace std;

 void radix(int *ar, int *br, int *cr, int sizeC, int sizeAB)
{
    int i,k,n;
    k = sizeC;
    n = sizeAB;
    for (i = 0; i <= k; i++)
        cr[i]=0;
    for (i = 0; i < n; i++)
        cr[ar[i]]+=1;
    for (i = 1; i < k+1; i++)
        cr[i]+=cr[i-1];
    for (i = n-1; i >= 0; i--)
      {
         br[cr[ar[i]]-1]=ar[i];
         cr[ar[i]]-=1;
      }
  }

int main()
{setlocale (LC_ALL,"RUS");
int n;
cin >> n;
    int *ar= new int[n];
    int *cr=new int [101];
for (int i=0;i<n; i++)
{
    ar[i]=rand()%100;
  cout<<ar[i]<< " ";
}

 int *br=new int[n];
clock_t start = clock();
radix(ar,br,cr,101,n);
clock_t end = clock();


 for(int i=0;i<n;i++)
 {
 cout<<br[i]<< " ";}
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The time: %f seconds\n", seconds);
    return 0;
}
