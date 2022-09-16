#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;

template<class T>
void printList(vector<T> &list)
{
    for (auto &element : list)
    {
        cout<<element<<" ";
    }
    cout<<endl;
}

bool comp(int x, int y)
{
    return x > y;
}

int main(int argc, char const *argv[])
{
    // reverse
    vector<int> u5 {1,2,3};
    printList(u5);
    reverse(u5.begin(), u5.end());
    cout<<"# reverse" << endl;
    printList(u5);   
    cout<<endl;

    string text;
    text = "ABC";
    text = "ABCD";
    text = "ABCA";
    text = "coffee";

    vector<char> u6(text.begin(), text.end());
    printList(u6);
    reverse(u6.begin(), u6.end());
    cout<<"# reverse" << endl;
    printList(u6);
    cout<<endl;

    string name = "Zahid";
    cout<<"name = "<<name<<endl;
    reverse(name.begin(), name.end());
    cout<<"reversed name = "<<name<<endl;

    return 0;
}
