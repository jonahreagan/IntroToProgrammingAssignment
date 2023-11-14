#include <stdio.h>
#include <stdlib.h>

int main()
{
    char regnumber[30];
    printf("Enter your Registration number\n");
    scanf("%s",&regnumber);
    printf("your registration number is %s\n",regnumber);

    char firstname[30];
    printf("Enter your First Name\n");
    scanf("%s",&firstname);
    printf("Your First Name is %s\n",firstname);

    char lastname[20];
    printf("Enter your Last Name\n");
    scanf("%s",&lastname);
    printf("Your Last Name is %s\n",lastname);

    float introtoprogramming;
    printf("Enter intro to Programming score\n");
    scanf("%f",&introtoprogramming);
    printf("Your Intro to Programming score is %f\n",introtoprogramming);

    float networking;
    printf("Enter Networking score\n");
    scanf("%f",&networking);
    printf("Your Networking is %f\n",networking);

    float accounting;
    printf("Enter Accounting score\n");
    scanf("%f",&accounting);
    printf("Your Accounting score is %f\n",accounting);

    float OS;
    printf("Enter OS score\n");
    scanf("%f",&OS);
    printf("Your OS is %f\n",OS);

    float compapplications;
    printf("Enter Computer Applications\n");
    scanf("%f",&compapplications);
    printf("Your Computer Applications is %f\n",compapplications);


    return 0;
}
