#include <iostream>
#include <string>

int main(){

//0.Compile,execute and test the program in this chapter
std::cout<<"Please enter your name: ";
std::string name;
std::cin>> name;

std::string greeting = "Hello " + name + " !"; 
std::string spaces(greeting.size(),' ');
std::string second = "* " + spaces + " *";
std::string first(second.size(), '*');

std::cout<<std::endl;
std::cout<<first<<std::endl;
std::cout<<second<<std::endl;
std::cout<<greeting<<std::endl;
std::cout<<second<<std::endl;
std::cout<<first<<std::endl;


//1.Are the following definitions valid? Why or why not?
const std::string hello = "Hello";
const std::string message = hello + ", world" + "!";
std::cout<<message<<std::endl;

/*Answer: 
This code is valid since the operator + is left-associative which means
it first concatenates std::string object hello with string literal ", world" 
and this all becomes string object. Now, we again have the + operator between a string object
and a string litteral*/

/*2.Are the following definitions valid? Why or why not?
        const std::string exclam = "!";
        const std::string message = "Hello " + ", world" + exclam;
Answer:
This definiton is not valid, because, as written above, the operator + 
is left-associative and we can not concatenate two string literals
*/

//3.Is the following program valid? If so what does it do? If not, why not?
{
    const std::string s = "a string3";
    std::cout<<s<<std::endl;
}
{
    const std::string s = "another string3";
    std::cout<<s<<std::endl;
}
/*Answer:
The program is valid. Even if the variable names are the same,it is not a problem,
because they belong to two different scopes. Each varable "dies" after the code within its scope is executed

-this code prints out the values of the "s" variables one below the other*/


//4.What about this one? What if we change }} to };} in the third line from the end?
{
    const std::string s = "a string4";
    std::cout<<s<<std::endl;
    {
        const std::string s = " another string4";
        std::cout<<s<<std::endl;
    }
}
/*Answer:
The program is still valid. Outer scope will execute first, inner scope executes after*/

//5.Is this program valid? If so, what does it do? If not, say why not, and rewrite it to be valid.
{
    std::string s = "a string5";
    {   
        std::string x = s + ", really5";
        std::cout<<s<<std::endl;
        std::cout<<x<<std::endl;
    }
}

/*Answer:
The program is valid. Outer scope will execute first then the inner scope, so the 
output is 
  -a string5 
  - as string5, really5*/

//6.What does this code do if, when it asks you for input, you type two names?

std::cout<<"What is your name? ";
std::string name6;
std::cin>>name6;
std::cout<<"Hello, "<<name6<<std::endl<<"And what is yours? ";
std::cin>>name6;
std::cout<<"Hello "<<name6<<", nice to meet you! "<<std::endl;
 
/* Answer: If I enter my full name the first time the program asks for it,
only the part before the first space will be stored and printed out.
The rest of the input stays in the buffer.
When the program asks for another name, it automatically reads the remaining input from the buffer without giving 
me a chance to enter anything new.*/


return 0;
}

