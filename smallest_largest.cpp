#include<iostream>
using namespace std;

void smallestAndlargest(long long arr[], long long n) {
	long long smallest = arr[0];
	long long largest = arr[0];

	for(int i = 0; i< n;i++){
		if(arr[i] < smallest)
			smallest = arr[i];
		if(arr[i] > largest)
			largest = arr[i];
	}
	std::cout<<"The smallest and largest elements are "<<smallest<<" and "<<largest<<" respectively";

}

int main() {
	long long arr[50];
	long long n = sizeof(arr) / sizeof(arr[0]);
	std::cout<<"Enter length of the array: ";
	cin>>n;	

	std::cout<<"Enter Array elements:\n";
	
	for(long long i = 0;i < n;i++) {
	std::cin>>arr[i];
	}	

	

	smallestAndlargest(arr,n);	
	
}
