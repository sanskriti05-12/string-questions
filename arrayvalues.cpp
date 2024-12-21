#include<iostream>
using namespace std;
int main(){
    
// int marks[]={1,2,3,4,5};
    int size=5;
    int marks[size];
    
    // cout<<marks[0]<<endl;
    // cout<<marks[1];
    // cout<<marks[2];
    // cout<<marks[3];
    for(int i=0;i<size;i++){
    cin>>marks[i];
    }
    for(int i=0;i<size;i++){
    cout<<marks[i];
    }
}