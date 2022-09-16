#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<numeric> //for accumulate operation
#include<ctype.h>

using namespace std;

template<typename T>
void print(T list)
{   
    int n = 0;
    cout<<"[";
    for(const auto &element: list)
    {
        if(n < list.size() - 1)
            cout<< element <<", ";
        else
            cout<< element;
        
        n++;
    }
    cout<<"]";
    cout<<endl;
}


int main()
{
    // Searches the range [first, last) for two consecutive equal elements.
    // vector<int> v {4, 9, 2, 2, 3, 5, 7, 8, 1, 1, 1, 6, 0};
    // vector<int> v {4, 9, 2, 3, 5, 7, 8, 1, 1, 1, 6, 0};
    // vector<int> v {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 21, 15};
    vector<int> v {11, 7, 5, 3, 2, 4, 6, 8};
    print(v);
    cout<<endl;

    // auto iter = adjacent_find(v.begin(), v.end()); // default is equal
    // auto iter = adjacent_find(v.begin(), v.end(), greater<>()); // with binary predicate
    auto iter = adjacent_find(v.begin(), v.end(), less<>()); // with binary predicate

    cout<<"# value: "<<*iter<<endl;
    cout<<"# index: "<< distance(v.begin(), iter) <<endl;

    return 0;
}


