#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

class elf{
int index;
int totalcalories;




};

int main(){

    std::string input;
    int sum=0;
    int biggestsum=0;
    int elf = 0;
    int bestelf = 0;
    ifstream file1("elfy.txt");

    while(getline(file1, input)){

        if(input==""){
            cout<<input;
            elf+=1;
                if(sum>biggestsum){
                    biggestsum=sum;
                    sum=0;
                    bestelf = elf;
            }

        }
        sum+=stoi(input); //so much time wasted but stoi didnt want to work

    }
    cout<<biggestsum<<endl;
    cout<<bestelf<<endl;








}

