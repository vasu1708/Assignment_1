#include<iostream>
#include<string.h>
using namespace std;
class Calculator
{
    long number1;
    long number2;
public:
    Calculator()
    {
        cout<<"enter number1,number2:";
        cin>>number1>>number2;
    }
    void updateValues()
    {
        cout<<"enter number1,number2:";
        cin>>number1>>number2;
    }
    void addition()
    {
      cout<<"The addition of "<<number1<<" and "<<number2<<" is "<<number1+number2<<endl;
    }
    void subtraction()
    {
        cout<<"The subtraction of "<<number1<<" and "<<number2<<" is "<<number1-number2<<endl;
    }
    void multiplication()
    {
        cout<<"The multiplication of "<<number1<<" and "<<number2<<" is "<<number1*number2<<endl;
    }
    void division()
    {
        cout<<"The division of "<<number1<<" and "<<number2<<" is "<<number1/number2<<endl;
    }
    void moduloDivision()
    {
        cout<<"The modulo division of "<<number1<<" and "<<number2<<" is "<<number1%number2<<endl;
    }
    ~Calculator()
    {
        cout<<"Destructor called"<<endl;
    }
};
int  main()
{
    char input;
    char cont_ope[5];
    Calculator cal;
    do{
            cout<<"enter operator:";
    cin>>input;

    switch(input)
    {
    case '+':cal.addition();

             break;
    case '-':cal.subtraction();

             break;
    case '*':cal.multiplication();

             break;
    case '/':cal.division();

             break;
    case '%':cal.moduloDivision();

             break;
    default:cout<<"\nInvalid operator"<<endl;
             break;
    }
    cout<<"Do you want to perform another operation(yes/no):";
    cin>>cont_ope;
    if(strcmpi(cont_ope,"yes")==0)
        cal.updateValues();
    }while(strcmpi(cont_ope,"yes")==0);
    return 0;
}
