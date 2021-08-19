#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size{0}, count{1};
    stack<int> s;
    vector<int> array, answer;
    cout << "Enter size" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int temp{0};
        cin >> temp;
        array.push_back(temp);
    }
    for (int i = 0; i < array.size(); i++)
    {
        count = 1;
        if (s.size() == 0)
        {
            answer.push_back(count);
        }
        else if (s.size() > 0)
        {
            if (s.top() > array[i])
            {
                answer.push_back(count);
            }
            else
            {
                while (s.size() != 0 && s.top() <= array[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    answer.push_back(array.size());
                }
                else if (s.top() > array[i])
                {

                    answer.push_back(find(array.begin(), array.end(), array[i]) - find(array.begin(), array.end(), s.top()));
                }
            }
        }
        s.push(array[i]);
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}
