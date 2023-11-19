#include<iostream>
using namespace std;

int specialValue(int arr[], int length)
{
    int count = 0;
    for (int x = length; x >= 0; x--)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] >= x)
            {
                count++;
            }
            if (count == x)
                return x;
        }
    }
    return -1;
}

main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<length; i++){
        cin>>arr[i];
    }
    cout<<"Special value: "<<specialValue(arr,length);

    return 0;
}