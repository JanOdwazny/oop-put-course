#include <iostream>
#include <vector>
#include <string>
#include <cstring>

class Sequence
{
public:
    virtual std::string printedSeq() = 0;
};

class Characters : Sequence
{
public:
    std::string text;
    std::string printedSeq()
    {
        return this->text;
    }
    Characters(){
        
    }
    Characters(std::string text)
    {
        this->text = text;
    }
};

class Substring : Sequence
{

    Characters text;
    int start;
    int len;

    Substring(Characters text1, int start, int len)
    {
        this->text = text1;
        this->start = start;
        this->len = len;
    };
    std::string printedSeq()
    {
        std::string temp = text.printedSeq().substr(start, len);
        return temp;
    }
};

class Concatenation : Sequence
{
private:
    Characters text1;
    Characters text2;

public:
    Concatenation(Characters text1, Characters text2)
    {
        this->text1 = text1;
        this->text2 = text2;
    }

    std::string printedSeq()
    {
        return text1.printedSeq() + text2.printedSeq();
    }
};

int main()
{

    Characters ob1("fsdfsf");
    Characters ob2("ertgrthrt");
    Concatenation ob3(ob1, ob2);
    std::cout<<ob3.printedSeq();
}
