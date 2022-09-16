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
    vector<int> v(10);
    iota(v.begin(), v.end(), 1);
    print(v);
    cout<<endl;
    
    auto is_odd = [](auto e){ return e % 2 == 1; };
    auto is_even = [](auto e){ return e % 2 == 0; };

    cout<<"# partition:"<<endl;
    // partition(v.begin(), v.end(), is_even);
    stable_partition(v.begin(), v.end(), is_even);
    print(v);
    cout<<endl;

    cout<<"# remove_if:"<<endl;
    remove_if(v.begin(), v.end(), is_odd); // yet no removed all
    print(v);
    cout<<endl;

    cout<<"# remove_if & erase"<<endl;
    v.erase(remove_if(v.begin(), v.end(), is_odd), v.end()); // not okay
    print(v);
    cout<<endl;

    return 0;
}




