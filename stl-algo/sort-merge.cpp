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
    vector<int> v{4,9,2,3,5,7,8,1,6,0,1};
    cout<<"# vector" << endl;
    printList(v);
    cout<<endl;

    // sort(), sort_heap(), merge()
    sort(v.begin(), v.end(), comp);
    cout<<"# sort desc" << endl;
    printList(v);
    cout<< "max = " << v.front() <<endl;
    cout<< "min = " << v.back() <<endl;
    cout<<endl;

    sort(v.begin(), v.end(), less<>{});
    cout<<"# sort asc" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<< "max = " << v.back() <<endl;
    cout<<endl;

    sort(v.begin(), v.end(), greater<>{});
    cout<<"# sort desc" << endl;
    printList(v);
    cout<< "max = " << v.front() <<endl;
    cout<< "min = " << v.back() <<endl;
    cout<<endl;

    
    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    cout<<"# sort_heap asc" << endl;
    printList(v);
    cout<< "max = " << v.front() <<endl;
    cout<< "min = " << v.back() <<endl;
    cout<<endl;

    make_heap(v.begin(), v.end(), comp);
    sort_heap(v.begin(), v.end(), comp);
    cout<<"# sort_heap desc" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<< "max = " << v.back() <<endl;
    cout<<endl;

    vector<int> v1 {1,4,7,11};
    vector<int> v2 {2,3,5,6,9};
    vector<int> v3(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout<<"# merge" << endl;
    printList(v3);
    cout<< "max = " << v.front() <<endl;
    cout<< "min = " << v.back() <<endl;
    cout<<endl;

    return 0;
}
