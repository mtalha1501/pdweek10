#include<iostream>
using namespace std;
float sum(float arrDiminsions[],int numBox){
    float v=0,sum=0;
    for(int i=0; i<numBox*3; i=i+3){
        v=(arrDiminsions[i]*arrDiminsions[i+1])*arrDiminsions[i+2];
        sum=sum+v;
    }
    
    return sum;
}
main()
{
    int numBox;
    cout<<"Enter the number of boxes: ";
    cin>>numBox;
    float arrDiminsions[numBox*3];
    cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;
    for(int i=0; i<numBox*3;i=i+1){
        cin>>arrDiminsions[i];
    }
    
    cout<<"Total volume of all boxes: "<<sum(arrDiminsions,numBox);
}