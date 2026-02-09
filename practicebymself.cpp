#include <iostream>

int main(){
    int score;
    char grade;
    std::cout << "Enter your score(0~100): ";
    std::cin >> score;
    if(score <= 100 && score >= 0){
            if(score >= 90){
                grade = 'A';
            }
            else if(score >= 80){
                grade = 'B';
            }
            else if(score >= 70){
                grade = 'C';
            }
            else if(score >= 60){
                grade = 'D';
            }
            else{
                grade = 'F';
            }
        std::cout << "Your grade is " << grade;
    }
    else{
        std::cout << "Please enter a valid score.";
    }


    return 0;
}