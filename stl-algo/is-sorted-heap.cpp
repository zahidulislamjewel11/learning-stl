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
    // is_sorted
    vector<int> u {1,2,3};
    printList(u);
    cout<<"# is_sorted = " << is_sorted(u.begin(), u.end()) <<endl;
    cout<<"# is_heap = " << is_heap(u.begin(), u.end()) <<endl;
    cout<<endl;

    // is_sorted
    vector<int> v {4,9,2,3,5};
    u = v;
    printList(u);
    cout<<"# is_sorted = " << is_sorted(u.begin(), u.end()) <<endl;
    cout<<"# is_heap = " << is_heap(u.begin(), u.end()) <<endl;
    cout<<endl;

    return 0;
}
