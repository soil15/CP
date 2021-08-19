#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a{10, 20, 30, -1, 25};
    sort(a.begin(), a.end());
    for (int val : a)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Enter a number to search" << endl;
    int num{0};
    cin >> num;
    bool x = binary_search(a.begin(), a.end(), num);
    if (x == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    auto b = upper_bound(a.begin(), a.end(), num);
    cout << "upper_bound : " << *b << endl;
    b = lower_bound(a.begin(), a.end(), num);
    cout << "lower_bound : " << *b << endl;
    return 0;
}
