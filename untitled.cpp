#include <iostream>

int main()
{   
    float num1,num2;
    char method ;

    int i;
    while (i!=1)
    {
        std :: cout << "Enter num1 : ";
        std :: cin>>num1;
        std :: cout << "Enter num2 : ";
        std :: cin>>num2;
    
        std :: cout << "Enter operation [A] addition, [S] subtraction,[D] division, [M] multiplication: ";
        std::cin>>method;

        switch (method)
        {
        case ('A'):
            std::cout<<num1+num2<<"\n";
            break;
    
        case('S'):
            std::cout<<num1-num2<<"\n";
            break;

        case('M'):
            std::cout<<num1*num2<<"\n";
            break;

        case('D'):
            std::cout<<num1/num2<<"\n";
            break;
        }

        std::cout<<"to exit enter 1 and to continue enter 2:";
        std::cin>>i;
        
    }


    
    return 0;
}