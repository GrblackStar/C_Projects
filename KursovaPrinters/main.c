#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cartridge1=200.00;
    float cartridge2=200.00;
    float cartridge3=200.00;
    float cartridge4=200.00;

    float ord;
    float paper;
    paper=1.00;
    float thingToPrint;

    float cyanPercent;
    float magentaPercent;
    float yellowPercent;

    float colorSummary;

    float cyanInk;
    float magentaInk;
    float yellowInk;


    while (1){
    printf ("Enter Print to turn on the printer, or EXIT, to turn off the printer: ");
    char startingCommand[5];
    scanf ("%s", &startingCommand);
    if (strcmp(startingCommand, "EXIT")==0)
        break;
    else if (strcmp(startingCommand, "Print")==0)
    {




    printf ("Choose between smooth, ordinary and rough paper texture: ");
    char smoothness[10];
    scanf ("%s", &smoothness);
    if (strcmp(smoothness, "ordinary")==0)
        {ord=1;}
        else if (strcmp(smoothness, "smooth")==0)
        {
            ord = paper - paper*0.1;
        }
    else if(strcmp(smoothness, "rough")==0)
        {
           ord= paper + paper*0.15;
        }



    printf ("Choose saturation between 70%% and 120%%: ");
    int saturation;
    int j;
    scanf ("%d", &saturation);
    if(saturation>100)
    {
        j=(saturation-100)/100;
    }
    else if(saturation<100)
    {
        j=(100-saturation)/100;
    }



    printf ("Choose to print text or picture: ");
    char whatToPrint[10];
    scanf ("%s", &whatToPrint);
    if (strcmp(whatToPrint, "text")==0)
        {
            thingToPrint=1.00;
        }
    else if (strcmp(whatToPrint, "picture")==0)
        {
            thingToPrint=1.35;
        }

float usedInk;
if(saturation>100)
{
    usedInk=(thingToPrint*ord)+(thingToPrint*ord*j);
}
else if(saturation<100)
{
    usedInk=(thingToPrint*ord)-(thingToPrint*ord*j);
}
else if(saturation==100)
{
    usedInk= thingToPrint*ord;
}


    printf ("Choose between black-and-white and colored printing: ");
    char colorOfPrint[20];
    scanf("%s", &colorOfPrint);
    if (strcmp(colorOfPrint, "black-and-white")==0)
        {
               if (cartridge4<=0)
        {
            printf ("Page printed! \n");
        }
            cartridge4= cartridge4 - usedInk;

        }
    else if (strcmp(colorOfPrint, "colored")==0)
        {
            printf ("Choose percentage of cyan, magenta and yellow: \n");
        printf("Cyan: ");
        scanf("%f", &cyanPercent);

        printf("Magenta: ");
        scanf("%f", &magentaPercent);

        printf("Yellow: ");
        scanf("%f", &yellowPercent);

        colorSummary=cyanPercent + magentaPercent + yellowPercent;
         if (colorSummary==100&&cartridge1<=0&&cartridge2<=0&&cartridge3<=0)
        {
            printf ("Page printed! \n");
        }
        else if (colorSummary!=100)
        {
            printf("The total of the colors must be equal to 100 \n");
        }
        }

        cyanInk = (cyanPercent*usedInk)/100;
        cartridge1= cartridge1 - cyanInk;
        magentaInk = (magentaPercent*usedInk)/100;
        cartridge2= cartridge2 - magentaInk;
        yellowInk = (yellowPercent*usedInk)/100;
        cartridge3= cartridge3 - yellowInk;





if (cartridge1<=0)
   {
    printf("Error, cartridge needs replacement!\n ");
char refill[6];
scanf ("%s", &refill);
if (strcmp(refill, "refill")==0)
    {
        cartridge1=200.00;
    }
else {break;}
   }



if (cartridge2<=0){
    printf("Error, cartridge needs replacement!\n ");
char refill[6];
scanf ("%s", &refill);
if (strcmp(refill, "refill")==0)
    {
        cartridge2=200.00;
    }
else {break;}
}



if (cartridge3<=0)
{
    printf("Error, cartridge needs replacement!\n ");
char refill[6];
scanf ("%s", &refill);
if (strcmp(refill, "refill")==0)
    {
        cartridge3=200.00;
    }
else {break;}
}



if (cartridge4<=0)
   {
    printf("Error, cartridge needs replacement!\n ");
char refill[6];
scanf ("%s", &refill);
if (strcmp(refill, "refill")==0)
    {
        cartridge4=200.00;
    }
else {break;}
   }



printf("%.2f\n", cartridge1 );
printf("%.2f\n", cartridge2 );
printf("%.2f\n", cartridge3 );
printf("%.2f\n", cartridge4 );

    }
    }

    return 0;
}



