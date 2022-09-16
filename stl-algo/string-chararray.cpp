#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    str = "ABC";
    str = "ABCD";
    str = "ABCA";
    str = "coffee";

    // string to char array, method 1
    int n = str.length();
    char coffeeArray[n+1];
    strcpy(coffeeArray, str.c_str());
    cout<<coffeeArray<<endl;

    // string to char array, method 2
    char *charArray;
    charArray = &str[0];
    cout<<charArray<<endl;

    // string to char array, method 3
    const char *ch;
    ch = str.c_str();
    cout<<ch<<endl;



    return 0;
}
