#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef _WIN32 // do not change anything in these lines
    #include <windows.h>
    #define sleep(sec) Sleep(sec * 1000) //to convert milisec into sec
#else //this is not an error, do not change
    #include<unistd.h>
#endif  /*upto this, these lines for sleep command to work cross-platform,
        no errors in that eighther*/

//              ^^^
// header files |||

int main(){

    //variables
    int mainmenuchoice1, dimensionchoice1, twodshapechoice;
    char quitchoice;

    mainmenu:
    //content table
    printf("---------------------------------------------------------------------------\n");
    printf("|                         CALCULATE UNTIL YOU CRY                         |\n");
    printf("|                                                                         |\n");
    printf("|                            SELECT AN OPTION                             |\n");
    printf("|                                                                         |\n");
    printf("|   1) Mensuration         2) Unit Converter     3) Interest Calculator   |\n");
    printf("|                                                                         |\n");
    printf("|   4) Trigonometry        5) Statistics         6) Probability           |\n");
    printf("|                                                                         |\n");
    printf("|                             99 QUIT                                     |\n");
    printf("---------------------------------------------------------------------------\n");
    //user input
    printf("YOUR CHOICE : ");
    scanf("%d", &mainmenuchoice1);

    //decision ladder

    if (mainmenuchoice1 == 1){
        dimension:
        printf("---------------------------------------------------------------------------\n");
        printf("|                           SELECT A DIMENSION                            |\n");
        printf("|                                                                         |\n");
        printf("|                            SELECT AN OPTION                             |\n");
        printf("|                                                                         |\n");
        printf("|                 1) 2D                           2) 3D                   |\n");
        printf("|                                                                         |\n");
        printf("|                         99) Back to Main Menu                           |\n");
        printf("---------------------------------------------------------------------------\n");

        printf("YOUR CHOICE : ");
        scanf("%d", &dimensionchoice1);
        //2d shapes
        if (dimensionchoice1 == 1){
            printf("---------------------------------------------------------------------------\n");
            printf("|                         CALCULATE UNTIL YOU CRY                         |\n");
            printf("|                                                                         |\n");
            printf("|                            SELECT AN OPTION                             |\n");
            printf("|                                                                         |\n");
            printf("|   1) Square                 2) Rectangle             3) Circle          |\n");
            printf("|                                                                         |\n");
            printf("|   4) Triangle           5) Equilateral Triangle      6) Parallelogram   |\n");
            printf("|                                                                         |\n");
            printf("|   7) Trapezium            8) Regular Pentagon        9)Rhombus          |\n");
            printf("|                                                                         |\n");
            printf("|   10) Ellipse                                                           |\n");
            printf("|                             99) Back                                    |\n");
            printf("---------------------------------------------------------------------------\n");
            printf("YOUR CHOICE : ");
            scanf("%d", &twodshapechoice);
                switch (twodshapechoice)
                {
                    case 1:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;
                        
                    case 2:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 3:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Circumference |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 4:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                     3) Altitude                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 5:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                     3) Altitude                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 6:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 7:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 8:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 9:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 10:
                    printf("----------------------------------------------------------\n");
                    printf("|                  SELECT AN OPTION                      |\n");
                    printf("|                                                        |\n");
                    printf("|     1) Area                           2) Perimeter     |\n");
                    printf("|                                                        |\n");
                    printf("|                99) Back to Main Menu                   |\n");
                    printf("----------------------------------------------------------\n");
                    break;

                    case 99:
                    goto dimension;
                    break;
                }


        }
        //3d shapes
        else if (dimensionchoice1 == 2){

            printf("---------------------------------------------------------------------------\n");
            printf("|                         CALCULATE UNTIL YOU CRY                         |\n");
            printf("|                                                                         |\n");
            printf("|                            SELECT AN OPTION                             |\n");
            printf("|                                                                         |\n");
            printf("|   1) Cube                     2) Cuboid          3) Sphere              |\n");
            printf("|                                                                         |\n");
            printf("|   4) Hemisphere              5) Cylinder         6) Cone                |\n");
            printf("|                                                                         |\n");
            printf("|   7) Frustum of Cone          8) Pyramid         9)Rectangular Pyramid  |\n");
            printf("|                                                                         |\n");
            printf("|   10) General Prism           11) Torus                                 |\n");
            printf("|                                                                         |\n");
            printf("|                             99) Back                                    |\n");
            printf("---------------------------------------------------------------------------\n");


        }
        //exit
        else if (dimensionchoice1 == 99){
            goto mainmenu;
        }
        //for error
        else{
            printf("ERROR, PLEASE INPUT CORRECT VALUE !!!!!!!!!!\n");
            sleep(3);
            printf("\033[H\033[J"); //this line for clearing screen cross platform, do not modify or erase
            goto dimension;
        }



    }
    else if (mainmenuchoice1 == 2){

    }
    else if (mainmenuchoice1 == 3){

    }
    else if (mainmenuchoice1 == 4){

    }
    else if (mainmenuchoice1 == 5){

    }
    else if (mainmenuchoice1 == 6){

    }
    //quit
    else if (mainmenuchoice1 == 99){
        printf("ARE YOU SURE YOU WANT TO QUIT???\nPress Y/N\n");
        scanf(" %c", &quitchoice);
            if (quitchoice == 'Y'|| quitchoice == 'y'){
                exit(0);
            }
            else if (quitchoice == 'N'|| quitchoice == 'n'){
                goto mainmenu;
            }
            else{
                printf("ERROR, PLEASE INPUT CORRECT VALUE !!!!!!!!!!\n");
                sleep(3);
                printf("\033[H\033[J"); //this line for clearing screen cross platform, do not modify or erase
                goto mainmenu;
            }
    }
    //for error
    else{
        printf("ERROR, PLEASE INPUT CORRECT VALUE !!!!!!!!!!\n");
        sleep(3);
        printf("\033[H\033[J"); //this line for clearing screen cross platform, do not modify or erase
        goto mainmenu;
    }



return 0;
}