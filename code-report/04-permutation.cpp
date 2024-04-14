#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>
using namespace std;

template <typename T>
void print(T list)
{
    int n = 0;
    cout << "[";
    for (const auto &element : list)
    {
        if (n < list.size() - 1)
        {
            cout << element << ", ";
        }
        else
        {
            cout << element;
        }
        n++;
    }
    cout << "]";
    cout << endl;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 2};
    print(v);
    cout << endl;

    sort(v.begin(), v.end()); // sorting is a must
    cout << "# next_permutation, permutations of digits " << endl;
    int count = 0;
    do
    {
        print(v);
        count++;

    } while (next_permutation(v.begin(), v.end()));
    cout << count << endl;
    cout << endl;

    cout << "# next_permutation, all possible permutations " << endl;
    string text;
    text = "cab";
    text = "abba";
    text = "equation";
    text = "education";
    count = 0;
    sort(text.begin(), text.end());
    do
    {
        cout << text << endl;
        count++;

    } while (next_permutation(text.begin(), text.end()));
    cout << count << endl;
    cout << endl;

    return 0;
}
