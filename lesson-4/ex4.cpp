#include <iostream>


using namespace std;

class TotalWeight{
    public:
    virtual int CombinedWeight() = 0;
    
   
};

class sack: public TotalWeight{
    public:
   
    int NumberOfPieces;
    int Weight;
    int CombinedWeight(){

        return(NumberOfPieces*Weight);
    };


    sack(int a, int b){
    this->NumberOfPieces = a;
    this->Weight = b;


    }


};






int main(){


sack sack1(2,4);
cout<<sack1.CombinedWeight()<<endl;





}
