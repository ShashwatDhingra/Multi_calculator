correct:
        printf("\n----------------------------------------------");
        printf("\nTo perform any other Calculation ? Press '1' :\n");
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