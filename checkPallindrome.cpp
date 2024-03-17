#include<iostream>
using namespace std;

bool isPallindrome(string str) {
	int n = str.length();

	if(n == 1)
	return true;

	for(int i = 0; i<=n/2; i++){
		if(str[i] != str[n-i-1])
		return false;
	}

	return true;
}

int main() {
string str;
std::cout<<"Enter a string: ";
getline(cin,str);

bool result = isPallindrome(str);
if(result == true) {
std::cout<<"The Given String is Pallindrome";
}
else
std::cout<<"the given string is not Pallindrome";

}
