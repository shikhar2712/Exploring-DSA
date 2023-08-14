#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> SortedList = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int targetTreasure; // The hidden number we're trying to find

    cout << "Enter the hidden treasure (a number) you want to find: ";
    cin >> targetTreasure;

    int left = 0;
    int right = SortedList.size() - 1; // Corrected 's' to 'SortedList.size()'
    int steps = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        steps++;

        if (SortedList[mid] == targetTreasure)
        {
            cout << "Treasure found at index " << mid << " after " << steps << " steps." << endl;
            break;
        }
        else if (SortedList[mid] < targetTreasure)
        {
            cout << "Guess #" << steps << ": " << SortedList[mid] << " (Too low)" << endl;
            left = mid + 1;
        }
        else
        {
            cout << "Guess #" << steps << ": " << SortedList[mid] << " (Too high)" << endl;
            right = mid - 1;
        }
    }

    if (left > right)
    {
        cout << "Treasure not found in the list." << endl;
    }

    return 0;
}
