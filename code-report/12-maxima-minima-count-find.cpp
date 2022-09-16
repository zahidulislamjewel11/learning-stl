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
    cout<<"# min, max:"<<endl;
    cout<<"# min(1, 2) = "<< min(1, 2) <<endl;
    cout<<"# min(4, 9) = "<< min(4, 9) <<endl;
    cout<<"# max(1, 2) = "<< max(1, 2) <<endl;
    cout<<"# max(4, 9) = "<< max(4, 9) <<endl;

    auto i = {4, 9, 2};
    cout<<"# min({4, 9, 2}) = "<< min(i)<<endl;
    cout<<"# max({4, 9, 2}) = "<< max(i)<<endl;
    cout<<endl;

    int a=4;
    int b=9;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<endl;

    cout<<"# minmax using pair, before c++11"<<endl;
    pair<int, int> p1 = minmax(a, b);
    cout<<"# min(a,b) = "<< p1.first<<endl;
    cout<<"# max(a,b) = "<< p1.second<<endl;
    cout<<endl;

    // C++11
    cout<<"# minmax using auto, after c++11"<<endl;
    auto p2 = minmax(a, b);
    cout<<"# min(a,b) = "<< p2.first<<endl;
    cout<<"# max(a,b) = "<< p2.second<<endl;
    cout<<endl;

    vector<int> v {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    print(v);
    cout<<endl;

    cout<<"# min_element, max_element using iterator, c++11"<<endl;
    auto min_ = *min_element(v.begin(), v.end()); // returns iterator, do dereferencing it
    auto max_ = *max_element(v.begin(), v.end());
    cout<<"# min = "<< min_ <<endl;
    cout<<"# max = "<< max_ <<endl;
    cout<<endl;

    cout<<"# minmax_element using iterator, c++11"<<endl;
    auto [minima_, maxima_] = minmax_element(v.begin(), v.end());
    cout<<"# minima = "<< *minima_ <<endl;
    cout<<"# maxima = "<< *maxima_ <<endl;
    cout<<endl;

    cout<<"# array to vector conversion: " <<endl;
    int arr[] = {20,4,10,21,4,2,7,4,44,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vect(arr,arr+n);
    print(vect);
    cout<<endl;

    cout<<"# maxima: ";
    cout<< *max_element(vect.begin(),vect.end()) << endl;
    cout<<"# minima: ";
    cout<< *min_element(vect.begin(),vect.end()) << endl;

    cout<<"# summation: ";
    cout<< accumulate(vect.begin(),vect.end(), 0) <<endl; // 0 is alike sum = 0, initial sum

    cout<<"# count: "; //number of occurrence of any element
    cout<<count(vect.begin(),vect.end(),4);
    cout<<endl;

    cout<<"# find: "; 
    
    // auto it = find(vect.begin(),vect.end(),4);
    auto it = find(vect.begin(),vect.end(),9);
    if(it != vect.end())
    {
        int position = it - vect.begin();
        cout<< *it <<" fount at position "<< position <<endl;
    }
    else 
    {
        cout<< *it <<" not fount at position " <<endl;
    }

    return 0;
}

