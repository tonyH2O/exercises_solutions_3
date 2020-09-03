

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>


// 1
/*
int main(){
    
    std::string name,lastN;
    std::cin>>name>>lastN;
    std::cout<<name<<" "<<lastN<<std::endl;
    return 0;

}
*/

// 2
/*
int main(){
    int a;
    std::cin>>a;
    int b = a*a;
    std::cout<<b<<std::endl;
    return 0;
}
*/

// 3
//

/*
int main(){

    double inch;
    std::cin>>inch;
    double b = inch * 2.54;
    std::cout<<b<<std::endl;
    return 0;
}
*/


// 4
//
/*
int main(){

    std::string a;
    std::cin>>a;
    std::cout<<"Hello, "<<a<<"!"<<std::endl;

    return 0;
}
*/


// 5
//

/*
int main(){

    std::string name,fam,city;
    int age;
    std::cin>>name>>fam>>age>>city;

    std::cout<<"you are "<<name<<" "<<fam<<", a "<<age<<"-years old person from "<<city<<"."<<std::endl;


    return 0;
}

*/



// 6
// radius and P of Circle
//

/*
int main(){

    double r,pi=3.14;
    std::cin>>r;

    double a,p;
    a = pi*r*r;
    p = 2*pi*r;

    std::cout<<"area: "<<a<<std::endl;
    std::cout<<"perimeter: "<<p<<std::endl;

    return 0;

}


*/


// 7
//
//
/*
#include <iomanip>

//using std::ios;
int main(){

    //std::cout.setf(ios::fixed);
    //std::cout.precision(2);
    //
    double a,h;

    std::cin>>a>>h;

    double res = a*h/2;

    std::cout<<"Triangle area is: "<<std::fixed<<std::setprecision(2)<<res<<std::endl;

    return 0;

}

*/



// 8
//
// Celsius to Farenheit

/*
int main(){

    double cel;
    std::cin>>cel;

    double res = (cel/5)*9 + 32;

    std::cout<<"C to F: "<<std::fixed<<std::setprecision(2)<<res<<std::endl;

    return 0;

}
*/


// 9
//
//  BirthDay
/*
int main(){

    double longg,width,h,perc;
    std::cin>>longg>>width>>h>>perc;

    double r = longg*width*h;
    double re = r*0.001;
    double p = perc*0.01;

    double res = re*(1-p);

    std::cout<<"Litres of water: "<<std::fixed<<std::setprecision(3)<<res<<std::endl;

    return 0;

}
*/


// 10
//
//
/*
int main(){

    double b1,b2,h;
    std::cin>>b1>>b2>>h;

    double res = (b1+b2)*h/2;
    std::cout<<"res: "<<res<<std::endl;
    return 0;
}
*/



// 11
//
//
//
/*
#include <algorithm>

int main(){

    double x1,y1,x2,y2;
    std::cin>>x1>>y1>>x2>>y2;

    double ry = std::max(x1,x2) - std::min(x1,x2);
    double rx = std::max(y1,y2) - std::min(y1,y2);
    double r = ry*rx;
    double res = 2*(ry+rx);

    std::cout<<r<<std::endl;
    std::cout<<res<<std::endl;

    return 0;

}

*/



// 12
//
//
/*
int main(){

    std::string name;
    int c;
    std::cin>>name>>c;

    int res = c*3;

    std::cout<<"person : "<<name<<" will need "<<res<<" hours to complete "<<c<< " project's"<<std::endl;

    return 0;
}

*/






