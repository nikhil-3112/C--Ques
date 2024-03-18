#include<iostream>
using namespace std;

long long secondSmallest(long long arr[], long long n){
	int smallest = arr[0];
	long long prev = arr[0];
	long long first = arr[0];
	long long second = arr[0];


	for(long long i = 0; i < n; i++){
		//prev = first;
	  if(arr[i] < first){
		second = first;
		first = arr[i];}

	}

	return second;
}

int main() {

	long long n;
	long long arr[100];
	std::cout<<"Enter the size of the array: ";
	std:: cin>>n;

	std::cout<<"Enter array elements: ";
	//long long n = sizeof(arr)/ sizeof(arr[0]); 

	for(long i = 0;i < n; i++){
	std::cin>>arr[i];
	}

	long ans = secondSmallest(arr,n);
	std::cout<<"The second smallest element in the array is: "<<ans;
}
