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

int func()
{
    static int i = 4;
    return ++i;
}

int rgen()
{

    return rand() % 19;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    // find()
    vector<int> u {4,9,2,3,2,3,5,7,8,1,0,1,2};
    printList(u);

    vector<int> v(10);
    fill(v.begin(), v.end(), 42);
    printList(v);

    vector<int> w(10, 4);
    printList(w);

    vector<int> p(10);
    // generate(p.begin(), p.end(), func); // sequence of values
    generate(p.begin(), p.end(), rgen); // sequence of values
    printList(p);

    vector<int> q(10);
    iota(q.begin(), q.end(), 1); // sequence of values
    printList(q);

    replace(u.begin(), u.end(), 4, 24);
    printList(u);

    return 0;
}
