#include <iostream>
#include <array>
#include <vector>
using namespace std;
// template <typename S>
void using_index(vector<int> &vector,
                 string sep = " ")
{
    // Iterating vector by using index
    for (int i = 0; i < vector.size(); i++)
    {
        // Printing the element at
        // index 'i' of vector

        cout << vector[i] << sep;
    }
    cout << endl;
}
int main()
{
    vector<int> int_even;
    vector<int> int_odd;
    int arr[] = {7, 12, 9, 20, 16, 5};

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)

        {
            int_even.push_back(arr[i]);
        }
        else
            int_odd.push_back(arr[i]);
    }
    cout << "even elements are: ";
    using_index(int_even);
    cout << "odd elements are: ";
    using_index(int_odd);

    return 0;
}