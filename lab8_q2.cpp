//TO write a programme to find the largest and smallest value
//Define Library
# include<iostream>
using namespace std;
//Declaring the function
int foo (int arr[],int n){
int i,k;
//Using the loop to sort them in ascending order
for (i=0;i<n;i++){
   if (arr[i] < arr[i+1])
         {
        arr[i]=arr[i+1];
         k=arr[0]; 
         cout <<  "the  largest element is "<<  k ; 
         }
       else {
            } 
      
  }
  return k;
 } 
//Driver function
int main(){
int arr[]={25,18,21};
//Calling the function
foo ( arr,3 );
return 0;
}
