#include<iostream>

int main() {
int a,b,c;

std::cout<<"Enter the Numbers:\n";
std::cout<<"a:";
std::cin>>a;
std::cout<<"b:";
std::cin>>b;
std::cout<<"c:";
std::cin>>c;


if(a>b && a>c)
std::cout<<"a is greater than b and c.";
else if(b>c && b>a)
std::cout<<"b is greater than a and c.";
else 
std::cout<<"c is greater than a and b.";

}
