#include <iostream>
using namespace std;

void sort(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void objectcolored(int arr[], int n)
{
    int red = 0;
    int white = 0;
    int blue = n - 1;

    while (white <= blue)
    {
        if (arr[white] == 0)
        {
            swap(arr, red, white);
            red++;
            white++;
        }
        else if (arr[white == 1])
        {
            white++;
        }
        else
        {
            swap(arr, white, blue);
            blue--;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    objectcolored(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}