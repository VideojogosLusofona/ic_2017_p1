#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char correct;                           //Creating the value of correct answers.
char total;                             //Creating the value of total questions answered.
int num;                                //Creating the variable which will later be used to take the user's input.
char value1;                            //Value which will be used to determine the starting base of the question
char value2;                            //Value which will be used to determine the result base wanted for the question.

int QRNG() {
    unsigned int answer;                //Creates the value of correct answers done.
    unsigned char question = (rand() % 254 + 1);     //Defines the RNG value that is going to be asked to be translated, from 1 to 255.
    value1 = (rand() % 3);              //0 equals octal 1 equals decimal 2 equals hex.
    value2 = (rand() % 2);              //lowest value will always be the lowest base.
    if(value1 == 0) {                   //If octal we check the others.
        if(value2 == 0) {               //Lowest value being decimal in this case we ask decimal.
            int answer;
            printf("\n The value that you are given is %o in base 8 try to turn it into base 10! \n My answer is...", question);
            scanf("%d", &answer);       //We ask the answer in decimal because it is what is required.
            if(answer == question) {
                correct++;              //One more for the counter of correct answers.
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total); /* This shows the ammount
of current answers that were correct but not also the total of them */
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
        if(value2 == 1) {               //Highest value being hex in this case we ask hex.
            printf("\n The value that you are given is %o in base 8 try to turn it into base 16! \n My answer is...", question);
            scanf("%x", &answer);
            if(answer == question) {
                correct++;
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total);
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
    }
    if(value1 == 1) {                   //Decimal being the base of the question.
        if(value2 == 0) {               //Lowest value being octol in this case we ask decimal.
            printf("\n The value that you are given is %d in base 10 try to turn it into base 8! \n My answer is...", question);
            scanf("%o", &answer);
            if(answer == question) {
                correct++;
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total);
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
        if(value2 == 1) {               //Highest value being hex in this we ask hex.
            printf("\n The value that you are given is %d in base 10 try to turn it into base 16! \n My answer is...", question);
            scanf("%x", &answer);
            if(answer == question) {
                correct++;
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total);
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
    }
    if(value1 == 2) {                   // If hex we check the others.
        if(value2 == 0) {               //Lowest value being octal in this case we ask decimal.
            printf("\n The value that you are given is %x in base 16 try to turn it into base 8! \n My answer is...", question);
            scanf("%o", &answer);
            if(answer == question) {
                correct++;
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total);
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
        if(value2 == 1) {               //Highest value being decimal in this case we ask decimal.
            int answer;
            printf("\n The value that you are given is %x in base 16 try to turn it into base 10! \n My answer is...", question);
            scanf("%d", &answer);
            if(answer == question) {
                correct++;
                printf("\n Congrats! You have answered %d questions correctly out of %d \n", correct, total);
            } else if(answer != question) {
                printf("\n Darn! Your total of correct answers was %d out of %d \n", correct, total);
            }
        }
    }
    return 0;
}
int result() {
    if(total == 5) {                      //Determines the answers depending on how many questions asked being in this case 5.
        if(correct == 5) {                //5 answers being correct.
            printf("Damn! You have to be cheating! Joking aside good job!");
        } else if(correct == 4) {         //4 answers being correct.
            printf("Almost perfect keep trying!");
        } else if(correct == 3) {         //3 answers being correct.
            printf("More than halfway through!!");
        } else if(correct == 2) {         //2 answers being correct.
            printf("You got 2 right which means you got it in you!");
        } else if(correct == 1) {         //1 answers being correct.
            printf("You got 1 right you can do it!");
        } else {                          //No answers being correct.
            printf("Did you even try?!?!");
        }
    }
    if(total == 4) {                      //Specifies that there are 4 question that were asked.
        if(correct == 4) {                //4 answers being correct.
            printf("Damn! You have to be cheating! Joking aside good job!");
        } else if(correct == 3) {         //3 answers being correct.
            printf("Almost perfect keep trying!");
        } else if(correct == 2) {         //2 answers being correct.
            printf("If only you didn't screw up those 2!");
        } else if(correct == 1) {         //1 answers being correct.
            printf("You got 1 right you can do it!");
        } else {                          //No answers being correct.
            printf("Did you even try?!?!");
        }
    }
    if(total == 3) {                      //Specifies that there are 3 question that were asked.
        if(correct == 3) {                //3 answers being correct.
            printf("Damn! You have to be cheating! Joking aside good job!");
        } else if(correct == 2) {         //2 answers being correct.
            printf("Almost perfect keep trying!");
        } else if(correct == 1) {         //1 answers being correct.
            printf("You got 1 right you can do it!");
        } else {                          //No answers being correct.
            printf("Did you even try?!?!");
        }
    }
    if(total == 2) {                      //Specifies that there are 2 question that were asked.
        if(correct == 2) {                //2 answers being correct.
            printf("Damn! You have to be cheating! Joking aside good job!");
        } else if(correct == 1) {         //1 answers being correct.
            printf("Technically you got it right half of it!");
        } else {                          //No answers being correct.
            printf("Did you even try?!?!");
        }
    }
    if(total == 1) {                      //Specifies that only 1 question was asked.
        if(correct == 1) {                //1 answers being correct.
            printf("Damn! You have to be cheating! Joking aside good job!");
        } else {                          //No answers being correct.
            printf("Better luck next time!");
        }
    }
	return 0;
}

int main() {
    srand(time(NULL));                          //Defining seed of the RNG
	printf("Welcome to the quiz of converting bases!\n\n");
	printf("How many questions would you like us to ask today? (1-5) ?\n");
	scanf("%d", &num);
	if(num >= 6) {                              // We check if the value given is 6 or greater being invalid values.
        printf("\n We cannot let you do higher than 5!.");
	} else if(num <= 0) {                       //We check if the value given is 0 or lower being invalid values.
        printf("\n This is an invalid number, you should reread what we asked!.");
	} else {
        while(num >= 1) {
            total++;                    //Adding one value to total so it becomes interactive to how many questions were asked up to this point.
            num--;                      //Removing 1 from the variable num so it eventually ticks down to under 1
            QRNG();                     //Calls function QRNG which will handle the RNG elements. And also the rest of the questions.
        }                               //Call the function that will be the skeleton for managing the amount of questions asked and still to ask.
    	result();                       //Call this function to judge the user depending on number of correct answers given.
    }
	return 0;
}
