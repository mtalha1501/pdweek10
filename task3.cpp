#include<iostream>
using namespace std;

bool RepeatingCycle(int arrL[], int cycle, int length){
    bool result = false;
    for(int i=0; i<length-cycle; i=i+cycle){
        if(arrL[i]==arrL[i+cycle]){
            result = true;
        }
    }
    return result;
}
main()
{
    int length,cycle;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arrL[length];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<length; i++){
        cin>>arrL[i];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>cycle;

    if(cycle>length){
         cout<<"Output: "<<true;
    }
    else{
    cout<<"Output: "<<RepeatingCycle(arrL, cycle, length);
    }
}    