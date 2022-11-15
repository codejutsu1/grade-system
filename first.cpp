#include <iostream>
using namespace std;

int main(){
    cout << "THIS CODE WAS WRITTEN BY: \n\t ME" << endl;
    cout << "REGISTRATION NUMBER: \n\t YOUR REG NUMBER \n\n\n" << endl;

    string fullname;
    string regno;

    string course[10] = {};
    string grade[10] = {};
    int score[10] = {};
    int i;

    cout << "You must be offering 10 courses \n" << endl;
    cout << "Enter your full name" <<endl;
    getline(cin, fullname);
    cout << "Enter your registration number" << endl;
    cin >> regno;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter course title " << i + 1 <<endl;
        cin >> course[i];

        cout << "Enter score for " << course[i] << endl;
        cin >> score[i];

        if(score[i] <= 100 && score[i] >= 70) grade[i] = "A";

        else if(score[i] <= 69 && score[i] >= 60) grade[i] = "B";

        else if(score[i] <= 59 && score[i] >= 50) grade[i] = "C";

        else if(score[i] <= 49 && score[i] >= 45) grade[i] = "D";

        else if(score[i] <= 44 && score[i] >= 40) grade[i] = "E";

        else if(score[i] <= 39 && score[i] >= 0) grade[i] = "F";

        else {
            cout << "Score is not within 0 - 100! Enter score again" << endl;
            i--;
        }
    }

    cout << "\n\n RESULT SHEET FOR: " << endl;
    cout << "\t NAME: " << fullname << endl;
    cout << "\t REGISTRATION NUMBER: " << regno << endl;

    for (i = 0; i < 10; i++)
    {
        cout << "\t"<< course[i] << " : " << grade[i] << endl;
    }

    return 0;
    
    
}