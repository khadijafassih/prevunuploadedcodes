#include<iostream>
#include<string>
using namespace std;

string passOrFail(int marks);

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;
    cout << passOrFail(score);
    return 0;
}

string passOrFail(int marks);
{
    string result;
    if ( marks>50)
    result= "You are Passed with"+ to_string(marks)+ "marks";
    else
    result= "You are Failed with"+ to_string(marks)+ "marks";
    return result;
}