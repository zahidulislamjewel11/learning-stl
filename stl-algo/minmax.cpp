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
    vector<int>::iterator it1;
    vector<int>::iterator it2;

    it1 = max_element(u.begin(), u.end());
    it2 = min_element(u.begin(), u.end());
    
    // int position = it - u.begin();
    cout<< *it1 <<" is max element found at position "<< it1 - u.begin() <<endl;
    cout<< *it2 <<" is min element found at position "<< it2 - u.begin() <<endl;
    cout<<endl;

    vector<int>::iterator it3;
    vector<int>::iterator it4;

    auto minmax = minmax_element(u.begin(), u.end());
    cout<< "min = " << *minmax.first <<endl; // min
    cout<< "max = " << *minmax.second <<endl; // max

    sort(u.begin(), u.end());
    printList(u);


    return 0;
}
