#include<iostream>
using namespace std;

long long sumOfArray(long long arr[], long long n) {
	long sum = 0;
	for(long long i = 0; i<n;i++) {
	sum += arr[i];
	}
	return sum;
}

int main() {
	long long arr[100];
	long long n;
	std::cout<<"Enter the size of the array: ";
	std::cin>>n;

	std::cout<<"Enter Array Elements:\n";
	for(long long i = 0; i< n; i++) {
		std::cin>>arr[i];
	}

	long long ans = sumOfArray(arr,n);
	std::cout<<"The sum of the elements of the array is: "<<ans;
}
