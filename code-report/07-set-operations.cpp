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
    cout<<"# set with vector data structure" <<endl;
    vector<int> v1 = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    vector<int> v2 = {2, 3, 5, 7, 11, 13, 19, 23, 29};
    vector<int> v3, v4, v5, v6;

    cout<<"# v1:\n"; print(v1);
    cout<<"# v2:\n"; print(v2);
    cout<<endl;
    sort(v1.begin(), v1.end()); // sorting is needed
    sort(v2.begin(), v2.end()); // sorting is needed

    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v4));
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v5));
    set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v6));

    cout<<"# set_union:\n"; print(v3);
    cout<<"# set_intersection:\n"; print(v4);
    cout<<"# set_difference:\n"; print(v5);
    cout<<"# set_symmetric_difference:\n"; print(v6);
    cout<<endl;
    cout<<endl;

    cout<<"# set with set data structure" <<endl;
    set<int> s1 = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    set<int> s2 = {2, 3, 5, 7, 11, 13, 19, 23, 29};
    set<int> s3, s4, s5, s6;

    cout<<"# s1:\n"; print(s1);
    cout<<"# s2:\n"; print(s2);
    cout<<endl;

    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.end()));
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.end()));
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s5, s5.end()));
    set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s6, s6.end()));

    cout<<"# set_union:\n"; print(s3);
    cout<<"# set_intersection:\n"; print(s4);
    cout<<"# set_difference:\n"; print(s5);
    cout<<"# set_symmetric_difference:\n"; print(s6);

    return 0;
}

