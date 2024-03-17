#include<iostream>
using namespace std;

int leapYear(int year) {
	
if(year % 400 == 0)
return true;

if(year % 100 == 0)
return true;

if(year % 4 == 0)
return true;

return false;
}


int main() {
	int year;
	std::cout<<"Enter a year: ";
	std::cin>>year;
        bool result = leapYear(year) ;

	if(result == true)
	std::cout<<"It is a Leap Year";
	else
	std::cout<<"It is not a Leap Year";
}
