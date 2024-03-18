#include<iostream>
using namespace std;

long long gcd(long long a, long long b) {
		if(b==0)
		return a;
	return gcd(b,a%b);
}

long long lcm(long long a, long long b) {
	return a/gcd(a,b) * b;
	
}

int main() {
	int a,b;
std::cout<<"Enter two numbers:\n";
std::cin>>a>>b;

long long ans = lcm(a,b);
std::cout<<"The LCM of two numbers is: "<<ans;

}
