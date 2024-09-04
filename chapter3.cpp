/*Imagine a course in which each student's final exam counts for 40% od the final grade,
the midterm exam counts for 20%, and the average homework grade makes up the 
remaining 40%. Write a program that helps students compute their final grades.*/


#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

// for vectors 
#include <algorithm>  
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision; //<iomanip>
using std::string;
using std::streamsize; //<ios>

//for vectors
using std::vector;
using std::sort;

int main(){
    string name;
    cout<<"Please, enter your first name: "; cin>> name;
    cout<<"Hello "<<name<< " !"<<endl;

    double midterm, final;
    cout<<"Please enter your midterm and final exam grades: "; cin>>midterm>>final;

    cout<<"Now, enter all your homework grades, followed by end-of-file: ";
    int count = 0;
    double sum = 0;
    double x; //var in which we read

    while(cin>>x){  
        ++count;
        sum += x; //after insertion enter EOF signal
    }

    streamsize prec = cout.precision();
    cout<< "Your final grade is: " << setprecision(3)<< 0.2 * midterm + 0.4 * final + 0.4 * sum/count<< setprecision(prec)<<endl;

    //STORING A COLLECTION OF DATA IN A VECTOR

    cin.clear(); // EOF
    cin.ignore();

    cout<<"_____________________________________________________"<<endl;
    string name2;
    cout<<"Please, enter your first name: "; cin>> name2;
    cout<<"Hello "<<name2<< " !"<<endl;

    double midterm2, final2;
    cout<<"Please enter your midterm and final exam grades: "; cin>>midterm2>>final2;

    cout<<"Now, enter all your homework grades, followed by end-of-file: ";
    vector<double> homework;
    double y; //var in which we read

    while(cin>>y){  
        homework.push_back(y); //2 4 5 3 2
    }
    typedef	vector<double>::size_type vector_size; //synonym 
    vector_size size = homework.size(); //5 size_typ - unsigned int
    if(size == 0){
        cout<<endl<<"You must enter your grades. Please try again: "<<endl;
        return 1;
    }
    sort(homework.begin(), homework.end()); //2 2 3 4 5 - 4
    vector_size mid = size/2; // 3          //0 1 2 3 4  - index

    double median;

    if(size % 2 == 0){ 
        median = (homework[mid] + homework[mid - 1]) / 2; // 4 + 3 / 2 = 3,5
    }else{
        median = homework[mid]; // 3
    }

    streamsize prec2 = cout.precision();
    cout<< "Your final grade is: " << setprecision(3)<< 0.2 * midterm2 + 0.4 * final2 + 0.4 * median<< setprecision(prec2)<<endl;
   
    return 0;
    system("pause>0");

}

