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





// using Recursion 


int binary(int arr[], int s, int e, int key)
{
    if(s > e)
    return false;

    int mid = (s + e)/2;

    if(arr[mid] == key)
    return true;

    if(arr[mid] > key)
    {
        return binary(arr, s, e - 1, key);
    }
    else{
         return binary(arr, s + 1, e, key);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int s = 0;
    int e = 4;
    int key = 6;
    int ans = binary(arr, s, e, key);

    if(ans)
    {
       cout<< "key is present";
    }
    else{
         cout<< "key is absent";
    }
}
