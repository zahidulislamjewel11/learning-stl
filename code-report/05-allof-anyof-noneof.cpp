#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric> //for accumulate operation
#include <cctype>

using namespace std;

template <typename T>
void print(T t)
{
    for (const auto &e : t)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> words = {"cat", "dog", "123"};

    string word = "123";
    for (auto &word : words)
    {
        if (all_of(word.begin(), word.end(), [](char c)
                   { return isdigit(c); }))
            cout << word << " is a number.\n";
        else
            cout << word << " is not a number.\n";
    }

    return 0;
}
