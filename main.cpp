//
//  main.cpp
//  ExpSer01
//
//  Created by Asher Abrams on 2018/12/29.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//
//  Evaluates an approximation of exp(n) using a series.
//
// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int x=1;
long int y;
double func01(double);
double z, n, sum = 1;

// DEFINITIONS
// This function takes user input n as the base of
// (n^0/0!) + (n^1/1!) + (n^2/2!) ... = e^n.
double func01(double x)
{
    for(y = 1; y < 20; y++)
    {
        x = x*y;
        z = double(pow(n,y)/x);
        sum = sum + z;
        cout << y << '\n';
        cout << x << '\n';
        cout << z << '\n';
        cout << sum << '\n';
        cout << '\n';
    }
    return x;
}

// MAIN
int main() {
    cout << "Evaluates exp(n). N?\n";
    cin >> n;
    func01(x);
    cout << '\n';
    return 0;
}




