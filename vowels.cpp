#include<iostream>

int main() {
  char n;

std::cout<<"Enter a char: ";
std::cin>>n;

if(n =='a' || n =='i' || n == 'e' || n=='o' || n == 'u' || n =='A' || n == 'E' || n =='I' || n == 'O' || n == 'U')
std::cout<<n<<" is Vowel";

else 
std::cout<<n<<" is Consonent";

}
