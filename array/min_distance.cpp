#include <iostream>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int size{0}, v1{0}, v2{0}, ans{INT_MAX}, a{-1}, b{-1};
    vector<int> v;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        v.push_back(temp);
    }
    cout << "Enter v1 and v2" << endl;
    cin >> v1 >> v2;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == v1)
            a = i;
        else if (v[i] == v2)
            b = i;
        if (a != -1 && b != -1)
        {
            ans = min(ans, abs(a - b));
        }
    }

    cout << "Minimum distance is : " << ans << endl;
    return 0;
}
