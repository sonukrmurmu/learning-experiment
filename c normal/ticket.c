    #include <stdio.h>
    #include <stdlib.h>
    char station;
    char decisions;
    char G;
    int ticket();
    int decision();
    int main()
    {
    decision();
    return 0;
    }

    int decision()
    {
        while(G != 'G' || decisions != 'N' && decisions != 'Y')
        {
        printf("Enter station name\n");
        printf("select E for ekchari\n");
        printf("select K for kahalgaon\n");
        printf("select S for sahibganj\n");
        printf("select P for patna\n");
        printf("enter Y for yes N for no and change destination for C\n");
            scanf(" %c",&decisions);
            while(1)
            {
                char decisions = 'B';
                scanf(" %c" ,&station);
            if(decisions == 'Y')
            {
                ticket();
                break;
            }
            else if(decisions == 'N')
            {
                break;
            }
            else if(decisions == 'C')
            {
                printf("Going back to selecting station");
                break;
            }
            else{
                printf("Invalid input");
                continue;
            };
        }

            }
            return 0;
    }
    int ticket()
    {
        printf("press G to go to your destination");
                scanf(" %c" ,&G);
                while(1)
                {
                if(G == 'G')
                {
                    printf("you reached your destination");
                    break;
                }
                else
                {
                    printf("Invalid Input\n");
                    scanf("%c",&G);
                   continue;
                };
            }
                return 0;
    }
