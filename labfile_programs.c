#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[5];
    do{
        int n,i,flag=0;  char ch[2]; float a,b,c,f,x1,x2,r; double db;

        printf("\n\t\t1. Check character from ASCII code.");
        printf("\n\t\t2. Check ASCII number from character.");
        printf("\n\t\t3. Check size of any data.");
        printf("\n\t\t4. Find roots of a quadratic equation.");
        printf("\n\t\t5. Find whether number is Even or Odd.");
        printf("\n\t\t6. Check whether the year is a leap year or not.");
        printf("\n\t\t7. Find sum of a GP.");
     //   printf("\n\t\t8. Check whether the entered character is a vowel, other character, number. ");
        printf("\n\n Enter your choice:  ");
        scanf("%d",&n);
        switch(n)
        {
            case 1 : printf("\n\n\t\tEnter the ASCII code:");
                     scanf("%d",&n);
                     printf("\n\t\tCharacter for this code is:%c",n);
                     break;
            case 2 :
                     printf("\n\n\t\tEnter the character :");
                     scanf("%s",&ch);
                     printf("\n\t\tASCII code for this is:%d",ch);
                     break;
            case 3: printf("\n\n\t\t Size of char:   %d bytes", sizeof(ch));
                    printf("\n\n\t\t Size of int:    %d bytes", sizeof(n));
                    printf("\n\n\t\t Size of float:  %d bytes", sizeof(f));
                    printf("\n\n\t\t Size of double: %d bytes ", sizeof(db));
                    break;
            case 4: printf("\n\n\t\t Enter coefficients of quadratic equation:\n a*(x^2)+(b*x)+c\n:");
                    printf("\n\t\tEnter a:");
                    scanf("%d",&a);
                    printf("\n\t\tEnter b:");
                    scanf("%d",&b);
                    printf("\n\t\tEnter c:");
                    scanf("%d",&c);

                    x1= (-b+pow((pow(b,2)-4*a*c),0.5))/(2*a);
                    x2= (-b-pow((pow(b,2)-4*a*c),0.5))/(2*a);
                    printf("\n\n\t\tRoots are:%f  and  %f",x1,x2);
                    break;
           case 5 : printf("\n\n\t\t Enter the number:");
                    scanf("%d",&n);
                    if(n%2==0){
                                printf("\n\t\t--------Even-------");
                    }
                    else
                        printf("\n\t\t--------Odd---------");
                    break;

           case 6 : printf("\n\n\t\t Enter the year:");
                    scanf("%d",&n);
                    for(i=0;i<=1000;i++)
                    {
                        if(n==(2016+(4*i)))
                        {
                            printf("\n\t\t------LEAP year-----------");
                            flag=1;
                            break;

                        }
                        if(n==(2016-(4*i)))
                        {
                            printf("\n\t\t-------LEAP year--------");
                            flag=1;
                            break;
                        }
                        else{
                                continue;

                        }
                    }

                    if(flag==0)
                        printf("\n\t\t---------Not a leap year-------------");

                    break;

            case 7 : printf("\n\n\t\t Series:  a + a*r + a*(r^2) + a*(r^3) + ...........a*(r^n)");
                     printf("\n\n\t\t Enter a:");
                     scanf("%f",&a);
                     printf("\n\t\t Enter r:");
                     scanf("%f",&r);
                     printf("\n\t\t Number of terms (Upto):");
                     scanf("%d",&n);

                     b=(a*(pow(r,n)-1)/(r-1));

                     printf("\n\n\t\t------------Sum is:%f",b);
                     break;

            /* case 8 : printf("\n\n\t\t Enter the character: ");
                      scanf("%s",&ch);
                      if(isalnum(ch)==0)
                        printf("\n\t\t ---------Number");
                      if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
                        printf("\n\t\t----------Vowel");
                      else
                        printf("\n\t\t----------Other character");

                        break; */


            default : printf("\n\n\t--------------------Wrong choice------------------");
        }

        printf("\n\t======================================================Want to enter more (yes/no):");
        scanf("%s",str);

    }while(strcmp(str,"yes")==0);

    return 0;
}
