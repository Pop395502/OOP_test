# ifndef CYLINDER_CPP
# define CYLINDER_CPP
#include <cmath>
#include <iostream>
#include <iomanip>

# include "Cylinder.h"

double Cylinder :: SurfaceArea(){
    
    
    return 2*M_PI*radius*height + 2*M_PI*radius*radius;
}

double Cylinder :: Volume(){

    return 2*M_PI*radius*radius*height;
}

double Cylinder :: Circumference(){

    return M_PI*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
