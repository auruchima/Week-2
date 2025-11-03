//
//  main.cpp
//  PS2P2(Week2)
//
//  Created by Alex Uruchima on 8/27/25.
//

#include <iostream>
using namespace std;
int main(){
    string lastname;
    double hours, payrate;
    cout<< "Enter last name : " ;
    cin>> lastname;
    cout<< "Enter hours worked : " ;
    cin>> hours;
    cout<<"Enter pay rate : $" ;
    cin>> payrate;
    cout<< "Grosspay for employee " <<lastname<< " " "will be : $"  <<hours*payrate<< endl;
    cout<<"(We are not giving time and a half for overtime hours)"  "     " ;
    
    
    
    
    
    
    return 0;
}

