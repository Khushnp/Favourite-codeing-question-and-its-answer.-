// This the code to reverse the array input which is the input without the size of the array
// in this code I have reversed the array even if the size of the array is not given.
// i/p ---> 1 2 33 4 5555 6
// o/p ---> 6 5555 4 33 2 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    cout << "I am on" << endl;
    int n, count;
    string str;
    getline(cin, str);
    int size = str.length();
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            n = 0;
            count = 0;
            for (int m = i; m < size; m++)
            {
                if (str[m] == ' ')
                {
                    break;
                }
                int num = str[m] - '0';
                n = n * 10 + num;
                count++;
            }
            i += count;
            v.push_back(n);
        }
    }
    reverse(v.begin(), v.end());
    for (auto ele : v)
    {
        cout << ele << " ";
    }

    cout << endl;
    return 0;
}