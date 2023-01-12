#include <iostream>
#include <vector>
#include <string>

class Shiritori{
    std::vector<std::string> words;
    bool game_over = false;
    
    
    public:
        void play(std::string word){
            if(game_over){
                std::cout<<"the game has already ended";
                }else{
                if(words.empty()){
                    words.push_back(word);
                }else{
                    for (int i=0;i<words.size();i++){
                        if(word==words[i]){
                            game_over=true;
                            std::cout<<word<<" was already used";
                        
                            return;
                        }
                    }
                    std::string lastadded=words[words.size()-1];
                    if(word[0]!=lastadded[lastadded.size()-1]){
                        game_over=true;
                        std::cout<<"Game Over"<<word<<"does not start with "<<lastadded[lastadded.size()-1];
                        return;
                    }
                        words.push_back(word);
                        for (int i=0;i<words.size();i++){
                            std::cout<<words[i]<<" ";
            
                        }
                    
                }
            }
        }

        void restart(){
            words.clear();
            game_over=false;
            std::cout<<"The game has been restarted";


        }

        void printWords(){
            for (int i=0;i<words.size();i++){
                std::cout<<words[i]<<" ";
            }
        }

};
int main(){

    Shiritori game1;
    game1.play("apple");
    game1.play("apple");

    game1.printWords();





}
