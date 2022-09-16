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

    // remove(u.begin(), u.end(), 4); // removes but.. so better
    u.erase(remove(u.begin(), u.end(), 4), u.end()); // now resized
    printList(u);

    u.erase(remove(u.begin(), u.end(), 2), u.end());
    printList(u);

    // unique(u.begin(), u.end()); // removes duplicates but.. so better
    u.erase(unique(u.begin(), u.end()), u.end()); // now okay, resized
    printList(u);


    return 0;
}
