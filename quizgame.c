#include <stdio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5;
    int point01,point02,point03,point04,point05;
    int total1,total2,total3;

    printf("    Welcome to the Game\n\n");
    printf(">   Press 7 to start\n");
    printf(">   Press 0 to quit\n");

    scanf("%d", &i);
    
    if(i==7){
        printf("The game has started\n\n");
    } else if(i==0){
        printf("The game has ended\n\n");
    } else {
        printf("invalid\n\n");
    }

    if(i==7){
        printf("1) Tyromotion is:\n\n");
        printf("1) Fictional character in a Comic Book.\n");
        printf("2) Leading global automotieve supplier.\n");
        printf("3) Leading global manufacturer of technology-enhanced therapy devices.\n");
        printf("4) Global health and humanitarian relief organisation.\n\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans1);

        if(ans1==3){
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d points\n\n" , point1);
        } else {
            printf("Wrong Answer\n");
            point01 = 0;
            printf("You have scored %d points\n\n", point01);
        }
        printf("2) Headquater office is based in:\n\n");
        printf("1) Graz.\n");
        printf("2) Munich.\n");
        printf("3) Bern.\n");
        printf("4) Berlin.\n\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans2);

        if(ans2==1){
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d points\n\n" , point2);
        } else {
            printf("Wrong Answer\n");
            point02 = 0;
            printf("You have scored %d points\n\n", point02);
        }

        printf("3) When was Tyromotion founded?\n\n");
        printf("1) 2000.\n");
        printf("2) 2007.\n");
        printf("3) 2011.\n");
        printf("4) 2019.\n\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans3);

        if(ans3==2){
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d points\n\n" , point3);
        } else {
            printf("Wrong Answer\n");
            point03 = 0;
            printf("You have scored %d points\n\n", point03);
        }

        printf("4) How many employees does Tyromotion have?\n\n");
        printf("1) Less than 20 employees.\n");
        printf("2) More than 50 employees.\n");
        printf("3) More than 100 employees.\n");
        printf("4) More than 200 employees.\n\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans4);

        if(ans4==3){
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d points\n\n" , point4);
        } else {
            printf("Wrong Answer\n");
            point04 = 0;
            printf("You have scored %d points\n\n", point04);
        }

        printf("5) Which of the listed products is form Tyromotion?\n\n");
        printf("1) Tyroman.\n");
        printf("2) Marco.\n");
        printf("3) Alfa.\n");
        printf("4) Diego.\n\n");

        printf("Enter Your Answer: ");
        scanf("%d", &ans5);

        if(ans5==4){
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have scored %d points\n\n" , point5);
        } else {
            printf("Wrong Answer\n");
            point05 = 0;
            printf("You have scored %d points\n\n", point05);
        }
    }
    return 0;

}

