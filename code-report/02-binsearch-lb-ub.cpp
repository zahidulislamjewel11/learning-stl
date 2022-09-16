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
    vector<int> v {1, 2, 4, 7, 11, 16, 22, 29};
    print(v);
    cout<<endl;

    cout<<"# binary search, returns bool"<<endl;
    cout<< (binary_search(v.begin(), v.end(), 4) ? "Found": "Not Found") <<endl;
    cout<< (binary_search(v.begin(), v.end(), 5) ? "Found": "Not Found") <<endl;
    cout<<endl;

    cout<<"# lower bound (first equal to or greater than)"<<endl;
    auto it1 = lower_bound(v.begin(), v.end(), 3);
    auto it2 = lower_bound(v.begin(), v.end(), 5);
    auto it3 = lower_bound(v.begin(), v.end(), 31);

    cout<< (it1 != v.end() ? to_string(*it1): "Not Found") <<endl;
    cout<< (it2 != v.end() ? to_string(*it2): "Not Found") <<endl;
    cout<< (it3 != v.end() ? to_string(*it3): "Not Found") <<endl;

    cout<<distance(v.begin(), it1)<<endl;
    cout<<distance(v.begin(), it2)<<endl;
    cout<<distance(v.begin(), it3)<<endl;
    cout<<endl;

    cout<<"# upper bound (first greater than)"<<endl;
    /// 
    it1 = upper_bound(v.begin(), v.end(), 3);
    it2 = upper_bound(v.begin(), v.end(), 5);
    it3 = upper_bound(v.begin(), v.end(), 31);

    cout<< (it1 != v.end() ? to_string(*it1): "Not Found") <<endl;
    cout<< (it2 != v.end() ? to_string(*it2): "Not Found") <<endl;
    cout<< (it3 != v.end() ? to_string(*it3): "Not Found") <<endl;

    cout<< distance(v.begin(), it1) <<endl;
    cout<< distance(v.begin(), it2) <<endl;
    cout<< distance(v.begin(), it3) <<endl;
    cout<<endl;

    cout<<"# array to vector conversion (upper bound+lower bound)"<<endl;
    int arr[] = {20,4,10,21,4,2,7,4,44,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr,arr+n);
    print(vect);
    cout<<endl;

   auto p = upper_bound(vect.begin(),vect.end(),4);
   cout<<"upper Bound is at position: "<< p - vect.begin() <<endl;

   auto q=lower_bound(vect.begin(),vect.end(),4);
   cout<<"lower Bound is at position: "<< q - vect.begin() <<endl;

    return 0;
}

