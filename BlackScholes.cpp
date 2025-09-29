#include <iostream>
#include <cmath>

class BlackScholes{
    private:
    double S;
    double K;
    double r;
    double T;
    double sigma;

    double N(double x)const{
        return 0.5 * erfc(-x/std::sqrt(2));;

    }

    public:
    BlackScholes(double  S_,double K_, double r_, double T_, double sigma_) :
    S(S_), K(K_), r(r_), T(T_), sigma(sigma_) {}    

    double d1()const {
        return (std::log(S/K) + (r + 0.5*sigma*sigma)*T)/(sigma*std::sqrt(T));  

    }

    double d2()const {
        return d1() - sigma*std::sqrt(T);
    }   
    double callPrice()const {
           return S * N(d1()) - K * std::exp(-r * T) * N(d2());
                              
    }
    double putPice()const {
        return K*std::exp(-r*T)*N(-d2()) - S*N(-d1());
    }

};

int main(){
    double s=100;;
    double K=100;;
    double r=0.05;
    double T=1;
    double sigma=0.2;

    BlackScholes bs(s,K,r,T,sigma);   
    std::cout <<"Call Option Price "<<bs.callPrice()<<std::endl;;
    std::cout<< "Put Option Price "<<bs.putPice()<<std::endl;;
    return 0;


}
