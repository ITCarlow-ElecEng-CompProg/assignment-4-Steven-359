/**

25/09/17
Steven O' Brien
Electrical Resistance of a Wire
Exercise 4


 */

#include <iostream>
#include <math.h>

using namespace std;

//Function to calculate Resistance
double Resistance(double r, double l, double p)
{
    double A, Res;

    A = M_PI * pow(r,2);
    Res = p*(l/A) ;

    return (Res);
}

int main()
{
    //Displays Programme Title
    cout << "Electrical Resistance of a Wire" ;

    // Assigned values to variable
    double r=0, l=0, p=0 , Res;

    //While loop to ensure positive value for radius
    while (r<=0)
    {
        cout << "\n\n" << "Enter a value for radius (m):" ;
        cin >> r ;
    }

    //While loop to ensure positive value for length
    while (l<=0)
    {
        cout << "\n\n" << "Enter a value for length (m):" ;
        cin >> l ;
    }

    //While loop to ensure positive value for resistivity
    while (p<=0)
    {
        cout << "\n\n" << "Enter a value for resistivity (ohm*m):" ;
        cin >> p ;
    }

    //Calling on function Resistance to calculate resistance value
    Res = Resistance(r,l,p);

    //Result of Electrical Resistance of a Wire displayed to the user
    cout << "\n\n" << "The value of Electrical Resistance of a Wire (ohms):" << Res << endl ;




    return 0;
}
