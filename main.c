//All operation Calculator with switch Case function in C programming
#include <stdio.h>
#include <stdlib.h>
int main()
{ int Firstnum,Secondnum,Answer;
char opr,option;
do {

    printf("\tChoose an Operator\n");
    printf("'+'for Addition,'-'for Subtraction,'*'for Multiplication,'/'for Division\n");

    scanf("%s",&opr);// store the user input character to opr variable,
    printf(" Enter first Number\n");
    scanf("%d",&Firstnum);// store the user input number to Firstnum variable,
    printf(" Enter Second Number\n");
    scanf("%d",&Secondnum);// store the user input number to Secondnum variable,
    switch(opr){
        case '+':Answer=Firstnum+Secondnum;//if operator is +
    printf("%d + %d = %d\n",Firstnum,Secondnum,Answer);break;

        case '-':Answer=Firstnum-Secondnum;//if operator is -
    printf("%d minus %d = %d\n",Firstnum,Secondnum,Answer);break;

        case '*':Answer=Firstnum*Secondnum;//if operator is *
    printf("%d Multiplied %d = %d\n",Firstnum,Secondnum,Answer);break;

        case '/':Answer=Firstnum/Secondnum;//if operator is /
    printf("%d divided by %d = %d\n",Firstnum,Secondnum,Answer);break;

        default: printf("Invalid selection");//Display this message if operator is none of above
    }

printf("\nDo you want to continue??press Y for yes\n");// ask user to press 'y' to continue
option =getch();

    }
while (option =='y');
getch();

return 0;}

