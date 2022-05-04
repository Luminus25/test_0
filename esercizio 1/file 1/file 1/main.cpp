//
//  main.cpp
//  file 1
//
//  Created by Samuele Di Matteo on 04/04/22.
//

#include <iostream>
using namespace std;


int main() {
    
    cout << "immetti un intero" << endl;
    int x;
    cin >> x;
    
    if (x >= 2 && x <= 4) {
        cout << "hai immesso un num tra 2 e 4" << endl;
    }
    else {
        cout << "hai immesso un num non tra 2 e 4" << endl;
    }
    
    
    return 0;
}
