#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Reversed Array: ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " " << "\n";
    }

    return 0;
}