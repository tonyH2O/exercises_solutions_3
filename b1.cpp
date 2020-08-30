


#include <iostream>
#include <string>

int main()
{

// 1
    std::cout<< "printing Hello World: "<<std::endl;
    std::cout << "Hello World"<< std::endl;

// 2
    std::cout << "calculate some big nums: " << std::endl;
    std::cout<< (3522 + 52353) * 23 - (2336*501 + 23432 - 6743)*3 << std::endl;
    std::cout << "5+5 = " << std::endl;
    int result;
    result = 5+5;
    std::cout<<result<<std::endl;

// 3


    std::cout << "1 to 10 print them: " << std::endl;

    for (int x = 1; x <=10; ++x)
    {
        std::cout << x << std::endl;
    }

// 4
    std::cout<< "the area of a triangle is: a*b " << std::endl;
    int a,b,area;
    std::cout << "give me a: ";
    std::cin >>a;
    std::cout<< "give me b: ";
    std::cin >>b;
    area = a*b;
    std::cout << "area: " << area << std::endl;

// 5 


    std::cout << "print the Alphabet: "<<std::endl;
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        std::cout<<ch<<std::endl;
    }


    return 0;
}

