#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size{0};
    vector<int> v;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] == 0)
        {
            int temp{0};
            temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
