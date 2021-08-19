#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int size{0}, cost{0};
    vector<int> ropes;
    priority_queue<int, vector<int>, greater<int>> min_h;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        ropes.push_back(temp);
    }

    for (int i = 0; i < size; i++)
    {
        min_h.push(ropes[i]);
    }

    while (min_h.size() > 1)
    {
        int r1{0}, r2{0}, r3{0};
        r1 = min_h.top();
        min_h.pop();
        r2 = min_h.top();
        min_h.pop();
        r3 = r1 + r2;
        cost += r3;
        min_h.push(r3);
    }

    cout << "Min cost after connecting all ropes : " << cost << endl;
    return 0;
}
