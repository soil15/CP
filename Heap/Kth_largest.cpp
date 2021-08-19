#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> min_h;
    vector<int> arr;
    int size{0}, k{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Enter k" << endl;
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        min_h.push(arr[i]);
        if (min_h.size() > k)
        {
            min_h.pop();
        }
    }
    cout << k << "Th largest element is : " << min_h.top() << endl;
    return 0;
}
