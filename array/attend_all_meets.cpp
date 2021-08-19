#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    set<pair<int, int>> s;
    int size{0}, count{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0}, temp1{0};
        cin >> temp >> temp1;
        s.insert({temp, temp1});
    }

    auto i = s.begin();
    auto j = i++;
    while (j != s.end())
    {
        if (i->second <= j->first)
        {
            count += 1;
            i = j;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << "max meets : " << count << endl;

    return 0;
}
