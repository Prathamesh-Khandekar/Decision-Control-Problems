#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)){
        cout<<"It is a leap year\n";
    }
    else{
        cout<<"Not a leap year\n";
    }
    return 0;
}
