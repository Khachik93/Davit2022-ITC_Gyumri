#include  <iostream>
using namespace std;

void selectionSort(int[],int);
void printArr(int[],int);

int main(){
   int arr[7] = {5,10,8,6,7,9,4};
   int size = sizeof(arr)/sizeof(int);
   selectionSort(arr,size);
   printArr(arr,size);
}

void selectionSort(int arr[],int size){
   for(int i = 0;i < size; i++){
     int small=i;
     for(int j = i+1;j< size;j++){
       if(arr[j] < arr[small]){
        small = j;
       }
     }

     int temp = arr[i];
     arr[i] = arr[small];
     arr[small] = temp;      
  } 
}



void printArr(int arr[],int size){
  for(int i = 0;i < size; i++){
    cout << arr[i] <<", ";
  }
  cout <<"\n";
}

