#include <iostream>
#include <string>

using namespace std;

class dog{
    public:
    string breed;
    string name;
    int age;


};

class car{
    public:
    string brand;
    string model;
    int year;
    bool isowned;
};
class human {
public:
    string name;
    int age;
    void buy_car(car newcar){
    newcar.isowned=1

    }
};


int main()
{
    car newcar;
    newcar.brand="opel";
    newcar.model="astra";
    human newhuman;
    newhuman.name="adam";
    dog dog1;
    dog1.breed="beagle";
    dog1.name="jack";
    dog1.age=5;
    newhuman.get_car(newcar);


    //cout << dog1.breed <<" "<< endl;
    return 0;
}
