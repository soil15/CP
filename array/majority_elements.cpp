#include <iostream>
#include <vector>
using namespace std;

void majority_one(vector<int> z)
{
    int element = 0, count = 0;
    for (int i = 0; i < z.size(); i++)
    {
        if (element == z[i])
        {
            count += 1;
        }
        else if (count == 0)
        {
            element = z[i];
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }
    count = 0;
    for (int i = 0; i < z.size(); i++)
    {
        if (z[i] == element)
        {
            count += 1;
        }
    }
    if (count > z.size() / 2)
    {
        cout << "majority element: " << element << endl;
    }
    else
    {
        cout << "No majority element" << endl;
    }
}

void majority_two(vector<int> z)
{
    int element_1 = 0, element_2 = 0, count_1 = 0, count_2 = 0;
    element_1 = z[0];
    count_1 += 1;
    for (int i = 1; i < z.size(); i++)
    {
        if (element_1 == z[i])
        {
            count_1 += 1;
        }
        else if (element_2 == z[i])
        {
            count_2 += 1;
        }
        else if (count_1 == 0)
        {
            element_1 = z[i];
            count_1 += 1;
        }
        else if (count_2 == 0)
        {
            element_2 = z[i];
            count_2 += 1;
        }
        else
        {
            count_1 -= 1;
            count_2 -= 1;
        }
    }

    count_1, count_2 = 0, 0;
    for (int i = 0; i < z.size(); i++)
    {
        if (element_1 == z[i])
        {
            count_1 += 1;
        }
        else if (element_2 == z[i])
        {
            count_2 += 1;
        }
    }

    if (count_1 > z.size() / 3)
    {
        cout << element_1 << " ";
    }
    if (count_2 > z.size() / 3)
    {
        cout << element_2 << endl;
    }
}

int main()
{
    int x, n;
    vector<int> z;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        z.push_back(n);
    }

    vector<int> ans_one, ans_two;
    majority_one(z);
    majority_two(z);
    return 0;
}
