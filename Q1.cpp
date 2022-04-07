#include <iostream>
#include <string>
using namespace std;
class Text
{
public:
   virtual ~Text(){
       
   }
   virtual void add(char c){ 
       data += c; 
   }
   string getValue(){ 
       return data; 
   }
private:
   string data;
};
class Number : public Text
{
   void add(char c)
   {
      if (('0' <= 'c') && (c <= '9'))
         Text::add(c);
   }
};
int main()
{
    Text* input = new Number();
    input->add('1');
    input->add('a');
    input->add('0');
    cout << input->getValue();
}
