/*
D
C D
B C D
A B C D  */

#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}