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
    cout << "Choose 1-3 ->>> ";
    cin >> answer;

    while (answer > 3 && answer < 1){
        cout << "Invalid answer!" << endl;
        cout << "Choose 1-3 ->>> ";
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

    int score = 0;

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

    list<Question> allQuestions = {question1, question2, question3, question4, question5, question6};
    for (Question alpha : allQuestions){
        score = Startquiz(alpha) + score;
    }

    cout << "You had a total of " << score << " points.";



    return 0;
}