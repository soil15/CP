#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool is_sorted(vector<int> &v);
int max_index(int j, vector<int> &v);
void flip(int n, vector<int> &v);

void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size{0}, max{0};
    vector<int> v;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        v.push_back(temp);
    }
    int j = v.size() - 1;
    while (j > 0)
    {
        if (is_sorted(v))
        {
            break;
        }
        else
        {
            max = max_index(j, v);
            cout << "max" << max << endl;
            flip(max, v);
            flip(j, v);
            cout << "after flip" << endl;
            print_vector(v);
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

bool is_sorted(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}

void flip(int n, vector<int> &v)
{
    for (int i = 0; i <= (n + 1) / 2; i++)
    {
        int temp{0};
        temp = v[i];
        v[i] = v[n - i];
        v[n - i] = temp;
    }
}

int max_index(int j, vector<int> &v)
{
    int index{0}, val{INT_MIN};
    for (int i = 0; i < j; i++)
    {
        if (val < v[i])
        {
            val = v[i];
            index = i;
        }
    }
    return index;
}
