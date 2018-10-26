/*Write a program to find sum of all elements of an array. (Use functions)*/

#include<iostream>

using namespace std;


// function to return sum of elements 
// in an array of size n 
int sum(int arr[],int n)
{
	int sum = 0; //initialization of sum
	
	// iterate through all elements
	// and add them to sum
	for (int i = 0; i < n; i++)
	sum += arr[i];
	
	return sum;
}

int main()
{
	int x;
	int arr[] = {12, 3, 4, 15};
	x =sum(arr, 4);
	cout<<x;
	return 0;
}
