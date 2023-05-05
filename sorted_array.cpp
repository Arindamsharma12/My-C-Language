#include<iostream>
using namespace std;

int main(){
    // Size of array.
    int size, temp;
   cout<<"Enter the size of array: "<<endl;
   cin>>size;

   // Input elements.
   int arr[size];
   cout<<"Enter elements in array: "<<endl;
   for(int i = 0; i < size; i++){
      cin>>arr[i];
   }   

   // Setting elements in order.
   for(int i = 0; i < size; i++){
      for(int j = (i+1); j < size; j++){
         if(arr[j] < arr[i]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   // New sorted array.
   cout<<"Sorted array. "<<endl;
   for(int i = 0; i < size; i++){
      cout<<arr[i]<<" ";
   }

   return 0;
}