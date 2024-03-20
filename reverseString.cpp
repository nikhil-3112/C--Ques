#include<iostream>
#include<string>
using namespace std;

string rev_string(string str) {
	string str1;
	for(int i=str.length()-1; i>=0; i--){
		str1 += str[i];
	}

	return str1;
}

int main(){
string str;
getline(cin, str);

string ans = rev_string(str);
cout<<"The reversed string is: "<<ans;
}
