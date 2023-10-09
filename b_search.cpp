#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int l = 1;
    int h = 12;
    int T;
    cin >> T;

    while (l > h)
    {
        int mid = l + h / 2;
        if (mid == T)
        {
            cout << mid << "Data Found!" << endl; 
            break; 
        }
        else if (mid < T)
        {
            h = mid + 1;
        }
        else if (mid > T)
        {
            l = mid - 1;
        }
        cout << mid << endl;
    }
    
}