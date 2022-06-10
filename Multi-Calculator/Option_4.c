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