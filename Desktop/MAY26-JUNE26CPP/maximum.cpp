#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 8};
    int n = 5;

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max << "\n";

    return 0;
}