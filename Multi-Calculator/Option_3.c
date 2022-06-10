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

    if(num == 1)
    {
        continue;
    }

    else
    {
        break;
    }

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