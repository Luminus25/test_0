

#include <iostream>

using namespace std;


int interi (int, int);
double interi (double , double);


int main() {
    double a,b;
    
    cin >> a;
    cin >> b;
    
    cout << interi(a, b) << endl;
    
    return 0;
}


int interi (int x, int y)
{
    return x-y;
}

double interi (double x, double y)
{
    return x-y;
}
