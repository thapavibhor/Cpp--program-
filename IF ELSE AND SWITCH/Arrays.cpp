#include <iostream>
using namespace std;
void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() {
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }
    int size = sizeof(nums)/sizeof(nums[0]);
    printarray(nums,size);
return 0;
}