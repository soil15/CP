#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> array, nsl, nsr, width, area;
    stack<pair<int, int>> s, s1;
    int size{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        array.push_back(temp);
    }
    // nearest smallest index to right

    for (int i = (array.size() - 1); i >= 0; i--)
    {
        if (s.size() == 0)
        {
            nsr.push_back(array.size());
        }
        else if (s.size() > 0)
        {
            if (s.top().first < array[i])
            {
                nsr.push_back(s.top().second);
            }
            else
            {
                while (s.size() != 0 && s.top().first >= array[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    nsr.push_back(array.size());
                }
                else
                {
                    nsr.push_back(s.top().second);
                }
            }
        }
        s.push({array[i], i});
    }

    reverse(nsr.begin(), nsr.end());

    // nearest smaller in left

    for (int i = 0; i < array.size(); i++)
    {
        if (s1.size() == 0)
        {
            nsl.push_back(-1);
        }
        else if (s1.size() > 0)
        {
            if (s1.top().first < array[i])
            {
                nsl.push_back(s1.top().second);
            }
            else
            {
                while (s1.size() != 0 && s1.top().first >= array[i])
                {
                    s1.pop();
                }
                if (s1.size() == 0)
                {
                    nsl.push_back(-1);
                }
                else
                {
                    nsl.push_back(s1.top().second);
                }
            }
        }
        s1.push({array[i], i});
    }

    // width vector

    for (int i = 0; i < nsr.size(); i++)
    {
        width.push_back(nsr[i] - nsl[i] - 1);
    }

    //  area

    for (int i = 0; i < array.size(); i++)
    {
        area.push_back(width[i] * array[i]);
    }

    cout << *max_element(area.begin(), area.end());

    return 0;
}
