#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int size{0}, max{INT_MIN}, i{0}, j{0};
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
    i = 0;
    j = cont.size() - 1;
    while(i < j)
    {
        int cal{0};
        cal = min(cont[i], cont[j]) * (j - i);
        if(cal > max)
        {
            max = cal;
        }
        if(cont[i] > cont[j])
        {
            j--;
        }
        else if(cont[i] <= cont[j])
        {
            i++;
        }
    }
    cout<<"answer : "<<max<<endl;
}
