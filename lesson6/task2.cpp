#include <iostream>
#include <cmath>
#include <math.h>


class Number{

    virtual double doubleValue() = 0;
};

class logarithm : public Number{
    private:
        double base, argument;

    public:
    double doubleValue(){
        return log(this->argument)/log(this->base);
    }

    logarithm( int a, int b){
        this->argument=b;
        this->base=a;   

        if(this->base<=1){
            throw std::invalid_argument("base too low");
        }

        if(this->argument<=0){
            throw std::invalid_argument("argument too low");
        }
    }

};

int main(){
try
{
    logarithm log1(0,0);
}
catch(const std::invalid_argument& e)
{
    std::cerr << e.what() << '\n';
}






}
