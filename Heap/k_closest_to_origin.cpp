#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int size{0}, k{0};
    vector<pair<int, int>> points;
    priority_queue<pair<float, pair<int, int>>> max_h;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp1{0}, temp2{0};
        cin >> temp1 >> temp2;
        points.push_back({temp1, temp2});
    }

    cout << "Enter k" << endl;
    cin >> k;

    for (int i = 0; i < size; i++)
    {
        float srt{0};
        srt = points[i].first * points[i].first + points[i].second + points[i].second;
        max_h.push({srt, {points[i].first, points[i].second}});
        if (max_h.size() > k)
        {
            max_h.pop();
        }
    }

    cout << k << " nearest points to origin are : " << endl;

    while (max_h.size() != 0)
    {
        cout << "(" << max_h.top().second.first << ", " << max_h.top().second.second << ")" << endl;
        max_h.pop();
    }

    return 0;
}
