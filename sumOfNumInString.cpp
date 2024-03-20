#include<iostream>
#include<string>
using namespace std;

int sum_of_nos(string str) {

	int sum = 0;
	for(char i: str){
		if(isdigit(i))
		   sum += i - '0';
	}

	return sum;
}

int main() {
	
	string str;
	
	std::cout<<"Enter the string";
	getline(cin, str);
	int ans = sum_of_nos(str);
	std::cout<<"Sum of Numbers in string is: "<<ans;	
	
}
