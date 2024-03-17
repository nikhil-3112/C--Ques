#include<iostream>
using namespace std;

long fibonacci(long n) {
	long first = 0;
	long second = 1;
	long ans=0;

	if(n == 0 || n == 1)
	return 0;

	if(n == 2)
	return 1;

	for(long i = 3; i<= n; i++) {
	ans = first + second;
		first = second;
		second = ans;
	}
	return ans;
}

int main() {
	int n;
	std::cout<<"Enter a number: ";
	std::cin>>n;
	
	long result = fibonacci(n);
	std::cout<<"The nth Fibonacci number is: "<<result;

		
}
