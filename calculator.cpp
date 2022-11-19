#include<iostream>
#include<cmath>
using namespace std;
long double sintaylor(double num1);
long factorial(double n);
double rad(double num1) {
    double rad;
    rad=(3.142/180)*num1;
    return rad;
}
long double sintaylor(double num1) {
    long double x=0;
    for(int i=1; i<=7; i+=2) {
        if(i==3||i==7) {
            x=x-pow(rad(num1),i)/factorial(i);
        }else{
            x=x+pow(rad(num1),i)/factorial(i);
        }
    }
    return x;
}
long factorial(double n) {
    if(n<=1) {
        return 1;
    }else{
        return (n*factorial(n-1));
    }
}
int main() {
    double num1,num2;
    string op;
    cout<<"enter a number"<<endl;
    cin>>num1;
    cout<<"choose operator"<<endl;
    cin>>op;
    if(op=="sin") {
        double taylor_res=sintaylor(num1);
        cout<<"sin"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="cos") {
        double taylor_res=sintaylor(90-num1);
        cout<<"cos"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="tan") {
        double taylor_res=(sintaylor(num1))/(sintaylor(90-num1));
        cout<<"tan"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="cosec") {
        double taylor_res=1/(sintaylor(num1));
        cout<<"cosec"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="sec") {
        double taylor_res=1/(sintaylor(90-num1));
        cout<<"sec"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="cot") {
        double taylor_res=(sintaylor(90-num1))/(sintaylor(num1));
        cout<<"cot"<<num1<<" is "<<taylor_res<<endl;
        return 0;
    }
    else if(op=="+"){ 
        cout<<"enter another number"<<endl;
        cin>>num2;
        cout<<"sum is "<<num1+num2;}
    else if(op=="-"){
        cout<<"enter another number"<<endl;
        cin>>num2;
        cout<<"difference is "<<num1-num2;}
    else if(op=="*"){
        cout<<"enter another number"<<endl;
        cin>>num2;
        cout<<"product is "<<num1*num2;}
    else if(op=="/"){
        cout<<"enter another number"<<endl;
        cin>>num2;
        cout<<"quotient is "<<num1/num2;}
    else if(op=="^"){
        cout<<"enter another number"<<endl;
        cin>>num2;
        cout<<num1<<" to the power "<<num2<<" is "<<pow(num1,num2);}    
    else {cout<<"invalid operator";}
}
   