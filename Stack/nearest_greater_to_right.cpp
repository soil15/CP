#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> array, answer;
    stack<int> s;
    int size{0};
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        array.push_back(temp);
    }
    for (int i = (array.size() - 1); i >= 0; i--)
    {
        if (s.size() == 0)
        {
            answer.push_back(-1);
        }
        else
        {
            if (s.top() > array[i])
            {
                answer.push_back(s.top());
            }
            else if (s.top() <= array[i])
            {
                while (s.size() != 0 && s.top() <= array[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    answer.push_back(-1);
                }
                else
                {
                    answer.push_back(s.top());
                }
            }
        }
        s.push(array[i]);
    }

    reverse(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}
