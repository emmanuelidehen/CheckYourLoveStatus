//
//  main.cpp
//  CheckYourLoveStatus
//
//  Created by Emmanuel Idehen on 6/8/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    string loversname;
    int x;
    cout << "Enter your Name!"<<endl;
    getline(cin, name);
    cout <<"\n"<<endl;
    cout << "Hello "<<name<< ", Please enter yout lover's name! "<<endl;
    getline(cin, loversname);
    cout <<"\n";
    cout <<"How much do you love him/her: (enter a number from 1- 10)"<<endl;
    cin >> x;
    cout <<"\n";
    cout << "Lol ! that's awesome. but guess what!"<<endl;
    cout <<"\n";
    cout <<loversname<<" Loves you "<<x<<" times more!"<<endl;
    cout <<"\n";
    
    
    
    
    return 0;
}
