#include <QCoreApplication>
#include "iostream"


void T1ConstExamples();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    T1ConstExamples();

    return a.exec();
}


void T1ConstExamples()
{
    /*Constantness is checked during Compile time only */

    const int i = 9; //i become constant and cannot be changed
    //i =6;//Shows error in compile time

    const int *p1 = &i;//Data is const and pointer is not
    p1 =0;// Works fine
    //*p1 =0 // Shows Error in compile time


    int * const p2 = 0 ; //p2 is const and not the value

    const int * const p3 = 0; //data and pointer both are constant.


    int const *p4 = &i;
    const int *p5 = &i;// Both of the above lines are same.


    std::cout<<"p1"<<"address:   "<<"p1"   <<"value:  "<<*p1<<std::endl;
    std::cout<<"p2"<<"address:   "<<"p2"   <<"value:  "<<*p2<<std::endl;
    std::cout<<"p3"<<"address:   "<<"p3"   <<"value:  "<<*p3<<std::endl;
    std::cout<<"p4"<<"address:   "<<"p4"   <<"value:  "<<*p4<<std::endl;
    std::cout<<"p5"<<"address:   "<<"p5"   <<"value:  "<<*p5<<std::endl;

 // Simply remember this rule:
    //If const is on the left of the * , data is const
    //If const is on the right  of the * , pointer is const

}
