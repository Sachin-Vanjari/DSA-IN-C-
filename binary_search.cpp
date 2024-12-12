#include<iostream>
using namespace std;
 


 int binary_search(int arr[], int size, int key)
{

     int start = 0;
     int end = size-1;
     int mid = (size + end)/2;

     while ( start <= end)
     {
      if (arr[mid] == key)
      {
        return mid;
      }

      if (arr[mid] < key)
      {
        start = mid + 1;
      }

      if (arr[mid] > key)
      {
        end = mid + 1;
      }

      int mid = (size + end)/2;
     }
}
 int main ()
 {
     int arr [5] = { 2,4,6,8,10};
     int size = 5 ;
     int key = 8;


     int search = binary_search(arr,size,key);

     cout << "YOUR INDEX IS : "<< search;
 }
