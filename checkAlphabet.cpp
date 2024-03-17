#include<iostream>
#include<cctype>
using namespace std;

int main () {

char ch;
std::cin>>ch;

if(isalpha(ch))
std::cout<<ch<<" is an Alphabet";

else 
std::cout<<ch<<" is not Alphabet";

}


