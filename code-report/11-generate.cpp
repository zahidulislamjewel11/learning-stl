#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>//for accumulate operation

using namespace std;

const int N=10;
const int M=5;

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

void use_generate()
{
    vector<int> v(N);
    generate(v.begin(), v.end(), [i=0]() mutable { ++i; return i;});
    print(v);
}

void use_generate_n()
{
    vector<int> v;
    generate_n(back_inserter(v), N, [i=0]() mutable { ++i; return i;});
    print(v);
}


void use_generate_abc()
{
    vector<string> v(M);
    generate(v.begin(), v.end(), [s=""s, c='`']() mutable { ++c; s+=c; return s;});
    print(v);
}

void use_generate_n_abc()
{
    vector<string> v;
    generate_n(back_inserter(v), M, [s=""s, c='`']() mutable { ++c; s+=c; return s;});
    print(v);
}

int main()
{
    vector<int> v = {4, 9, 2, 3, 5, 7, 8, 1, 6};
    print(v);
    cout<<endl;

    use_generate();
    use_generate_n();
    use_generate_abc();
    use_generate_n_abc();

    return 0;
}


