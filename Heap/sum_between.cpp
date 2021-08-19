#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int size{0}, k1{0}, k2{0}, min{0}, max{0}, sum{0};
    vector<int> array;
    priority_queue<int> max_h;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    cout << "Enter k1 and k2" << endl;
    cin >> k1 >> k2;
    if (k1 > k2)
    {
        max = k1;
        min = k2;
    }
    else if (k2 > k1)
    {
        max = k2;
        min = k1;
    }
    else
    {
        cout << "No elements in between" << endl;
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        max_h.push(array[i]);
        if (max_h.size() > max)
        {
            max_h.pop();
        }
    }
    max_h.pop();
    while (max_h.size() > min)
    {
        sum += max_h.top();
        max_h.pop();
    }

    cout << "Sum is : " << sum << endl;

    return 0;
}
