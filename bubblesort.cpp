#include <iostream>
using namespace std;

void print(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {7, 3, 9, 1, 5};
    int temp = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                print(arr);
            }
        }
    }

    print(arr);
    cout << endl;
    return 0;
}
