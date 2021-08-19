#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int max_index(int i, int j, vector<int> v);

int main()
{
    int size{11};
    vector<int> v;
    cout << "Enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        v.push_back(temp);
    }
    int i = 0, index = 0, jumps = 0;

    while (i < 11)
    {
        index = max_index(i, i + v[i], v);
        i = index;
        jumps += 1;
    }

    cout << "Min jumps : " << jumps << endl;
    return 0;
}

int max_index(int i, int j, vector<int> v)
{
    int max{INT_MIN}, index{0};
    for (int a = i; a <= j; a++)
    {
        if (max < v[a])
        {
            max = v[a];
            index = a;
        }
    }
    return index;
}
