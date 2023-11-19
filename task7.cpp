#include<iostream>
using namespace std;

int smallest(int arr[], int length){
    int min=arr[0];
    for(int i=1;i<length; i++){
        if(arr[i]<min){
            min=arr[i];
        }
        }
        return min;
    }

bool isPresent(int arr[], int length, int num){
    bool result=false;
    for(int i=0; i<length; i++){
        if(num==arr[i]){
            result=true;
        }
    }
    return result;
}    

bool areConsecutive(int arr[], int length){
    int small = smallest(arr, length);
    for(int i = small; i<small+length; i++){
        if(!isPresent(arr, length, i)){
            return false;
        }
    }
    return true;
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
    cout<<"Can be arranged: "<<areConsecutive(arr, length);
}