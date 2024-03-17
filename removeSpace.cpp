#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string removeSpace(string str) {
	string result = "";
	for(int i = 0; i < str.length(); i++) {
		if(str[i] != ' ') {
			result += str[i];
		}
	}

	return result;
}

int main() {
 string str;
 getline(cin, str);

 string result = removeSpace(str);
std::cout<<"The String without space is: "<<result;
}


