// DAY 14 QUESSTION 1.
#include <iostream>
using namespace std;

int pivotElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[m] > arr[s])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[5]={7,8,9,1,3};
    cout << "Pivot element is at " << pivotElement(arr,5)<< endl;
}