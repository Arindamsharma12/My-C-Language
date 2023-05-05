#include<iostream>
using namespace std;

int main(){
    // Size of array.
    int size;
   cout<<"Enter the size of array: "<<endl;
   cin>>size;

   int arr[size];
   // Input elements.
   cout<<"Enter elements in array: "<<endl;
   for(int i = 0; i < size; i++){
      cin>>arr[i];
   }   

   // Checking duplicate element.
   for(int i = 0; i < size; i++){
      for(int j = (i + 1); j < size; j++){
         if(arr[i] == arr[j]){
            for(int k = j ; k < size - 1; k++){
               arr[k] = arr[k + 1];
            }
            // After deleting element from array, its size will reduce
            size --;
            // the value of j will remains same.
            j--;
         }
      }
   }

   // New array having unique elements only.
   cout<<"Array with unique elements."<<endl;
   for(int i = 0; i < size; i++){
      cout<<arr[i]<<" ";
   }
   return 0;
}