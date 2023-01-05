#include <iostream>
#include <string>
#include <stdio.h>



class Game{
    public:
virtual std::string result()=0;
};

class FakeFootballGame : Game{
    public:
    FakeFootballGame(){

    };
    
    std::string result(){
        return "1:1";
 };


};


int main(){
    FakeFootballGame game1;
    std::cout <<game1.result();


}
