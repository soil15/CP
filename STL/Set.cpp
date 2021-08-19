#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> a;
    cout << "Enter size" << endl;
    int size{0};
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        a.insert(temp);
    }
    for (int val : a)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}