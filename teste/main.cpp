#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 33.52303;

    cout << fixed << showpoint;
    cout << setprecision(2) ;

    cout << x ;
    return 0;
}
