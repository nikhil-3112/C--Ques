#include<iostream>
using namespace std;

long sumOfNnumber(long n) {
	long sum = 0;
	for(long i = 0; i<= n; i++) {
	sum += i;
	}

	return sum;
}

int main() {
long n;
std::cout<<"Enter nth Number: ";
std::cin>>n;

long result = sumOfNnumber(n);
std::cout<<"Sum of N numbers: "<<result;


}
