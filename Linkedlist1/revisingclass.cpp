#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Bikes {
    public:
    string name;
    int price;
    int cc;
    Bikes(string name,int price,int cc){
        this->name=name;
        this->price=price;
        this->cc=cc;
    }
}

int main(){
    Bikes b1("Royal Enfield", 250000, 350);
    Bikes b2("Java", 200000, 350);
    
    return 0;
};