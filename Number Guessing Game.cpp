/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int num=num%100+1;
    int guess,attempt;
    cout<<"\t\t\t---IT'S A NUMBER GUESSING GAME---\n\n";
    cout<<"\t\t\t!!LET'S START!!\n\n";
    for(int i=1; i<=10; i++)
     {    
         cout<<"Enter some input numbers between(0 and 99) for guessing a number:\n\n"; 
          cin>>guess;
          attempt=i;
     if(num==guess){
     cout<<"Congrats! You guessed a correct number.";
     break;
}
     else if(num<guess){
    cout<<"Guess is high\n";
    cout<<"Try Again\n\n";
}
    else
    {
    cout<<"Guess is low\n";
    cout<<"Try Again\n\n";
}
}
}
