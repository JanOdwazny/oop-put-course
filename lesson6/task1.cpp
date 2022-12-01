#include <iostream>

using namespace std;

class compare{
    public:
    float a;
    float b;
int max(){
    return a > b ? a : b;
};
int min(){
    return a < b ? a : b;
};
float avg(){
    return (a+b)/2;
};

compare(int x, int y){
this->a=x;
this->b=y;


}
};
int main(){

compare comp1(5,6);
cout<<comp1.max()<<endl;
cout<<comp1.min()<<endl;
cout<<comp1.avg()<<endl;



}
