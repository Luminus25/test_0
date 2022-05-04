//
//  main.cpp
//  esercizio2
//
//  Created by Samuele Di Matteo on 03/05/22.
//

#include <iostream>
using namespace std;

int funz (int, int);

int main() {
    cout << "test" << endl;
    int x,y,t;
    x=11, y=3;
    t=funz(x,y);
    cout << "t = " << t << endl;
    
    return 0;
}


int funz(int a, int b)
{
a = a-b;
return 1+a;

}
