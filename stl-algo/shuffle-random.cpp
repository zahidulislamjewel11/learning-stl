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
    // shuffle
    // random_shuffle()
    srand(time(NULL));
    vector<int> u1 {1,4,7,11};
    printList(u1);
    cout<<"# random shuffle" << endl;
    random_shuffle(u1.begin(), u1.end());
    printList(u1);
    cout<<endl;

    // shuffle()
    random_device rd;
    seed_seq seed{rd()};
    mt19937 eng(seed);

    vector<int> u2 {1,4,7,11};
    printList(u2);
    cout<<"# shuffle" << endl;
    shuffle(u2.begin(), u2.end(), eng);
    printList(u2);
    cout<<endl;

    return 0;
}
