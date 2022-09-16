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
    vector<int> v {1, 2, 2, 3, 3, 1, 2, 2};
    print(v);
    cout<<endl;

    cout<< "# unique:\n";
    // v.erase(unique(v.begin(), v.end()), v.end());
    // v.erase(unique(v.begin(), v.end(), equal_to<>()), v.end()); // default, asme as prev one
    // v.erase(unique(v.begin(), v.end(), greater<>()), v.end());
    v.erase(unique(v.begin(), v.end(), less<>()), v.end());
    print(v);
    cout<<endl;

    cout<< "# unique_copy:\n";
    vector<int> u;
    unique_copy(v.begin(), v.end(), back_inserter(u));
    print(u);
    cout<<endl;

    return 0;
}


