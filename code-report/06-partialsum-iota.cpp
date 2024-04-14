#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> //for accumulate operation

using namespace std;

template <typename T>
void print(T list)
{
    int n = 0;
    cout << "[";
    for (const auto &element : list)
    {
        if (n < list.size() - 1)
            cout << element << ", ";
        else
            cout << element;

        n++;
    }
    cout << "]";
    cout << endl;
}

int main()
{
    vector<int> a(5), b(5), c(5);

    iota(a.begin(), a.end(), 1);
    cout << "# partial_sum() function for accumulating" << endl;
    partial_sum(a.begin(), a.end(), b.begin());                 // by default plus<>() predicate
    partial_sum(a.begin(), a.end(), c.begin(), multiplies<>()); // multiplies predicate

    print(a), print(b), print(c);
    cout << endl;

    cout << "# iota function (fills a vector with integers)" << endl;
    vector<int> d(10);
    iota(d.begin(), d.end(), 11);
    print(d);
    cout << endl;

    cout << "# iota function (fills a vector with characters)" << endl;
    vector<char> letters(26);
    iota(letters.begin(), letters.end(), 97);
    print(letters);

    return 0;
}
