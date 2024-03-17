#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length of string: " << str.length() << endl; 

    for (int i = 0; i < str.length(); ++i) {
        cout << "Character at index " << i << ": " << str[i] << endl; 
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Toggled string: " << str << endl;
    
    return 0;  
}

