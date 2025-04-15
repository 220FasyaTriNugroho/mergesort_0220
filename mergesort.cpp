#include <iostream>
using namespace std;

 //create main a
 int arr[20], B[20];
 int n;

// create main function mergersort
void mergeSort(int low, int high)
{
   
   if (low >= high)
   {
        return;
   }
   
   int mid = (low + high)/2; //steps 2

   //step 3
   //fungsi rekursi - memanggil diri sendiri
   mergeSort(low, mid);
   mergeSort(mid + 1, high);

   //step 4
   int i = low;
   int j = mid + 1;
   int k = low;

   while (i <= mid && j <= high)
   {
    if (arr[i] <= arr[j])
    {
        B[k] = arr[i];
        i++;
        } else {
        B[k] = arr[j];
        j++;
        }
        k++;
    }
   

   while (j <= high)
   {
        B[k] = arr [j];
        j++;
        k = k+1;
   }

   while (i <= mid)
   {
        B[k] = arr[i];
        i++;
        k++;
   }

   //step 5
   for (int x = low; x <= high; x++){
    arr[x] = B[x];
   }
   
   
   


}