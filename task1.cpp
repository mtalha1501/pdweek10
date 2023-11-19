#include<iostream>
using namespace std;

int totaldays(int arrSat[], int num_Sat){
    int count=0,n=0;
    int day=arrSat[n];

    for(int i=0; i<=num_Sat; i++){
        if (arrSat[i]>day){
            count++;
            n++;
        }
    }
    return count;

}
main()
{
    int num_Sat;
    cout<<"Enter the number of Saturdays: ";
    cin>>num_Sat;
    int arrSat[num_Sat];
    for (int i=1; i<=num_Sat; i++){
        cout<<"Enter miles run for Saturday "<<i<<": ";
        cin>>arrSat[i-1];
    }
    cout<<"Total progress days: "<<totaldays(arrSat,num_Sat);


}