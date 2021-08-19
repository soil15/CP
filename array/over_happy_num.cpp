#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int square_digit(int num);
bool check_one(int num);
bool over_happy(int num);
map<int, bool> m;

int main()
{
    int num{0};
    cout << "Enter a number" << endl;
    cin >> num;
    bool ans = over_happy(num);
    if (ans == true)
    {
        cout << num << " IS over happy number" << endl;
    }
    else
    {
        cout << num << " Is not a over happy number" << endl;
    }
    return 0;
}

int square_digit(int num)
{
    int last{0}, sum{0};
    while (num != 0)
    {
        last = num % 10;
        sum += last * last;
        num = num / 10;
    }
    return sum;
}

bool check_one(int num)
{
    int last{0};
    while (num != 0)
    {
        last = num % 10;
        if (last != 0 && last != 1)
        {
            return false;
        }
        num = num / 10;
    }
    return true;
}

bool over_happy(int num)
{
    auto it = m.find(num);
    if (check_one(num))
    {
        return true;
    }
    else if (it->second == true)
    {
        return false;
    }
    else
    {
        m.insert(make_pair(num, true));
        over_happy(square_digit(num));
    }
}
