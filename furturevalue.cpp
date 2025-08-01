#include<iostream>  
#include <cmath>

int main(){

    double principle, rate;

    int years;

    std::cout<<"Enter the initial investment amount(Prtinciple):"<<std::endl;
    std::cin>>principle;
    std::cout<<"Enter annual interest rate:"<<std::endl;
    std::cin>>rate;
    rate=rate/100;;

    std::cout<<"Enter the number of years:"<<std::endl;
    std::cin>>years;    

    double FutureValue= principle*pow(1+rate ,years);
    std::cout<<"Future Value is:"<<FutureValue<< std::endl;
    return 0;;

}