#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GuessTheNumber()
{
    cout<<"I have the number."<<endl;
    cout<<"Enter your number : ";
    srand(time(0));
    int random = rand() % 100;
    // cout<<random<<endl;    // random number 
    int status = -1;
    int guess = 1; 
    while(status == -1){
        // cout<<"Enter the number : ";
        int pnum;
        cin>>pnum;
        if(random == pnum){
            cout<<"Number = "<<random<<endl;
            cout<<"You are right, You win in "<<guess<<" attempts!";
            status = 0;
        }
        else if(random < pnum){
            cout<<"Your number is greater!"<<endl;
            cout<<"Enter again : ";
            guess++;
        }
        else if(random > pnum){
            cout<<"Your number is smaller!"<<endl;
            cout<<"Enter again : ";
            guess++;
        }
    }   
}

int main()
{
    
    GuessTheNumber();
    return 0;
}