#include<iostream>
using namespace std;
void sort(int arr[]){
    cout<<"[";
    int mini;
    int swapper, minIndex;
    for(int i=0; i<10; i++){
        mini = arr[i];
          for(int j=i; j<10; j++){
                if(arr[j]<mini){
                    mini=arr[j];
                    minIndex=j;
                }
          }
    swapper=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=swapper;
    if(i==9){
    cout<<mini;
    }
    else {
    cout<<mini<<", ";
    }
}
    cout<<"]";
}
main()
{
    int arr[10];
    cout<<"Enter the weights of the 10 packages: "<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Sorted array in ascending order: ";
    sort(arr);
    
}