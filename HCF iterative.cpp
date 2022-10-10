#include <iostream>

using namespace std;

int euclid (int, int);

int main() {

    int a, b;  

    cout<<"HAHAHAHA Enter First Number"<<endl;
    cin>>a;
    cout<<"Enter Second Number"<<endl;

    cin>>b;

    cout<<"\n- - - - - - - -\n";

    cout<<"The HCF of "<<a<<" and "<<b<<" is "<<euclid(a, b);

    return 0;
}

int euclid(int a, int b){
    if(a<b){
        int temp = b;

        b = a;

        a = temp;
    }
    int k;
    
    while((a%b) != 0){
        k = a;
        a = b;
        b = k%b;
    
    }
   / return b;
}

//compile to exe by "g++ <f/ilename.cpp>"
