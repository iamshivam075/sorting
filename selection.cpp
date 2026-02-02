#include<iostream>
using namespace std;
 void sort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
       int midindex=i;

        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[midindex])
            midindex=j;
        }
        swap(arr[midindex],arr[i]);
    }

 }

 int main(){
    int arr[]={3,45,32,4,87,7,9};
    int size=7;

    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
 }