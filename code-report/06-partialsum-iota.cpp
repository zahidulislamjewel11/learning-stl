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
    vector<int> a(5), b(5), c(5);

    iota(a.begin(), a.end(), 1); // fills with sequence 1..5
    partial_sum(a.begin(), a.end(), b.begin()); // by default plus<>() predicate
    partial_sum(a.begin(), a.end(), c.begin(), multiplies<>()); // multiplies predicate

    print(a), print(b), print(c);

    return 0;
}

