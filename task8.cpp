#include<iostream>
using namespace std;
int rotation(string arr[], int length);
main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    string arr[length];
    cout<<"Enter the elements of the array (\"left\" or \"right\"): "<<endl;
    for(int i=0; i<length; i++){
        cin>>arr[i];
    }
    cout<<"Number of full rotations: "<<rotation(arr, length);
    return 0;
}
int rotation(string arr[], int length)
{
    int cLeft=0, cright=0;
    for(int i=0; i<length; i++)
    {
        if (arr[i]=="right"){
            cright++;
        }
        else if(arr[i]=="left"){
            cLeft++;
        }
    }
    int count = (cLeft/4) + (cright/4);
    return count; 
}