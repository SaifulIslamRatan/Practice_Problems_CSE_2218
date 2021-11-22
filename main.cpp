#include <iostream>

using namespace std;

int factorial(int number){
    if(number==0 || number==1)
    return 1;
    else
        return number*factorial(number-1);

}

int main()
{
    int number;
    cout<<"If you want to find a factorial please enter the number:";
    cin>>number;;
    cout<<factorial(number);
}
