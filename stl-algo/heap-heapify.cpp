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

    // make_heap(), push_heap(), pop_heap()
    make_heap(v.begin(), v.end());
    cout<<"# max_heap" << endl;
    printList(v);
    cout<< "max = " << v.front() <<endl;
    cout<<endl;
    
    make_heap(v.begin(), v.end(), comp);
    cout<<"# min_heap" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<<endl;

    v.push_back(13);
    push_heap(v.begin(), v.end(), comp);
    cout<<"# push_heap" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<<endl;

    v.push_back(19);
    push_heap(v.begin(), v.end(), comp);
    cout<<"# push_heap" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<<endl;

    pop_heap(v.begin(), v.end(), comp);
    cout<<"# pop_heap" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<<endl;

    pop_heap(v.begin(), v.end(), comp);
    cout<<"# pop_heap" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<<endl;

    make_heap(v.begin(), v.end(), comp);
    sort_heap(v.begin(), v.end(), comp);
    cout<<"# sort_heap desc" << endl;
    printList(v);
    cout<< "max = " << v.front() <<endl;
    cout<< "min = " << v.back() <<endl;
    cout<<endl;

    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
    cout<<"# sort_heap asc" << endl;
    printList(v);
    cout<< "min = " << v.front() <<endl;
    cout<< "max = " << v.back() <<endl;
    cout<<endl;

    return 0;
}
