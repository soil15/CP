#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int size{0};
    vector<string> v;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string temp{0};
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (stoi(v[i] + v[i + 1]) > stoi(v[i + 1] + v[i]))
        {
            v[i + 1] = v[i] + v[i + 1];
        }
        else if (stoi(v[i] + v[i + 1]) <= stoi(v[i + 1] + v[i]))
        {
            v[i + 1] = v[i + 1] + v[i];
        }
    }

    cout << "Biggest number is : " << v[size - 1] << endl;
    return 0;
}
