#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<numeric>//for accumulate operation
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
    // vector<int> v {4, 9, 2, 2, 3, 5, 7, 8, 1, 1, 1, 6, 0};
    // vector<int> v = {4, 9, 2, 3, 5, 7, 8, 1, 1, 1, 6, 0};
    vector<int> v = {4, 9, 2, 3, 5, 7, 8, 1, 1, 1, 6, 0, 1};
    
    print(v);
    cout<<v.size()<<endl;
    cout<<endl;

    cout<<"# count(2) = "<< count(v.begin(), v.end(), 2) <<endl;
    cout<<"# count(1) = "<< count(v.begin(), v.end(), 1) <<endl;
    cout<< endl;

    auto is_odd = [](auto e){ return e % 2 == 1; };
    auto is_even = [](auto e){ return e % 2 == 0; };

    cout<<"# even_count = "<< count_if(v.begin(), v.end(), is_odd) <<endl; // passing binary predicate (lambda)
    cout<<"# odd_count = "<< count_if(v.begin(), v.end(), is_even) <<endl; // passing binary predicate (lambda)

    return 0;
}



