// A C++ program to demonstrate working of sort(),
// reverse()

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
    int arr[] = {20, 4, 10, 21, 4, 2, 7, 4, 44, 9, 2};
    int m = sizeof(arr) / sizeof(arr[0]);

    cout << "# before sorting: " << endl;
    vector<int> vect(arr, arr + m);
    print(vect);
    cout << endl;

    cout << "# after sorting: " << endl;
    sort(vect.begin(), vect.end());
    print(vect);
    cout << endl;

    cout << "# after reversing: " << endl;
    reverse(vect.begin(), vect.end());
    print(vect);
    cout << endl;

    cout << "# copying to new vector: " << endl;
    vector<int> u(m); // empty vector of size n
    copy(vect.begin(), vect.end(), u.begin());
    print(u);
    cout << endl;

    cout << "# reverse copying to new vector: " << endl;
    reverse_copy(vect.begin(), vect.end(), u.begin());
    print(u);
    cout << endl;

    cout << "# before rotation: " << endl;
    vector<int> v1{1, 2, 3, 4, 5, 6};
    print(v1);
    cout << endl;

    cout << "# rotation of vector (rotate left): " << endl;
    // rotate(v1.begin(), v1.begin() + 1, v1.end());
    rotate(v1.begin(), v1.begin() + 2, v1.end());
    print(v1);
    cout << endl;

    cout << "# rotation of vector (rotate right): " << endl;
    rotate(v1.begin(), v1.begin() + v1.size() - 2, v1.end());
    print(v1);
    cout << endl;

    cout << "# rotate copy of vector: " << endl;
    int n = v1.size();
    vector<int> v2(n);
    rotate_copy(v1.begin(), v1.begin() + 2, v1.end(), v2.begin());
    print(v2);
    cout << endl;

    return 0;
}
