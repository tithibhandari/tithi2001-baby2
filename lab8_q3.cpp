//a function to kth largest and kth smallest element 
#include <iostream>
using namespace std;
//to find the smallest element
void k sml(int arr[],int size,int k){
     int i=k-1;
cout <<"the" << k <<"th smallest element is " <<arr[i]<<endl;
}
//to find the largest element 
void klarge (int arr[],int size,int k){
int i=size-k;
cout << "the" << "th largest element" << arr[i]<< endl;
}  
//main function
int main(){
int size 
int i,k;
//size of the arrays 
cout <<"enter the value of the size"<<endl;
  cin >> size;
int arr[size]
//ask the value of yhe array
for (i=0;i<size ;i++){
 cout <<"enter the " << i+1 << "th value " << endl;
cin >> arr [i];
}
cout <<"enter the value of k"<<endl;
cin >> k;
//ascending order
for (int j=0;j<size-1;j++){
    for (i=0;i<size-1;i++){
        if (arr[i]>arr[i+1]){
          int k=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=k;
          }
       } 
    }
cout << "***"<<endl;
 for (i=0;i < size; i++){
   cout <<arr[i] << endl;
//calling ksml;
ksml(arr,size,k);
  //calling klarge 
klarge(arr,size,k);
return 0;
} 
