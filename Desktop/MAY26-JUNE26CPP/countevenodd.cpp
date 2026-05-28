#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even Numbers = " << even << endl;
    cout << "Odd Numbers = " << odd << endl;

    return 0;
}