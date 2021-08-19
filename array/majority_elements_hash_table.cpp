#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector<int> v);

int main()
{
    vector<int> v;
    int size{0};
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans{0};
    ans = majority_element(v);
    if (ans == 0)
    {
        cout << "No Majority Element" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}

int majority_element(vector<int> v)
{
    int a[10] = {0};
    for (int i = 0; i < v.size(); i++)
    {
        a[v[i]] += 1;
    }
    int max_ele = 0, index = -1;
    for (int i = 0; i < 10; i++)
    {
        if (max_ele == a[i])
        {
            index = -1;
        }
        if (max_ele < a[i])
        {
            max_ele = a[i];
            index = i;
        }
    }

    if (index == -1)
    {
        return 0;
    }
    else
    {
        return index;
    }
}
