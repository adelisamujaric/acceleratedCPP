#include <iostream>
#include <string>

using namespace std;

int main(){

    //2.0 - Compile and run the programm presented in this chapter
    {cout<<"Please enter your name: ";
    string name;
    cin>>name;

    const string greeting = "Hello " + name + " !"; 

    //adding rows and cols
    const int padding = 1;
    const int rows = padding * 2 + 3;  // 3 is for 3 rows we know we have for sure(greeting row, top row and the bottom row)
    const string::size_type cols = greeting.size() + padding * 2 + 2;

    cout<<endl;

    for(int i = 0; i != rows; ++i){
        string::size_type c = 0;
        while(c != cols){
            if(i == padding + 1 && c == padding +1){
                cout<<greeting;
                c += greeting.size();
            }else{
                if (i == 0 || i == rows - 1 || c == 0 || c== cols -1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                ++c;                      
            }
        }
        cout <<endl;
    }}

    //2.1 - Change the framing program so that it writes its greeting with no separation from the frame
     {cout<<"Please enter your name: ";
    string name;
    cin>>name;

    const string greeting = "Hello " + name + " !"; 

    //adding rows and cols
    const int padding = 0; // this part is changed
    const int rows = padding * 2 + 3;  // 3 is for 3 rows we know we have for sure(greeting row, top row and the bottom row)
    const string::size_type cols = greeting.size() + padding * 2 + 2;

    cout<<endl;

    for(int i = 0; i != rows; ++i){
        string::size_type c = 0;
        while(c != cols){
            if(i == padding + 1 && c == padding +1){
                cout<<greeting;
                c += greeting.size();
            }else{
                if (i == 0 || i == rows - 1 || c == 0 || c== cols -1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                ++c;                      
            }
        }
        cout <<endl;
    }}


    //2.2 - Change the framing program so that it uses a different amount of space to separate
    //      the sides from the greeting then it uses to separate the top and the bottom borders from the greeting

    {cout<<"Please enter your name: ";
    string name;
    cin>>name;

    const string greeting = "Hello " + name + " !"; 

    //adding rows and cols
    const int padding = 1;
    const int rows = padding * 4 + 3;  // 3 is for 3 rows we know we have for sure(greeting row, top row and the bottom row)
    const string::size_type cols = greeting.size() + padding * 6 + 2;

    cout<<endl;

    for(int i = 0; i != rows; ++i){
        string::size_type c = 0;
        while(c != cols){
            if(i == padding + 2 && c == padding + 3){
                cout<<greeting;
                c += greeting.size();
            }else{
                if (i == 0 || i == rows - 1 || c == 0 || c== cols -1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                ++c;                      
            }
        }
        cout <<endl;
    }}

    //2.3 - Rewrite the program to ask the user to supply the amount of spacing 
    //      to leave between the frame and the greeting

    {cout<<"Please enter your name: ";
    string name;
    cin>>name;

    const string greeting = "Hello " + name + " !"; 

    //adding rows and cols
    int padding;

    cout << "Supply the amount of spacing between borders and the greeting: ";
    cin>>padding;

    const int rows = padding * 2 + 3;  // 3 is for 3 rows we know we have for sure(greeting row, top row and the bottom row)
    const string::size_type cols = greeting.size() + padding * 2 + 2;

    cout<<endl;

    for(int i = 0; i != rows; ++i){
        string::size_type c = 0;
        while(c != cols){
            if(i == padding + 1 && c == padding + 1){
                cout<<greeting;
                c += greeting.size();
            }else{
                if (i == 0 || i == rows - 1 || c == 0 || c== cols -1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                ++c;                      
            }
        }
        cout <<endl;
    }}

    
    //2.5 - Write a set of "*" characters so that they form a square, a rectengle, and a triangle

    {
      int sides;
      cout<<"Enter the side length of the square: "; cin>> sides;
      for (size_t i = 0; i < sides; i++)
      {for (size_t j = 0; j < sides; j++)
      {
        cout<<"* ";

      }
        cout<<endl;
      }
      
      int topBottom;
      int leftRight;
      cout<<"Enter the length of left and right sides of the rectangle: "; cin >> leftRight;
      cout<<"Enter the length of top and bottom sides of the rectangle: "; cin >> topBottom;

      for (size_t i = 0; i < leftRight; i++)
      {for (size_t j = 0; j < topBottom; j++)
      {
        cout<<"* ";
      }
      
        cout<<endl;
      }

      int triangleRows;
      cout<<"Enter the number of rows in the triangle: "; cin>>triangleRows;
     
      for (size_t i = 1; i <= triangleRows; i++) 
      { 
        for (size_t j = 1; j <= i; j++) 
            {
                cout<<"*";
            }
      
        cout<<endl;
      }}
      
      //2.6 - What does the following code do?

      {
        cout<<"__________________________"<<endl;

        int i = 0;
        while (i < 10) // 1, 2, ... 8 , 9, 10
        {
            i+=1; // 1, 2 , ... 9, 10
            cout<<i<<endl; // 1, 2 , ... 9, 10 
        }

        cout<<"__________________________"<<endl;

        //This code writes number from 1 to 10
        
      }

      //2.7. - Write a program to count down from 10 to -5

      {
        int i = 11;

        do{
            i--;
            cout<<i<<endl;
        }
        while ( i > -5);
        
        // or
        cout<<"__________________________"<<endl;

        int j = 11;
         while ( j > -5){
            --j;
            cout<<j<<endl;
         }
      }
    
    //2.8 - Write a program to generate the product of the numbers in the range  [1,10)
    {
        cout<<"__________________________"<<endl;

        int number = 10;

        for (size_t i = 1; i < number; i++){
            for (size_t j = 1; j < number; j++)
            {
                cout<<i<< " * "<<j<< " = " <<i *j<<endl;
            }
            cout<<endl;
        }
        
        
    }

    //2.9 - Write a program that asks the user to enter two numbers and tell
    //      the user which number is larger then the other

    {
        cout<<"__________________________"<<endl;
        int firstNumber , secondNumber;
        cout<<"Enter first number: "; cin>>firstNumber;
        cout<<"Enter second number: "; cin>>secondNumber;

        if(firstNumber > secondNumber){
            cout<<"First number is larger"<<endl;
        }else{
            cout<<"Second number is larger"<<endl;
        }
    }

    //2.10 - Explain each of the uses of std:: in the following program:

    {
        int k = 0;
        while(k != 10){
            using std::cout; //using directive allows us to use names from standard library without std::
            cout<<"*";
            ++k;
        }
        std::cout<<std::endl; // refears to standard library names such as cout and endl, this is the usual way of using members from std library
    }
        return 0;

}