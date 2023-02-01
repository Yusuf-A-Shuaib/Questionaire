#include <iostream>
#include <list>

using namespace std;


struct Question{
    string question;
    string answer[4];
    int correctAns;
};

bool correctAns(int correct){
    int answer;
    cout << "Choose 1-4 ->>> ";
    cin >> answer;

    while (answer > 3 && answer < 1){
        cout << "Invalid answer!" << endl;
        cout << "Choose 1-4 ->>> ";
        cin >> answer;
    }
    if (answer == correct){
        cout << "Correct!" << endl;
        system("cls");
        return true;   
    } else{
        cout << "Incorrect!" << endl;
        return false;
    }
}

bool Startquiz(Question number){
    cout << number.question << endl;
    for(int i = 0; i < 4; i++){
        cout << number.answer[i] << endl;
    }
    return correctAns(number.correctAns);
}



int main(){
    string player_name;
    int operation = 0;
    int player_score = 0;
    int question_count = 1;

    Question question1;
    question1.question = "What is the 23rd element on the periodic table ? ";
    question1.answer[0] = "1.) Titanium";
    question1.answer[1] = "2.) Arsenic";
    question1.answer[2] = "3.) Zinc";
    question1.answer[3] = "4.) Vanadium";
    question1.correctAns = 4;

    Question question2;
    question2.question = "What is the avarage life-span of a red blood cell? ";
    question2.answer[0] = "1.) 80 Days";
    question2.answer[1] = "2.) 100 Days";
    question2.answer[2] = "3.) 120 Days";
    question2.answer[3] = "4.) 140 Days";
    question2.correctAns = 3;

    Question question3;
    question3.question = "Which famous scientist created the idea of natural selection ? ";
    question3.answer[0] = "1.) Charles Darwin";
    question3.answer[1] = "2.) Walter B. Cannon";
    question3.answer[2] = "3.) Claude Bernard";
    question3.answer[3] = "4.) Issac Newton";
    question3.correctAns = 1;

    Question question4;
    question4.question = "Which coined the term 'Homeostasis' ? ";
    question4.answer[0] = "1.) Charles Darwin";
    question4.answer[1] = "2.) Walter B. Cannon";
    question4.answer[2] = "3.) Claude Bernard";
    question4.answer[3] = "4.) Issac Newton";
    question4.correctAns = 2;

    Question question5;
    question5.question = "Which scientist noted the importance of Internal environ ? ";
    question5.answer[0] = "1.) Charles Darwin";
    question5.answer[1] = "2.) Walter B. Cannon";
    question5.answer[2] = "3.) Claude Bernard";
    question5.answer[3] = "4.) Issac Newton";
    question5.correctAns = 3;

    Question question6;
    question6.question = "Which scientist invented the light bulb ? ";
    question6.answer[0] = "1.) Nicolas Tesla";
    question6.answer[1] = "2.) Thomas Edison";
    question6.answer[2] = "3.) Claude Bernard";
    question6.answer[3] = "4.) Issac Newton";
    question6.correctAns = 2;

    Question question7;
    question7.question = "Which scientist created Electricity ? ";
    question7.answer[0] = "1.) Thomas Edison";
    question7.answer[1] = "2.) Nicolas Tesla";
    question7.answer[2] = "3.) Claude Bernard";
    question7.answer[3] = "4.) Issac Newton";
    question7.correctAns = 2;

    Question question8;
    question8.question = "What is the 16th element on the periodic table ? ";
    question8.answer[0] = "1.) Titanium";
    question8.answer[1] = "2.) Sulphur";
    question8.answer[2] = "3.) Zinc";
    question8.answer[3] = "4.) Phosphorus";
    question8.correctAns = 2;

    Question question9;
    question9.question = "What is the 20th element on the periodic table ? ";
    question9.answer[0] = "1.) Calcium";
    question9.answer[1] = "2.) Arsenic";
    question9.answer[2] = "3.) Potassium";
    question9.answer[3] = "4.) Vanadium";
    question9.correctAns = 1;

    Question question10;
    question10.question = "What is the 18th element on the periodic table ? ";
    question10.answer[0] = "1.) Magnesium";
    question10.answer[1] = "2.) Argon";
    question10.answer[2] = "3.) Zinc";
    question10.answer[3] = "4.) Vanadium";
    question10.correctAns = 2;

    Question question11;
    question11.question = "What is the symbol of the 19th element on the periodic table ? ";
    question11.answer[0] = "1.) Rb";
    question11.answer[1] = "2.) Na";
    question11.answer[2] = "3.) K";
    question11.answer[3] = "4.) P";
    question11.correctAns = 3;

    Question question12;
    question12.question = "What is the 17th element on the periodic table ? ";
    question12.answer[0] = "1.) Magnesium";
    question12.answer[1] = "2.) Argon";
    question12.answer[2] = "3.) Chlorine";
    question12.answer[3] = "4.) Vanadium";
    question12.correctAns = 3;

    cout << "Welcome to questionaire." << endl;
    cout << "Enter name->>> ";
    cin >> player_name;
    system("cls");

    cout << "Hello " << player_name << ". Select an option." << endl;
    cout << "1.) Play Game" << endl;
    cout << "2.) Quit" << endl;
    cout << "Select play option >>> ";
    cin >> operation;

    do{
        switch(operation){
            case 2:
                system("cls");
                cout << "Thanks for playing." << endl;
                break;
            
            case 1:
                list<Question> allQuestions = {question1, question2, question3, question4, question5, question6, question7, question8, question9, question10, question11, question12};
                for (Question alpha : allQuestions){
                    cout << "Question " << question_count << "!" << endl;
                    player_score = Startquiz(alpha) + player_score;
                    question_count++;
                }
                break;

                
        }
        if (operation == 1){
            cout << "Congrats " << player_name << " you answered " << question_count << " questions." << endl;
            cout << "You had a total of " << player_score << " points.";
            break;
        }
        break;

    } while (operation != 2);



    return 0;
}