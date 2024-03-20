#include<iostream>
using namespace std;

long long largest(long long arr[], long long n) {

	long long largest = arr[0];
	for(long long i = 0; i< n ;i++) {
		if(arr[i] > largest)
	 	  largest = arr[i];
	}
	
	return largest; 
}

int main(){
long long arr[100];
long long n = sizeof(arr) / sizeof(arr[0]);

std::cout<<"Enter number of elements: ";
std::cin>>n;
std::cout<<"Enter Elements of Array: "<<endl;

for(long long i = 0;i < n; i++) {
	std::cin>>arr[i];

}
long long ans = largest(arr,n);
std::cout<<"The largest element of the array is: "<<ans;



}
