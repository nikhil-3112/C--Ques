#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string alphabeticString(string str) {
	string result = "";
	for(int i = 0;i < str.length(); i++) {
		if(isalpha(str[i]))
		result += str[i];

	}

	return result;	

}

int main() {
string  str;
getline(cin,str);

string res = alphabeticString(str);
std::cout<<"The String with Alphabets only is: "<<res;
	
}
