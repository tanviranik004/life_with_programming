// write a program that inputs the number of hours that an employee works and the employee’s wage. Then display the employee’s gross pay. 

#include<iostream>
using namespace std;
using namespace std;
int main()
{

        float wage=50, hour, th, tw, total_wage;

        char name[20];
        cout <<"Enter Total Hours Work Today: ";
        cin>>hour;
        if(hour<=8)
        total_wage=wage;
        
        else if(hour >8 && hour<=12){
                th=hour-8;
                tw=th*10;
                total_wage=tw + wage;
        }

        else if(hour >12 && hour<=16)
        {
                th=hour-12;
                tw=4*10;
                total_wage=wage+tw+(th*20);
        }

        else if(hour >16 && hour<=20){
                th=hour-16;
                tw=(4*10)+(4*20);
                total_wage=wage+tw+(th*25);

        }
        else if(hour>20 && hour <=24){
                th=hour-20;
                tw=(4*10)+(4*20)+(4*25);
                total_wage=wage+tw+(th*40);
        }

        else{

            std:: cout<<"\nInvalid Input!";    
            std::   cout<<"\nHours can't be greater than 24 in a day.";
            return 0;

        }

        std::cout <<"\nTotal Wage : " <<total_wage;
        std::cout <<endl;
        return 0;



}