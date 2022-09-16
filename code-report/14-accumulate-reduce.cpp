#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>//for accumulate operation

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
    vector<int> v {4, 9, 2, 3, 5, 7, 8, 1, 6};
    print(v);
    cout<<endl;

    cout<<"# accumulate addition:\n";
    auto x = accumulate(v.begin(), v.end(), 0); // add all values to 0
    cout<<x<<endl;
    cout<<endl;

    cout<<"# accumulate multiplication:\n";
    auto y = accumulate(v.begin(), v.end(), 1, multiplies<>()); // multiplies all values 1
    cout<<y<<endl;
    cout<<endl;

    cout<<"# reduce addition:\n";
    auto p = reduce(v.begin(), v.end());
    cout<<p<<endl;
    cout<<endl;

    cout<<"# reduce addition:\n";
    auto q = reduce(v.begin(), v.end(), 0, plus<>()); // default, asme as previous
    cout<<q<<endl;
    cout<<endl;

    cout<<"# reduce multiplication:\n";
    auto r = reduce(v.begin(), v.end(), 1, multiplies<>());
    cout<<r<<endl;
    cout<<endl;

    return 0;
}


