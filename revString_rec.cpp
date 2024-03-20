#include<iostream>
#include<string>
using namespace std;

void reverse_str(string& s, int n, int i)
{
	if (n <= 1) {
	    return;
	}

	swap(s[i], s[n]);
	reverse_str(s, n-1, i+1);
}

int main()
{
	string str;
	getline(cin, str);
	reverse_str(str, str.length()-1,0);
	cout<<str<<endl;

}
