#include<iostream>
using namespace std;
int main(){
    cout<<"Consider a quadratic equation of type (ax^2 + bx +c = 0)\n";
    float a,b,c;
    cout<<"Enter values of a,b and c respectively: ";
    cin>>a>>b>>c;
    float n=(b*b)-(4*a*c);
 
    if(n<0){
        cout<<"Roots are complex\n";
    }
    else if(n==0){
        cout<<"Roots are real and equal\n";
    }
    else{
        cout<<"Roots are real and distinct\n";
    }
    return 0;
}
