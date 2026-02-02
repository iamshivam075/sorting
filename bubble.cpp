 #include<iostream>
 using namespace std;

 void sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
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