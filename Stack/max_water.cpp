#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int size{0}, max{INT_MIN};
    vector<int> cont, ans;
    vector<pair<int, int>> width_ht, max_l, max_r;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        cont.push_back(temp);
    }

    for (int i = 0; i < size; i++)
    {
        if (cont[i] > max)
        {
            max = cont[i];
            max_l.push_back({max, i});
        }
    }
    max = INT_MIN;
    for (int i = (cont.size() - 1); i >= 0; i--)
    {
        if (cont[i] > max)
        {
            max = cont[i];
            max_r.push_back({max, i});
        }
    }

    for (int i = 0; i < size; i++)
    {
        width_ht.push_back({min(max_l[i].first, max_r[i].first), abs(max_l[i].second - max_r[i].second)});
    }

    for (int i = 0; i < size; i++)
    {
        ans.push_back(width_ht[i].first * width_ht[i].second);
    }

    auto m = max_element(ans.begin(), ans.begin());

    cout << *m << endl;

    return 0;
}
