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
    // next permutation
    vector<int> u3 {1,1,4};
    printList(u3);
    cout<<"# next_permutation" << endl;
    do
    {
        printList(u3);   
    } while (next_permutation(u3.begin(), u3.end()));
    cout<<endl;

    string str;
    str = "ABC";
    str = "ABCD";
    str = "ABCA";
    str = "coffee";

    vector<char> u4(str.begin(), str.end());
    printList(u4);
    sort(u4.begin(), u4.end()); // sorting is a must
    cout<<"# next_permutation" << endl;
    int counter = 0;
    do
    {
        counter++;  
        cout<<counter<<": ";
        printList(u4); 
    } while (next_permutation(u4.begin(), u4.end()));
    cout<<"total perm = "<< counter <<endl;
    cout<<endl;

    return 0;
}
