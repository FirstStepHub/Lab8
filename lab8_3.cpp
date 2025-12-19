#include<iostream>
#include<string>
using namespace std ;

int age ;
int height ;
int bounty ;

int main(){

    cout << "Enter your age: " ;
    cin >> age ;
    if(age < 26){
        cout << "Enter your height: " ;
        cin >> height ;   
        if(height < 100){
            cout << "Your character = Chopper" ;
            return 0 ;
        }
        else if(height >= 100 && height < 180){
            cout << "Your character = Usopp" ;
            return 0 ;
        }
        else 
        cout << "Enter your bounty: " ;
        cin >> bounty ;
        if(bounty > 1100000000)
            cout << "Your character = Zoro" ;
            else  cout << "Your character = Sanji" ;
            return 0 ;

    }
    else if(age < 61){
        cout << "Enter your bounty: " ;
        cin >> bounty ;
        if(bounty > 500000000)
            cout << "Your character = Jinbe" ;
        else cout << "Your character = Franky" ;
        return 0 ;

    }
    else
    cout << "Your character = Brook" ;
}