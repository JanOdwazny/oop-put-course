#include <iostream>

using namespace std;


class moviegenre{
    public:
    string gen;
    moviegenre(){
    this->gen="gen";

    }


    moviegenre(string gen){
    this->gen=gen;
    }
};
class actor{

    string name;
    string surname;
    string gender;
    int age;
    string nationality;
public:
    actor(){
        this->name="name";
        this->surname="surname";
        this->gender="gender";
        this->age=0;
        this->nationality="nationality";


    }
    actor(string name ,string surname,string gender, int age, string nationality){
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
    int productionyear;
    moviegenre genre[3];
    actor mainroles[5];


    movie(int dur, string title, int year, moviegenre genres[],actor mainroles[]){
        this->duration=dur;
        this->title=title;
        this->genre=genres;
        this->mainroles=mainroles;


    }
void printdata(){
    cout<<"title: "<<this->title<<endl;
    cout<<"staring: ";
    for(int i=0; i<5;i++){
        cout<<this->mainroles[i].name<<" "<<this->mainroles[i].surname;

    }
    cout<<endl;
    cout<<"year: "<<this->productionyear<<endl;
    cout<<"duration: "<<this->duration<<endl;
}



};


int main()
{


}
