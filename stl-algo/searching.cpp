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
    // find()
    vector<int> u {4,9,2,3,2,3,5,7,8,1,0,1,2};
    printList(u);
    vector<int>::iterator it;

    it = find(u.begin(), u.end(), 2);
    it = find(u.begin(), u.end(), 5);
    it = find(u.begin(), u.end(), -4);
    if (it != u.end())
    {
        // int position = it - u.begin();
        cout<< *it <<" found at position "<< it - u.begin() <<endl;
    }
    else 
    {
        cout<< *it <<" not found"<<endl;
    }
    cout<<endl;

    sort(u.begin(), u.end());
    printList(u);
    // binary_search()
    cout<< binary_search(u.begin(), u.end(), 2) <<endl;
    cout<< binary_search(u.begin(), u.end(), -4) <<endl;
    cout<< binary_search(u.begin(), u.end(), 6) <<endl;

    return 0;
}
