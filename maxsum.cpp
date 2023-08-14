#include <iostream>
#include <algorithm>
using namespace std;

int maxsum(int arr[], int size)
{
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < size; i++)
    {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    int arr[] = {5, 2, 8, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxSubarraySum = maxsum(arr, size);

    cout << "Maximum subarray sum: " << maxSubarraySum << endl;

    return 0;
}
