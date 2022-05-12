#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowecase alphabet\n";
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"Uppercase alphabet\n";
    }
    else if(ch>=0 && ch<=9){
        cout<<"Digit\n";
    }
    else{
        cout<<"Special character\n";
    }
    
    return 0;
}
