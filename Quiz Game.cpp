#include <iostream>
#include <string>
using namespace std;

int main()
{

    string a, b, c, d, e;
    string ask;
    int score;
    

    cout << "Hi! Do you want to play? (yes/no)"<<endl;
    cin >> ask;
    cin.ignore();
    if(ask=="yes")
    {
        cout << "Good Luck, Let's Begin!"<< endl;
        cout<< "Question 1"<< endl;    
        cout << "Who is the father of Computer? " << endl;
        getline(cin, a);
        if(a=="Charles Babbage")
        {
            cout << "Correct!"<< endl;
            score++;
        }
        else
        {
            cout << "Incorrect"<< endl;   
        }
        cout << "__________________________________________________________________________" << endl;
        cout<< "Question 2"<< endl;    
        cout << "Full for of 'ALU'" << endl;
        getline(cin, b);
        if(b=="Arithimetic Logical Unit")
        {
            cout << "Correct!"<< endl;
            score++;
        }
        else
        {
            cout << "Incorrect"<< endl;   
        }
        cout << "__________________________________________________________________________" << endl;
        cout<< "Question 3"<< endl;    
        cout << "file extension for python" << endl;
        getline(cin, c);
        if(c==".py")
        {
            cout << "Correct!"<< endl;
            score++;
        }
        else
        {
            cout << "Incorrect"<< endl;   
        }
        cout << "__________________________________________________________________________" << endl;
        cout<< "Question 4"<< endl;    
        cout << "Abbrevation of 'OS' " << endl;
        getline(cin, d);
        if(d=="Operating System")
        {
            cout << "Correct!"<< endl;
            score++;
        }
        else
        {
            cout << "Incorrect"<< endl;   
        }
        cout << "__________________________________________________________________________" << endl;
        cout<< "Question 5"<< endl;    
        cout << "What is the symbol to comment out code in 'c++' " << endl;
        getline(cin, e);
        if(e=="//")
        {
            cout << "Correct!"<< endl;
            score++;
        }
        else
        {
            cout << "Incorrect"<< endl;   
        }
        cout << "__________________________________________________________________________" << endl;
        cout << "Quiz has ended " << endl;
        cout << "You have scored " << score << " out of 5"<< endl;

        cout<<endl;
    }    
               
    if(ask=="no")
    {
        cout << "GoodBye!" << endl;
    }
    return 0;
}