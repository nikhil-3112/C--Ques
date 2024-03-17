#include<iostream>
using namespace std;

long gcd(long a, long b) {

	if(a==0 || b==0)
	return 0;

	if(a==b)
	return a;

	long result = min(a,b);
	while(result > 0){
		if(a % result == 0 && b % result == 0){
			break;
		}
		result--;
	}

	return result;
}

int main() {
long n,a,b;
std::cout<<"Enter two numbers:\n";
std::cin>>a>>b;

long ans = gcd(a,b);
std::cout<<"The GCD of Two numbers is: "<<ans;

}
