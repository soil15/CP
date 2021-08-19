#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
pair<int, int> two(vector<int> v, int i, int n);

int main()
{
    pair<int, int> p;
    int size{0}, sum{0}, flag{0};
    vector<int> v;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Enter a sum" << endl;
    cin >> sum;
    for (int i = 0; i < (size - 2); i++)
    {
        p = two(v, (i + 1), (sum - v[i]));
        if (p.first == -1 && p.second == -1)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
            cout << "Triplet is:" << v[i] << " " << p.first << " " << p.second << " " << endl;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "No triplet has sum " << sum << endl;
    }
    return 0;
}

pair<int, int> two(vector<int> v, int i, int n)
{
    int j{0};
    j = v.size() - 1;
    sort(v.begin(), v.end());
    while (i < j)
    {
        if (v[i] + v[j] > n)
        {
            j--;
        }
        else if (v[i] + v[j] < n)
        {
            i++;
        }
        else if (v[i] + v[j] == n)
        {
            return {v[i], v[j]};
        }
    }
    return {-1, -1};
}
