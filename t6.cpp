#include<iostream>
using namespace std;
string Alphabetcase(char charr);
int main(){
    char charr;
    string Output;
    cout <<"Enter a character (A/a): ";
    cin >> character;
    tOutput=checkAlphabetcase(character);
    cout<<statementOutput;
    return 0;
}
string checkAlphabetcase(char charr){
    string statement;
    if (charra=='A')
    {
        statement="You have entered Capital A";
    }

    if (charra=='a')
    {
        statement="You have entered small a";
    }
    return statement;
}