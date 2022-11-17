#include <iostream>

using namespace std;


class MovieGenre{
    public:
    string gen;
    MovieGenre(){
    this->gen="gen";

    }


    MovieGenre(string gen){
    this->gen=gen;
    }
};
class Actor{

    string name;
    string surname;
    string gender;
    int age;
    string nationality;
public:
    Actor(){
        this->name="name";
        this->surname="surname";
        this->gender="gender";
        this->age=0;
        this->nationality="nationality";


    }
    Actor(string name ,string surname,string gender, int age, string nationality){
        this->name=name;
        this->surname=surname;
        this->gender=gender;
        this->age=age;
        this->nationality=nationality;


    }
};

class movie{
    int duration;
    string title;
    int ProductionYear;
    MovieGenre genre[3];
    Actor MainRoles[5];


    movie(int dur, string title, int year, MovieGenre genres[],Actor MainRoles[]){
        this->duration=dur;
        this->title=title;
        this->genre=genres;
        this->MainRoles=MainRoles;


    }
void printdata(){
    cout<<"title: "<<this->title<<endl;
    cout<<"staring: ";
    for(int i=0; i<5;i++){
        cout<<this->MainRoles[i].name<<" "<<this->MainRoles[i].surname;

    }
    cout<<endl;
    cout<<"year: "<<this->ProductionYear<<endl;
    cout<<"duration: "<<this->duration<<endl;
}



};


int main()
{


}
