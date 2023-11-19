#include<iostream>
using namespace std;
void reverseString(string inputstring);
main()
{
    string inputstring;
    cout<<"Enter a string: ";
    getline(cin, inputstring);
    cout<<"Reversed string: ";
    reverseString(inputstring);

}
void reverseString(string inputstring)
{
    string arr[20];
    int arr_idx=0;
    string current="";
    for(int i=0; i<inputstring.length();i++){
        if(inputstring[i]!=' '){
            current+=inputstring[i];
        }    
        else{
            arr[arr_idx]=current;
            arr_idx++;
            current="";
        }    
        
        arr[arr_idx]=current;
    }
    for(int i=arr_idx; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}