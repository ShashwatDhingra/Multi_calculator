// Project : Multi-Calculator

#include <stdio.h>
#include <math.h>
int Option1(int x, char opr, int y); // Option 1. - Funciton Prototype
int Option2();
int Option3();
int Option4();
int Option5();
int main()
{
    int opr, op, again, res; // Declaring needed Variables
    long int x, y;

    printf("\t \t \t -------------------------Welcome to Multi-Calculator---------------------\n");

    /* Asking for Choosing Option */

main_menu:

    printf("Input [1] For Basic Calculator.\n");
    printf("Input [2] For  Checking the Number.\n");
    printf("Input [3] For Power or Root.\n");
    printf("Input [4] For Converting day/week/month/year any to any.\n");
    printf("Input [5] for calculate GST.\n");
    printf("Input [6] For EXIT the Program.\n \n");

    printf("Enter the Number according to Option : ");
    scanf("%d", &op);

    /* Main Switch Statement for Performing Calculation According to the need of User.*/

    switch (op)
    {
    case (1):
    {

    again_1:

        printf("\n");

        printf("Input the Statement for calculation.    \t \t   eg. 7+7 \n");
        printf("\n");
        scanf("%ld %c %ld", &x, &opr, &y);
        Option1(x, opr, y);

    correct:
        printf("\n----------------------------------------------");
        printf("\nTo perform any other Calculation ? Press '1' :\n");
        printf("Go to Main menu ? Press '2' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_1;
        }

        else if (again == 2)
        {
            printf("\n");
            goto main_menu;
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct;
        }
    }
    break;

    case (2):
    {

        printf("\n");

        res = Option2();

        if (res == 0)
        {
            return (0);
        }

        else if (res == 3)
        {
            goto main_menu;
        }

        printf("\n \n");
    }
    break;

    case (3):
    {
        printf("\n");

        res = Option3();

        if (res == 0)
        {
            return (0);
        }

        else if (res == 3)
        {
            goto main_menu;
        }
    }
    break;

    case (4):
    {
        printf("\n");

        res = Option4();

        if (res == 0)
        {
            return (0);
        }

        else if (res == 2 || res == 3)
        {
            goto main_menu;
        }
    }
    break;

    case(5):
    {
        printf("\n");

        res = Option5();

        if(res == 0)
        {
            return(0);
        }

        else if(res == 3)
        {
            goto main_menu;
        }

    }
    break;

    case(6):
    {
        printf("THANKS! FOR USING ");
    }
    break;

    default:
    {
        printf("\n");
        printf("Please enter Valid Option!\n\n");
        goto main_menu;
    }
    break;
    }

    return 0;
}

int Option1(int x, char opr, int y) // Option 1. - Funciton Definition
{
    int result;

    if (opr == '/')
    {
        result = x / y;
        printf("Result = %d\n\n", result);
    }

    else if (opr == '*')
    {
        result = x * y;
        printf("Result = %d\n\n", result);
    }

    else if (opr == '+')
    {
        result = x + y;
        printf("Result = %d\n\n", result);
    }

    else if (opr == '-')
    {
        result = x - y;
        printf("Result = %d\n\n", result);
    }

    else if (opr == '%')
    {
        result = x % y;
        printf("Result = %d\n\n", result);
    }

    else
    {
        printf("Please Input the Correct Operator. \n\n");
    }
}

int Option2()

{
    int op, i, num, prime, reverse = 0, rem, n, again, div = 0, temp = 0, arm = 0, sum = 0; // Declaring Needed Elements

menu:

    printf("Input '1' to Check Weather the Number is Prime. \n");
    printf("Input '2' to Check Weather the Number is Palindrome. \n");
    printf("Input '3' to Check Weather the Number is Armstrong. \n");
    printf("Input '4' to Check Weather the Number is Perfect. \n");
    printf("Input '5' to Check Weather the Number is Strong. \n");

    printf("\n");

    printf("Input the Number to perform Specific Operation : ");
    scanf("%d", &op);

    printf("\n");

    switch (op)
    {
    case (1):
    {

    again_1:

        i = 2;
        prime = 1;

        printf("Enter the Number you want to Check : ");
        scanf("%d", &num);

        // Condition If number is not prime

        while (i <= num / 2)
        {
            if (num % i == 0)
            {

                prime = 0;

                break;
            }
            i++;
        }

        printf("\n");

        if (prime == 1)
        {

            printf("Yes, %d is  prime", num);
        }

        else
        {
            printf("No, %d is not prime.", num);
        }

    menu_1:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_1;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto menu_1;
        }
    }

    case (2):
    {
    again_2:

        printf("Enter the Number you want to Check for Palindrome : ");
        scanf("%d", &num);

        n = num;
        reverse = 0;
        rem = 0;

        while (n != 0)
        {
            rem = n % 10;
            reverse = (reverse * 10) + (rem);
            n = n / 10;
        }

        printf("\n");
        printf("\n");

        if (num == reverse)
        {
            printf("%d is Palindrome.", num);
        }

        else
        {
            printf("%d is not Palindrome.", num);
        }

    menu_2:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_2;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto menu_2;
        }
    }

    case (3):
    {

    again_3:

        div = 0, arm = 0;

        printf("Enter the Number you want to check for Armstrong : ");
        scanf("%d", &num);

        // Define an variable as input of user to use it in last.
        temp = num;

        // Condition.
        while (num != 0)
        {

            // Take last number aside to make (cube) of it.

            div = num % 10; // 153 % 10 = 3

            // Main formula

            arm = arm + (div * div * div); // 0 + (3*3*3) -- // 27 + (5*5*5)

            // Divide 10 with input to remove last used digit.

            num = num / 10; // 153 = 15
        }

        printf("\n");
        printf("\n");

        if (arm == temp)
        {
            printf("Yes It's a Armstrong Number.");
        }

        else
        {
            printf("No It's not a Armstrong Number.");
        }

    menu_3:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_3;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto menu_3;
        }
    }

    case (4):
    {
    again_4:

        sum = 0;

        printf("Enter the Number : ");
        scanf("%d", &num);

        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

    menu_4:

        printf("\n");
        printf("\n");

        if (sum == num)
        {
            printf("Yes, %d is a Perfect Number.", num);
        }

        else
        {
            printf("No, %d is not a Perfect Number.", num);
        }

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_4;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto menu_4;
        }
    }

    case (5):
    {
    again_5:

        printf("Enter the Number you want to check for Strong Number : ");
        scanf("%d", &num);

        int num2, mul;
        sum = 0;
        div = 0;

        num2 = num;

        while (num != 0)
        {

            div = num % 10; // 145 % 10 = 5 , Now we've to check factorial of '5'.

            mul = 1;

            while (div != 0)
            { //

                mul = mul * div; // 1 = 1 * 5 = 5 , 5 = 5 * 4,...

                div = div - 1; // 5 - 1 = 4;
            }

            sum = sum + mul;

            num = num / 10;
        }

        printf("\n");

        if (sum == num2)
        {
            printf("%d is strong Number.", num2);
        }

        else
        {
            printf("%d is not a strong Number.", num2);
        }

    menu_5:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_5;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto menu_5;
        }
    }

    default:
    {
        printf("\n");
        printf("Please choose Valid Option!\n\n");
        goto menu;
    }
    }
}

int Option3()
{

    int op, base, pow_, again;
    float num;

menu_1:

    printf("Input [1] for Power to any Number.\n");
    printf("Input [2] to Find Root of any Number.");

    printf("Input : ");
    scanf("%d", &op);

    printf("\n");

    switch (op)
    {
    case (1):
    {
    again_1:

        printf("Enter the Base Number : ");
        scanf("%d", &base);

        printf("Enter the Power Number : ");
        scanf("%d", &pow_);

        num = pow(base, pow_);

        printf("%d to the power %d = %.f", base, pow_, num);

    correct_1:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_1;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu_1;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto correct_1;
        }
    }
    break;

    case (2):
    {
    again_2:

        printf("Enter the Number : ");
        scanf("%d", &base);

        num = sqrt(base);

        printf("Root of %d = %.2f", base, num);

    correct_2:

        printf("\n");
        printf("\n");
        printf("\n----------------------------------------------");
        printf("\nTo Check any other Number? Press '1' :\n");
        printf("Go to Previous Menu? Press '2'\n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\n");
            printf("Thanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_2;
        }

        else if (again == 2)
        {
            printf("\n");
            goto menu_1;
        }

        else if (again == 3)
        {
            return (3);
        }

        else
        {
            printf("Please Input correct Number! ");
            goto correct_2;
        }
    }
    break;

    default:
    {
        printf("Please Enter correct Number! ");
        printf("\n");
        printf("\n");
        goto menu_1;
    }
    }
}

int Option4()
{

    // I assume that Days in month is 30 and Days in Year is 365

    int day, month, week, year, from, to, res, rem_days, again; // Declaring Needed Variables rem_days = Remaning_Days

main_menu:

    printf("What 'to' Change 'from' what ?\n\n");
    printf("From ?\n");
    printf("Press 1 to Select 'Day'.\n");
    printf("Press 2 to Select 'Week'.\n");
    printf("Press 3 to Select 'Month'.\n");
    printf("Press 4 to Select 'Year'.\n");
    printf("Input : ");
    scanf("%d", &from);
    printf("\n");

    printf("To ?\n");
    printf("Press 1 to Select 'Day'.\n");
    printf("Press 2 to Select 'Week'.\n");
    printf("Press 3 to Select 'Month'.\n");
    printf("Press 4 to Select 'Year'.\n");
    printf("Input : ");
    scanf("%d", &to);

    if (from == 1) // day
    {

        if (from == 1 && to == 1)
        {
            printf("You are Converting Day to Day :)");
        }

        if (from == 1 && to == 2) // day to week
        {

        again_01:

            printf("\n");
            printf("Enter the Number of Days :  ");
            scanf("%d", &day);
            printf("\n");

            week = 0;
            rem_days = 0;

            week = (day % 365) / 7;
            rem_days = day - (week * 7);
            if (rem_days == 0)
            {
                printf("No of Week : %d", week);
            }
            else
            {
                printf("No of Week : %d\nNo of Days : %d", week, rem_days);
            }
        }

        else if (from == 1 && to == 3) // day to month
        {
        again_02:

            printf("\n");
            printf("Enter the Number of Days :  ");
            scanf("%d", &day);
            printf("\n");

            month = 0;
            week = 0;
            year = 0;
            rem_days = 0;

            month = day / 30;
            rem_days = day - (month * 30);

            if (rem_days == 0)
            {
                printf("No. of Month : %d", month);
            }

            else if (rem_days > 0 && rem_days < 7)
            {

                // printf("No of Month : %d\n", month);
                // printf("No of Days : %d", rem_days);

                printf("%d Month and %d Days", month, rem_days);
            }
            else if (rem_days >= 7 && rem_days <= 30)
            {
                week = (rem_days % 365) / 7;
                rem_days = rem_days - (week * 7);

                if (rem_days == 0)
                {
                    // printf("No. of Month : %d\n", month);
                    // printf("No. of Week : %d\n", week);

                    printf("%d Month and %d Week", month, week);
                }

                else if (rem_days > 0 && rem_days < 7)
                {
                    // printf("No. of Month : %d\n", month);
                    // printf("No of Week : %d\n", week);
                    // printf("No of Days : %d", rem_days);

                    printf("%d Month, %d Week and %d Days", month, week, rem_days);
                }
            }
        }

        else if (from == 1 && to == 4) // day to year
        {

        again_03:

            printf("\n");
            printf("Enter the Number of Days :  ");
            scanf("%d", &day);
            printf("\n");

            month = 0;
            week = 0;
            year = 0;
            rem_days = 0;

            year = day / 365;
            rem_days = day - (year * 365);

            if (rem_days == 0)
            {
                printf("\nNo of Year : %d\n", year);
            }

            else if (rem_days > 0)
            {
                if (rem_days < 30)
                {
                    week = (rem_days % 365) / 7;
                    rem_days = day - ((year * 365) + (week * 7));
                    if (rem_days == 0)
                    {
                        printf("\nNo of Year : %d\n", year);
                        printf("No of Week : %d\n", week);
                    }
                    else
                    {
                        printf("\nNo of Year : %d\nNo of Week : %d\nNo of Days : %d", year, week, rem_days);
                    }
                }

                else if (rem_days >= 30)
                {
                    month = rem_days / 30;
                    rem_days = rem_days - (month * 30);

                    if (rem_days == 0)
                    {
                        printf("No of Year : %d\n", year);
                        printf("No of Months : %d", month);
                    }

                    else if (rem_days > 0 && rem_days < 7)
                    {
                        printf("No of year : %d\n", year);
                        printf("No of Month : %d\n", month);
                        printf("No of Days : %d", rem_days);
                    }
                    else if (rem_days >= 7 && rem_days <= 30)
                    {
                        week = (rem_days % 365) / 7;
                        rem_days = rem_days - (week * 7);

                        if (rem_days == 0)
                        {
                            printf("No of year : %d\n", year);
                            printf("No. of Month : %d\n", month);
                            printf("No. of Week : %d\n", week);
                        }

                        else if (rem_days > 0 && rem_days < 7)
                        {
                            printf("No of year : %d\n", year);
                            printf("No. of Month : %d\n", month);
                            printf("No of Week : %d\n", week);
                            printf("No of Days : %d", rem_days);
                        }
                    }
                }
            }
        }
    correct_01:
        printf("\n\n----------------------------------------------");
        printf("\nTo perform again ? Press '1' :\n");
        printf("Go to Previous Menu? Press '2' : \n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");

            if (to == 1)
            {
                printf("You are again Converting Day to Day :) That make No sense. :/\n");
                printf("--------------------------------------------------------------------------\n");
                goto main_menu;
            }

            if (to == 2)
            {
                goto again_01;
            }

            else if (to == 3)
            {
                goto again_02;
            }

            else if (to == 4)
            {
                goto again_03;
            }
        }

        else if(again == 2)
        {
            printf("\n");
            goto main_menu;
            printf("\n");
        }

        else if (again == 3)
        {
            printf("\n");
            return (3);
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct_01;
        }
    }

    else if (from == 2) // week
    {
        if (from == 2 && to == 1) // week to days
        {
        again_11:
            printf("\n");
            printf("\nEnter the Number of Week : ");
            scanf("%d", &week);

            day = week * 7;

            printf("\nNo of Days : %d", day);
        }

        else if (from == 2 && to == 2)
        {
            printf("You are Converting Week to Week :)");
        }

        else if (from == 2 && to == 3) // week to month
        {
        again_12:
            printf("\n");
            printf("\nEnter the Number of Week : ");
            scanf("%d", &week);

            day = week * 7;

            if (day < 30)
            {
                printf("\n");
                printf("%d Week doesn't make a Complete Month!\n", week);
                printf("\nNo of Days : %d", day);
            }

            else if (day >= 30)
            {
                month = day / 30;
                rem_days = day - (month * 30);

                printf("No of Month : %d\n", month);
                printf("No of Days : %d", rem_days);
            }
        }

        else if (from == 2 && to == 4) // week to year
        {
        again_13:
            printf("\n");
            printf("\nEnter the Number of Week : ");
            scanf("%d", &week);

            day = week * 7;
            month = day / 30;
            year = day / 365;
            rem_days = day - (year * 365);

            if (day < 365)
            {
                printf("\n");
                printf("%d Week doesn't make a Complete Year!\n", week);
                printf("No of Month : %d", month);
                printf("\nNo of Days : %d", day);
            }

            else if (day >= 365)
            {
                if (rem_days < 30)
                {
                    printf("No of Year : %d\n", year);
                    printf("No of Days : %d", rem_days);
                }

                else if (rem_days >= 30)
                {
                    month = rem_days / 30;
                    rem_days = rem_days - (month * 30);

                    printf("No of Year : %d\n", year);
                    printf("No of Month : %d\n", month);
                    printf("No of Days : %d\n", rem_days);
                }
            }
        }

    correct_02:
        printf("\n\n----------------------------------------------");
        printf("\nTo perform again ? Press '1' :\n");
        printf("Go to Previous Menu? Press '2' : \n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");

            if (to == 1)
            {
                goto again_11;
            }

            else if (to == 2)
            {
                printf("\nYou are again Converting Week to Week :) That make No sense. :/\n");
                printf("--------------------------------------------------------------------------\n");
                goto main_menu;
            }

            else if (to == 3)
            {
                goto again_12;
            }

            else if (to == 4)
            {
                goto again_13;
            }
        }

        else if(again == 2)
        {
            printf("\n");
            goto main_menu;
            printf("\n");
        }

        else if (again == 3)
        {
            printf("\n");
            return (3);
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct_02;
        }
    }

    else if (from == 3) // Month
    {

        if (from == 3 && to == 1) // month to days
        {
        again_21:

            printf("\nEnter the Number of Month : ");
            scanf("%d", &month);

            day = month * 30;

            printf("No of Days : %d", day);
        }
        else if (from == 3 && to == 2) // month to week
        {
        again_22:
            printf("\nEnter the Number of Month : ");
            scanf("%d", &month);

            day = month * 30;

            week = (day % 365) / 7;
            rem_days = day - (week * 7);

            // printf("No of Week : %d", week);
            // printf("No of Days : %d", rem_days);
            printf("%d Week and %d days", week, rem_days);
        }

        else if (from == 3 && to == 3)
        {
            printf("You are Converting Month to Month :)");
        }

        else if (from == 3 && to == 4) // month to year
        {
        again_23:

            printf("\nEnter the Number of Month : ");
            scanf("%d", &month);

            day = month * 30;

            if (day < 360)
            {
                printf("%d Month not Making a Complete year.", month);
            }

            else if (day >= 360)
            {
                year = day / 360;
                rem_days = day - (year * 360);

                if (rem_days == 0)
                {
                    printf("No of Year : %d", year);
                }

                else
                {
                    printf("%d Year and %d Days", year, rem_days);
                }
            }
        }

    correct_03:
        printf("\n\n----------------------------------------------");
        printf("\nTo perform again ? Press '1' :\n");
        printf("Go to Previous Menu? Press '2' : \n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");

            if (to == 1)
            {
                goto again_21;
            }

            else if (to == 2)
            {
                goto again_22;
            }

            else if (to == 3)
            {
                printf("\nYou are again Converting Month to Month :) That make No sense. :/\n");
                printf("--------------------------------------------------------------------------\n");
                goto main_menu;
            }

            else if (to == 4)
            {
                goto again_23;
            }
        }

        else if(again == 2)
        {
            printf("\n");
            goto main_menu;
            printf("\n");
        }

        else if (again == 3)
        {
            printf("\n");
            return (3);
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct_03;
        }
    }

    else if (from == 4) // Year
    {

        if (from == 4 && to == 1) // year to days
        {
        again_31:
            printf("Enter the Number of Year : ");
            scanf("%d", &year);

            day = year * 365;

            printf("%d Days in %d Year", day, year);
        }
        else if (from == 4 && to == 2) // year to week
        {
        again_32:
            printf("Enter the Number of Year : ");
            scanf("%d", &year);

            day = year * 365;

            week = day / 7;
            rem_days = day - (week * 7);

            printf("%d week and %d Days", week, rem_days);
        }
        else if (from == 4 && to == 3) // year to month
        {
        again_33:
            printf("Enter the Number of Year : ");
            scanf("%d", &year);

            day = year * 365;

            month = day / 30;
            rem_days = day - (month * 30);

            if (rem_days < 7)
            {
                printf("%d Month and %d Days", month, rem_days);
            }

            else
            {
                week = rem_days / 7;
                rem_days = rem_days - (week * 7);

                printf("%d Month, %d Week and %d Days", month, week, rem_days);
            }
        }

        else if (from == 4 && to == 4)
        {
            printf("You are Converting Year to Year :)");
        }

    correct_04:
        printf("\n\n----------------------------------------------");
        printf("\nTo perform again ? Press '1' :\n");
        printf("Go to Previous Menu? Press '2' : \n");
        printf("Go to Main menu ? Press '3' :\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");

            if (to == 1)
            {
                goto again_31;
            }

            else if (to == 2)
            {
                goto again_32;
            }

            else if (to == 3)
            {
                goto again_33;
            }

            else if (to == 4)
            {
                printf("\nYou are again Converting Year to Year :) That make No sense. :/\n\n");
                printf("--------------------------------------------------------------------------\n");
                goto main_menu;
            }
        }

        else if(again == 2)
        {
            printf("\n");
            goto main_menu;
            printf("\n");
        }

        else if (again == 3)
        {
            printf("\n");
            return (3);
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct_04;
        }
    }

    else if(from > 4 || to > 4)
    {
        printf("\nPlease Input Correct Options! \n");

    correct_05:
        printf("\n----------------------------------------------\n");
        printf("Go to Previous Menu ? Press '1' : \n");
        printf("Go to Main menu ? Press '2' :\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");
        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");

            goto main_menu;
        }

        else if (again == 2)
        {
            printf("\n");
            return (2);
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct_05;
        }
    }
}

int Option5()
{
    float amnt, gst, cgst_sgst, net_amnt; 
    int op, again;

again_2:

    printf("Enter the Original Price : ");
    scanf("%f", &amnt);

menu:
again_1:
    printf("Select Rate of Interest of GST.\n\n");
    printf("Enter 1 to Select 3%% Rate of GST.\n");
    printf("Enter 2 to Select 5%% Rate of GST.\n");
    printf("Enter 3 to Select 12%% Rate of GST.\n");
    printf("Enter 4 to Select 18%% Rate of GST.\n");
    printf("Enter 5 to Select 28%% Rate of GST.\n\n");

    scanf("%d", &op);
    printf("\n");

        switch (op)
        {
        case(1):
        {
        gst = (amnt * 3) / 100;
        cgst_sgst = gst / 2;
        net_amnt = amnt + gst;
        printf("Original Price : %.2f\n", amnt);
        printf("Net Price : %.2f\n", net_amnt);
        printf("CGST/SGST : %.2f\n", cgst_sgst);
        printf("-------------------------------------------\n");
        }
        break;

        case(2):
        {
        gst = (amnt * 5) / 100;
        cgst_sgst = gst / 2;
        net_amnt = amnt + gst;
        printf("Original Price : %.2f\n", amnt);
        printf("Net Price : %.2f\n", net_amnt);
        printf("CGST/SGST : %.2f\n", cgst_sgst);
        printf("-------------------------------------------\n");
        
        }
        break;

        case(3):
        {
        gst = (amnt * 12) / 100;
        cgst_sgst = gst / 2;
        net_amnt = amnt + gst;
        printf("Original Price : %.2f\n", amnt);
        printf("Net Price : %.2f\n", net_amnt);
        printf("CGST/SGST : %.2f\n", cgst_sgst);
        printf("-------------------------------------------\n");
        
        }
        break;

        case(4):
        {
        gst = (amnt * 18) / 100;
        cgst_sgst = gst / 2;
        net_amnt = amnt + gst;
        printf("Original Price : %.2f\n", amnt);
        printf("Net Price : %.2f\n", net_amnt);
        printf("CGST/SGST : %.2f\n", cgst_sgst);
        printf("-------------------------------------------\n");

        }
        break;

        case(5):
        {
        gst = (amnt * 28) / 100;
        cgst_sgst = gst / 2;
        net_amnt = amnt + gst;
        printf("Original Price : %.2f\n", amnt);
        printf("Net Price : %.2f\n", net_amnt);
        printf("CGST/SGST : %.2f\n", cgst_sgst);
        printf("-------------------------------------------\n");

        }
        break;
        
        default:
        {
            printf("Select any Correct Option!");
            goto menu;
        }
            break;
        }
        
correct:

        printf("\nTo Change Rate Of GST ? Press '1' :\n");
        printf("To Enter New Amount ? Press '2' :\n");
        printf("Go to Main Menu ? Press '3'\n\n");
        printf("EXIT PROGRAM ? Press '0'\n\n");

        printf("Input : ");
        scanf("%d", &again);

        if (again == 0)
        {
            printf("\nThanks For Using !\n\n");
            return (0);
        }

        else if (again == 1)
        {
            printf("\n");
            goto again_1;
        }

        else if(again == 2)
        {
            printf("\n");
            goto again_2;
        }

        else if (again == 3)
        {
            printf("\n");
            return(3); 
        }

        else
        {
            printf("Please Input Valid character.\n");
            goto correct;
        }


}