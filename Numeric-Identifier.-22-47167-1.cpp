#include<iostream>
using namespace std;

bool constant_check (string Alpha){
    for (int i=0; i< Alpha.size(); i++)
    {
        if(!isdigit(Alpha[i]))
        {
            return false;
        }
    }
    return true;}

int main(){
cout<<"Enter a String: ";
string alpha;
cin>> alpha;

if( constant_check(alpha)){
    cout<<"The string is Numeric\n";
}
else{
    cout<<"This string is not numeric\n";
}
}
