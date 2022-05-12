#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        rem=n%10;
        if(rem>=8){
            cout<<"Not an octal number\n";
            return 0;
        }
        n=n/10;
    }
    cout<<"It is an octal number\n";
    return 0;
}