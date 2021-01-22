#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int temp_arr[], int low, int high)
{
    int pivot = temp_arr[high];
    int i = (low - 1);
    for (int j = low ; j <= high - 1 ; j++)
    {
        if (temp_arr[j] <= pivot)
        {
            i++;
            swap(&temp_arr[i],&temp_arr[j]);
        }
    }
    swap(&temp_arr[i+1],&temp_arr[high]);
    return(i+1);
}
void quickSort(int temp_arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(temp_arr,low,high);
        quickSort(temp_arr,low,pi -1);
        quickSort(temp_arr,pi+1,high);
    }
}

void printArray(int temp_arr[],int size)
{
    int i;
    for (i =0 ; i < size ; i++)
    {
        cout << temp_arr[i] << "\n";
    }
}

int main()
{
    int number_of_elements,number,i = 0,n;
    cin >> number_of_elements;
    int arr[number_of_elements];
    while (i < number_of_elements)
    {
        cin >> number;
        arr[i] = number;
        i++;
    }
    n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
