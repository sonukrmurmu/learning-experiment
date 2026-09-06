#include <stdio.h>
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
    printf("Name : %s \n Father Name : %s\n Mother Name : %s\n Previous School Name : %s\n Address",Name,Fname,Mname,Higher,Adress);
    printf("Your Course is %s\n and minor courses are %s\n  Total fee is %d",totalfee);
    return 0;
}

int courseset()
{
    printf("Choose the course your are interested in\n");
    printf("BCA = %d  BA = %d  BBA %d\n>",BCAfee,BAfee,BBAfee);
    scanf("%49s",&Course);
    printf("You Chose %s",Course);
    if(Course == "BCA")
    {
        totalfee += BCAfee;
        Minor();
    }
    else if(Course == "BA")
    {
       totalfee += BAfee;
       Minor();
    }
    else if(Course == "BBA")
    {
        totalfee += BBAfee;
        Minor();
    }
    else{
        printf("Invalid Input");
    }
}

int Minor()
{
    printf("Want to add Minor Course");
    printf("Type Yes or Skip");
    scanf("%49s",DecisionMinor);
    if(DecisionMinor == "Yes")
    {
        printf("There are Four Minor Course");
        printf("Select Psychology = %d  English = %d   Arts = %d   Finance = %d\n for Skip type Skip",Psy,Eng,Art,Fin);
        printf("Type in Order as given for mutliple selection and proper spelling");
        do{
        CourseSelection();
        printf("Want to Reselect the Course \n Type Yes or Simply hit enter to skip");
        scanf("%49s",Decision2);
        if(Decision2 == "Yes")
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
        printf("Skipping Minor Course Selection");
    }
    return 0;
}


int CourseSelection()
{
    do
    {
    scanf("%49s",DecisionCourse);
    if(DecisionCourse =="Psychology")
    {
        printf("The course fee is %d",Psy);
        totalfee += Psy;
        return 0;
    }
    else if(DecisionCourse == "English")
    {
        printf("The course fee is %d",Eng);
        totalfee += Eng;
        return 0;
    }
    else if(DecisionCourse == "Arts")
    {
        printf("The course fee is %d",Art);
        totalfee += Art;
        return 0;
    }
    else if(DecisionCourse == "Finance")
        {
            printf("The course fee is %d",Fin);
            totalfee += Fin;
            return 0;
        }
    else if(DecisionCourse == "Psychology English")
    {
        printf("The course fee is %d,Psy+Eng");
        totalfee += Psy+Eng;
        return 0;
    }
    else if(DecisionCourse == "Psychology English Art")
     {
        printf("The course fee is %d",Psy+Eng+Art);
        totalfee += Psy+Eng+Art;
        return 0;
     }
    else if(DecisionCourse == "Psychology English Art Finance")
    {
        printf("The course fee is %d",Psy+Eng+Art+Fin);
        totalfee += Psy+Eng+Art+Fin;
        return 0;
    }
    else if(DecisionCourse == "English Art")
    {
        printf("The course fee is %d",Eng+Art);
        totalfee += Eng+Art;
        return 0;
    }
    else if(DecisionCourse == "English Art Finance")
    {
        printf("The course fee is %d",Eng+Art+Fin);
        totalfee += Eng+Art+Fin;
        return 0;
    }
    else if(DecisionCourse == "Art Finance")
    {
        printf("The course fee is %d",Art+Fin);
        totalfee += Art+Fin;
        return 0;
    }
    else if(DecisionCourse == " Skip")
    {
    printf("Skipping");
    return 0;
    }
    else{
        printf("Invalid Input Type Properly");
        printf("Psychology English Art Finance");
    }
    }while(1);
    return 0;
}

int filling()
{   do{
    printf("Proceeding to Filling Information");
    printf("All fields are mandatory");
    printf("Enter your Name");
    fgets(Name,sizeof(Name),stdin);
    printf("Enter your Father Name");
    fgets(Fname,sizeof(Fname),stdin);
    printf("Enter your Mother Name");
    fgets(Mname,sizeof(Mname),stdin);
    printf("Enter your 12th passout School Name");
    fgets(Higher,sizeof(Higher),stdin);
    printf("Enter Your Permanent Adress");
    fgets(Adress,sizeof(Adress),stdin);
    printf("To refill the details type Yes or hit enter to proceed final admission");
    scanf("%49s",Decision3);
    if(Decision3 == "Yes")
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }while(1);
    return 0;
}

