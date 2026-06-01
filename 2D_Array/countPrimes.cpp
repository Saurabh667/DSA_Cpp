#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
    vector<int> arr;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        arr.push_back(i);
        cout << arr[i];
    }
    for (int j = 2; j <= n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == j)
            {
                count++;
            }
        }
        // for (int k = k * 2; k < n; k = k + 1)
        // {
        //     auto it = find(arr.begin(), arr.end(), k);

        //     if (it != arr.end())
        //     {
        //         arr.erase(it);
        //     }
        // }
    }
    return count;
};

int main()
{
    int n;

    cout << "enter the number";
    cin >> n;
    cout << isPrime(n);
    cout << "output is";
}


// unable to  do it do i later
