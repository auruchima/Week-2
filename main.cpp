//
//  main.cpp
//  PS1P1(week 2)
//
//  Created by Alex Uruchima on 8/25/25.



///INPUT:
///- enter the quantity and unit price per item
///-multiply
///PROCESS:
///-assign quantity per item
///-assign price per item-
///-select calculation type: Multiplication
///-compute the calculation
///OUTPUT:
///- display the result of the calculation

#include <iostream>
int main(){
    using namespace std;
    double quantity, price;
    cout<<"Enter quantity: ";
    cin>> quantity;
    cout<<"Enter the unit price $: ";
    cin>> price;
    cout<<"The extended price will be: $"<<quantity*price<<endl;
    
      return 0;
}
