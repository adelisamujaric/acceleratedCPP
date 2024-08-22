#include <iostream> 
int main(){
    //0.Compile and run the Hello World! program
    std::cout<<"Hello World!"<<std::endl;

    //1.What does the following statement do? 3 + 4
    std::cout<<3+4<<std::endl;
    //this statement returns the sum of two numbers

    //2.Write the program that, when run, writes --> This (") is a quote and this (\) is a backslash
    std::cout<<"This (\") is a quote and this (\\) is a backslash"<<std::endl;

    /*3.The string literal "\t" represent a tab character.
      Different C++ implementations display tabs in different way.
      Experimet with your implementation to learn how it treats tabs*/
    std::cout<<"This space (\t) is what happens after I enter the tab character (\\t)"<<std::endl;
    std::cout<<"It can be used for list:\n\t-item1\n\t-item2\n\t-item3"<<std::endl;

    /*5.Is this a valid program? Why or why not?
        #include <iostream>
        int main ()
        std::cout<<"Hello, world!"<<std::endl;
    
    Answer: This is not valid, because int main() is a function and requires curly braces and also return 0 statement
            so that we know that our program works.

        #include <iostream>
        int main (){
        std::cout<<"Hello, world!"<<std::endl;
        return 0;
        } --> now, this is a valid program
    */

    /*6.Is this a valid program? Why or why not?
        #include <iostream>
        int main () {{{{{{std::cout<<"Hello, world!"<<std::endl;}}}}}} */
    {{{{{{std::cout<<"Hello, world!"<<std::endl;}}}}}} 
    /*Answer: Even if it look a little odd, this program is valid and would work, but this means that we have 6 scopes
            (5 scopes inside the int main(){} scope)
    */

    //10.Rewrite the Hello, world! program so that a newline occurs everywhere that whitespace is allowed in the program
    std::cout<<"Hello\nWorld!"<<std::endl;
    




    
    return 0;
}


