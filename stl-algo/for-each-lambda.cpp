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

void func(int &n)
{
    ++n;
}

void square(int &x)
{

    x *= x;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    // find()
    vector<int> u {4,9,2,3,2,3,5,7,8,1,0,1,2};
    printList(u);

    for_each(u.begin(), u.end(), func);
    printList(u);

    for_each(u.begin(), u.end(), square);
    printList(u);

    for_each(u.begin(), u.end(), [&](int &x) {++x;});
    printList(u);

    return 0;
}
