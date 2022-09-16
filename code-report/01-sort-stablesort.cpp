#include<iostream>
#include<vector>
#include<algorithm>
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
    cout<<"# example 1, sorting full list"<<endl;
    vector<int> v {2,3,4,1};
    print(v);
    sort(v.begin(),v.end());
    print(v);
    cout<<endl;

    cout<<"# example 2, partial sort"<<endl;
    vector<int> v2 {9,4,2,1,5,4,8,7};
    print(v2);
    sort(v2.begin(),v2.begin()+3); // partial sort
    print(v2);
    cout<<endl;

    cout<<"# example 3, sorting lexicographically"<<endl;
    vector<string> s {"zebra","ostrich","cat","dog","rat"};
    print(s);
    sort(s.begin(),s.end());
    print(s);
    cout<<endl;

    // auto sortByLength = [](const auto  &a,const auto &b) {return a.size()<b.size();};
    auto sortByLength = [](string a, string b) {return a.size() < b.size();};

    cout<<"# example 4, sort by length using lambda"<<endl;
    vector<string> s1 {"elephant","zebra","mouse","ostrich","cat","dog","rat"};

    print(s1);
    sort(s1.begin(),s1.end(),sortByLength);
    print(s1);
    cout<<endl;

    cout<<"# example 5, stable sort, sorting by length"<<endl;
    vector<string> s2 {"elephant","zebra","mouse","ostrich","cat","dog","rat"};
    //all there can also be done by stable_sort()
    print(s2);
    stable_sort(s2.begin(),s2.end(),sortByLength);
    print(s2);
    cout<<endl;

    return 0;
}
