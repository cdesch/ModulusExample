//
//  main.cpp
//  ModulusExample
//
//  Created by cj on 9/12/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    long x =  98765432;
    
    
    cout << "Mod 10 " << x % 10 << endl;
    cout << "Mod 100 " << x % 100 << endl;
    cout << "Mod 1000 " << x % 1000 << endl;
    cout << "Mod 10000 " << x % 10000 << endl;
    cout << "Mod 100000 " << x % 100000 << endl;
    cout << "Mod 1000000 " << x % 1000000 << endl;
    
    cout << "Div 10 " << x / 10 << endl;
    cout << "Div 100 " << x / 100 << endl;
    cout << "Div 1000 " << x / 1000 << endl;
    cout << "Div 10000 " << x / 10000 << endl;
    cout << "Div 100000 " << x / 100000 << endl;
    cout << "Div 1000000 " << x / 1000000 << endl;

    cout << "Year  " << x / 10000 << endl;
    cout << "Month  " << (x / 100) % 100 << endl;
    cout << "Day  " << x % 100 << endl;
    

    return 0;
}

