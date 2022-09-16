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


int main(int argc, char const *argv[])
{
    // count()
    vector<int> u {4,9,2,3,2,3,5,7,8,1,0,1,2};
    printList(u);
    cout<<"# count = " << count(u.begin(), u.end(), 0) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 1) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 2) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 3) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 4) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 5) <<endl;
    cout<<"# count = " << count(u.begin(), u.end(), 6) <<endl;
    cout<<endl;

    return 0;
}
