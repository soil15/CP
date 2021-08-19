#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int, int> p;

int main()
{
    vector<int> arr;
    priority_queue<p> max_h;
    int size{0}, num{0}, k{0}, index{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Enter number" << endl;
    cin >> num;
    cout << "Enter k" << endl;
    cin >> k;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (index != i)
        {
            max_h.push({abs(index - i), arr[i]});
        }
        if (max_h.size() > k)
        {
            max_h.pop();
        }
    }

    cout << "Closest_elements : ";
    while (max_h.size() != 0)
    {
        int temp{0};
        cout << max_h.top().second << " ";
        max_h.pop();
    }
    cout << endl;
    return 0;
}
