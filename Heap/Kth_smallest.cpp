#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    priority_queue<int> max_h;
    vector<int> a;
    int size{0}, k{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        a.push_back(temp);
    }
    cout << "Enter k" << endl;
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        max_h.push(a[i]);
        if (max_h.size() > k)
        {
            max_h.pop();
        }
    }
    cout << k << "Th smallest element is:" << max_h.top() << endl;
    return 0;
}
