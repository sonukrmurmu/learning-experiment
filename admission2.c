#include <stdio.h>
#include <string.h>

int BCAfee=52000,BAfee=40000,BBAfee=45000;
int Psy=1000,Eng=1500,Art=800,Fin=1200;
int totalfee=0;
char Course[50],DecisionMinor[50],DecisionCourse[50];
char Name[50],Fname[50],Mname[50],Higher[50],Adress[50],Decision2[50],Decision3[50];

int Minor();
int CourseSelection();
int filling();
int courseset();
    
int main()
{
    courseset();
    filling();
    
    printf("\nName : %s \n Father Name : %s\n Mother Name : %s\n Previous School Name : %s\n Address : %s\n",Name,Fname,Mname,Higher,Adress);
    printf("Your Course is %s\n and minor courses are %s\n  Total fee is %d\n", Course, DecisionCourse, totalfee);
    return 0;
}

int courseset()
{
    printf("Choose the course your are interested in\n");
    printf("BCA = %d  BA = %d  BBA %d\n>",BCAfee,BAfee,BBAfee);
    
    fgets(Course,sizeof(Course),stdin);
    Course[strcspn(Course, "\n")] = '\0';
    
    printf("You Chose %s\n",Course);
    
    if(strcmp(Course, "BCA") == 0)
    {
        totalfee += BCAfee;
        Minor();
    }
    else if(strcmp(Course, "BA") == 0)
    {
       totalfee += BAfee;
       Minor();
    }
    else if(strcmp(Course, "BBA") == 0)
    {
        totalfee += BBAfee;
        Minor();
    }
    else{
        printf("Invalid Input\n");
    }
    return 0; 
}

int Minor()
{
    printf("Want to add Minor Course\n");
    printf("Type Yes or Skip\n>");

    fgets(DecisionMinor, sizeof(DecisionMinor), stdin);
    DecisionMinor[strcspn(DecisionMinor, "\n")] = '\0';
    
    if(strcmp(DecisionMinor, "Yes") == 0)
    {
        printf("There are Four Minor Course\n");
        printf("Select Psychology = %d  English = %d   Arts = %d   Finance = %d\n for Skip type Skip\n",Psy,Eng,Art,Fin);
        printf("Type in Order as given for mutliple selection and proper spelling\n");
        do{
            CourseSelection();
            printf("Want to Reselect the Course \n Type Yes or Simply hit enter to skip\n>");
            
            fgets(Decision2, sizeof(Decision2), stdin);
            Decision2[strcspn(Decision2, "\n")] = '\0';
            
            if(strcmp(Decision2, "Yes") == 0)
            {
                return 1;
            }
            else{
                return 0;
            }
        }while(1); 
    }
    else
    {
        printf("Skipping Minor Course Selection\n");
    }
    return 0;
}


int CourseSelection()
{
    do
    {
        printf(">");
        fgets(DecisionCourse,sizeof(DecisionCourse),stdin);
        DecisionCourse[strcspn(DecisionCourse, "\n")] = '\0';
        
        if(strcmp(DecisionCourse, "Psychology") == 0)
        {
            printf("The course fee is %d\n",Psy);
            totalfee += Psy;
            return 0;
        }
        else if(strcmp(DecisionCourse, "English") == 0)
        {
            printf("The course fee is %d\n",Eng);
            totalfee += Eng;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Arts") == 0)
        {
            printf("The course fee is %d\n",Art);
            totalfee += Art;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Finance") == 0)
        {
            printf("The course fee is %d\n",Fin);
            totalfee += Fin;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Psychology English") == 0)
        {
            printf("The course fee is %d\n",Psy+Eng); 
            totalfee += Psy+Eng;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Psychology English Art") == 0)
         {
            printf("The course fee is %d\n",Psy+Eng+Art);
            totalfee += Psy+Eng+Art;
            return 0;
         }
        else if(strcmp(DecisionCourse, "Psychology English Art Finance") == 0)
        {
            printf("The course fee is %d\n",Psy+Eng+Art+Fin);
            totalfee += Psy+Eng+Art+Fin;
            return 0;
        }
        else if(strcmp(DecisionCourse, "English Art") == 0)
        {
            printf("The course fee is %d\n",Eng+Art);
            totalfee += Eng+Art;
            return 0;
        }
        else if(strcmp(DecisionCourse, "English Art Finance") == 0)
        {
            printf("The course fee is %d\n",Eng+Art+Fin);
            totalfee += Eng+Art+Fin;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Art Finance") == 0)
        {
            printf("The course fee is %d\n",Art+Fin);
            totalfee += Art+Fin;
            return 0;
        }
        else if(strcmp(DecisionCourse, "Skip") == 0)
        {
            printf("Skipping\n");
            return 0;
        }
        else{
            printf("Invalid Input Type Properly\n");
            printf("Psychology English Art Finance\n");
        }
    }while(1); 
    return 0;
}

int filling()
{   
    
    do{
        printf("\nProceeding to Filling Information\n");
        printf("All fields are mandatory\n");
        
        printf("Enter your Name: ");
        fgets(Name,sizeof(Name),stdin);
        Name[strcspn(Name, "\n")] = '\0';
        
        printf("Enter your Father Name: ");
        fgets(Fname,sizeof(Fname),stdin);
        Fname[strcspn(Fname, "\n")] = '\0';
        
        printf("Enter your Mother Name: ");
        fgets(Mname,sizeof(Mname),stdin);
        Mname[strcspn(Mname, "\n")] = '\0';
        
        printf("Enter your 12th passout School Name: ");
        fgets(Higher,sizeof(Higher),stdin);
        Higher[strcspn(Higher, "\n")] = '\0';
        
        printf("Enter Your Permanent Address: ");
        fgets(Adress,sizeof(Adress),stdin);
        Adress[strcspn(Adress, "\n")] = '\0';
        
        printf("To refill the details type Yes or hit enter to proceed to final admission: ");
        
        fgets(Decision3, sizeof(Decision3), stdin);
        Decision3[strcspn(Decision3, "\n")] = '\0';
        
        if(strcmp(Decision3, "Yes") == 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }while(1); 
    return 0;
}