#include <iostream>

using namespace std;
//zad 1 computer
//zad 2 vase

class computer{
    public:
    string manufacturer;
    int price;
    int storage;
    string type;



computer(){
    this->manufacturer="default manufacturer";
    this->price=0;
    this->storage=0;
    this->type="PC";


}

computer(string man){
    this->manufacturer=man;
    this->price=0;
    this->storage=0;
    this->type="PC";

}
computer(string man, string type, int price, int storage){
    this->manufacturer=man;
    this->price=price;
    this->storage=storage;
    this->type=type;

}




};
class vase{
    public:
    int year;
    int price;
    string location;
    string countryorigin;

int age(){
return 2022-this->year;

}
void move(string dest){
this->location=dest;


}
void reprice(int newprice){
this->price=newprice;



}




};




int main()
{
computer comp1("hp","PC",1000,500);
computer comp2;
vase vase1;
    
cout<<comp1.price<<endl;
cout<< comp2.manufacturer<<endl;



vase1.year=1250;
vase1.price=400;
vase1.location="london";
vase1.countryorigin="greece";
cout<<vase1.age();
    
cout<<vase1.location<<endl;
vase1.move("paris");
cout<<vase1.location<<endl;
return 0;
}
