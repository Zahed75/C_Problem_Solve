#include <stdio.h>
main()

{
    int sub1,sub2,sub3,sub4,sub5,percentage;
    printf("Enter The Five Value of Respectively: ...******");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    percentage = (sub1+sub2+sub3+sub4+sub5)/5;

    if (percentage <40 )
        printf("You Have Faild.Your Grade is F.");

    else if ((percentage > 40) && (percentage<50))
        printf("You Have Just Passed.Your Grade is D.");

    else if ((percentage > 50) && (percentage<55))
        printf("You Have Just Passed.Your Grade is C.");

    else if ((percentage > 55) && (percentage<60))
        printf("You Have Just Passed.Your Grade is B.");

    else if ((percentage > 60) && (percentage<65))
        printf("You Have Just Passed.Your Grade is B-.");

    else if ((percentage > 65) && (percentage<70))
        printf("You Have Just Passed.Your Grade is B+.");
    else if ((percentage > 70) && (percentage<80))
        printf("You Have Just Passed.Your Grade is A.");

    else
        printf("You Have Just Passed.Your Grade is A+.");

}
