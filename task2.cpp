#include<iostream>
using namespace std;
int freq_let(string arrWord[] , char let, int num){
    string current;
    int n=0;
    int count=0;
    while(n<num){
        current = arrWord[n];
        for(int j=0; j<current.length(); j++){
            if(current[j] ==let){
                count++;
            }
        }
        n++;
    }
    return count;
}
main()
{
    int num;
    char let;
    cout<<"Enter how many words you want to enter: ";
    cin>>num;
    string arrWords[num];
    for (int i=1; i<=num; i++){
        cout<<"Enter word "<<i<<": ";
        cin>>arrWords[i-1];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>let;
    cout<<let<<" shows up "<<freq_let(arrWords, let,num)<<" times in the data."<<endl;
    return 0;
}
