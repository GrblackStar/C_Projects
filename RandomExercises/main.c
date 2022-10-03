#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


void squareArea()
{
    int a;
    int b;

    printf("Enter value for a: \n");
    scanf ("%d", &a);

    printf ("Enter value for b: \n");
    scanf ("%d", &b);

    printf ("the square are is equal to: %d", a*b);
}

void circlePerimeter()
{
    float d;
    printf ("Enter diameter: ");
    scanf ("%f", &d);

    printf ("the perimeter is equal to: %.2f", d*PI);
}

void greaterThan ()
{
    int number;
    printf ("Enter a number: ");
    scanf ("%d", &number);

    if (number>6)
    {
        printf ("The number is greater than 6");
    }
}

void devisionRemainder ()
{
    int devidedNumber;
    printf ("Enter a number: ");
    scanf ("%d", &devidedNumber);

    int remainder;
    remainder= devidedNumber/8;

    if (remainder>4)
    {
        printf ("The remainder is greater than 4");
    }

}

void smallestOfThree ()
{
    int x;
    int y;
    int z;

    printf ("Enter a number: ");
    scanf("%d", &x);
    printf ("Enter a number: ");
    scanf("%d", &y);
    printf ("Enter a number: ");
    scanf("%d", &z);

    if(x<=y && x<=z)
    {
        printf ("Smallest entered number is %d", x);
    }
    else if (y<=z && y<=x)
    {
        printf ("Smallest entered number is %d", y);
    }
    else if (y>=z && z<=x)
    {
        printf ("Smallest entered number is %d", z);
    }
}

void nameOfNumber ()
{
    int name;
    scanf ("%d", &name);

    switch (name)
    {
        case 0:
        printf ("zero");
        break;
        case 1:
        printf ("one");
        break;
        case 2:
        printf ("two");
        break;
        case 3:
        printf ("three");
        break;
        default:
        printf ("you have entered a wrong number");
    }
}

void dayOfTheWeek ()
{
    int day;
    printf ("Enter a day: ");
    scanf ("%d", &day);

    switch (day)
    {
    case 1:
        printf ("Monday");
        break;
    case 2:
        printf ("thuesday");
        break;
    case 3:
        printf ("wednessday");
        break;
    case 4:
        printf ("thursday");
        break;
    case 5:
        printf ("friday");
        break;
    case 6:
        printf ("saturday");
        break;
    case 7:
        printf ("sunday");
        break;
    default:
        printf ("you have entered a wrong number");
        break;
    }
}

void pyramid ()
{
    int i, j, k, m;
    scanf ("%d", &k);

    for (i=1; i<=k; i++)
    {
        for (j=1; j<=k; j++)
        {
            printf (" ");
        }
        for (m=1; m<=1; m++)
        {
            printf ("%d", i);
            printf (" ");
        }
        printf ("\n");
        k=k-1;
    }
}

void additionBetween ()
{
    int a;
    int b;
    int count;
    int addCount;
    addCount=count;
    scanf ("%d", &a);
    scanf ("%d", &b);

    if (a<b)
    {
        for (count=(a+1); count<b; count++)
        {
            addCount=addCount + count;
        }
         printf("%d", addCount);
    }
    else
    {
        for (count= (b+1); count<a; count++)
        {
             addCount=addCount + count;
        }
        printf("%d", addCount);
    }

}

void additionAndMultyplication ()
{
    int a;
    int b;
    int count;
    int addCount;
    addCount=count;
    int mulCount;
    mulCount=1;
    scanf ("%d", &a);
    scanf ("%d", &b);

     if (a<b)
    {

        for (count=a; count<=b; count++)
        {
            if (count%2==0)
            {addCount=addCount + count;}
            else
                {mulCount=mulCount*count; }
        }
    }
    else
    {
        for (count= b; count<=a; count++)
        {
             if (count%2==0)
            {addCount=addCount + count;}
            else
                {mulCount=mulCount*count; }
        }
    }
    printf("Addition: %d\n", addCount);
    printf ("Multiplication: %d", mulCount);

}

void NandK ()
{
    int N,K,countN, outputNumbers, numbers;
    printf("Enter for N: ");
    scanf ("%d", &N);
    printf("Enter for K: ");
    scanf ("%d", &K);

    for (countN=1; countN<=N; countN++)
    {
        scanf("%d", &numbers);
        if (numbers>K && numbers%3==0)
        {
            outputNumbers++;
        }
    }
    printf("%d", outputNumbers);
}

void infiniteNumbers ()
{
    int i, count;
    printf ("Enter numbers: ");

        while (1)
        {
            scanf ("%d", &i);
            count=count+i;
            if (i==0) {break;}
        }
        printf ("%d", count);
}

void formulaOutput()
{
    float min, max, i, outputIng;
    printf ("Enter min: ");
    scanf ("%f", &min);
    printf ("Enter max: ");
    scanf ("%f", &max);
    outputIng=min;

    for (i=min; i<=max; i=i+0.01)
    {
        outputIng=i*i-4;
        printf ("%.4f\n", outputIng);
    }
}

void figureArea()
{
    float squaresArea (float a)
    {
        float area1;
        area1=a*a;
        return area1;
    }

    float rectangleArea (float a, float b)
    {
        float area2;
        area2=a*b;
        return area2;
    }

    float triangleArea (float a, float b)
    {
        float area3;
        area3=(a*b)/2;
        return area3;
    }

    float circleArea (float r)
    {
        float area4;
        area4= r*r*PI;
        return area4;
    }


    int i;
    printf ("Enter a number: ");
    scanf ("%d", &i);
    float m, n, areaRectangle;
    float p, q, areaTriangle;
    float r, areaCircle;


    switch (i)
    {
    case 1:
        printf ("you chose a square\nEnter value for a: ");
        float a, areaSquare;
        scanf ("%f", &a);
        areaSquare=squaresArea(a);
        printf ("The area of the square is %.2f", areaSquare);
        break;
    case 2:
        printf ("You chose a rectangle \nEnter value for a: ");
        scanf ("%f", &m);
        printf ("Enter value for b: ");
        scanf ("%f", &n);
        areaRectangle= rectangleArea(m, n);
        printf ("The area of the rectangle is %.2f", areaRectangle);
        break;
    case 3:
        printf ("You chose a triangle \nEnter value for a: ");
        scanf ("%f", &p);
        printf ("Enter value for b: ");
        scanf ("%f", &q);
        areaTriangle= triangleArea(p,q);
        printf ("The area of the triangle is %.2f", areaTriangle);
        break;
    case 4:
        printf ("You chose a circle \nEnter value for r: ");
        scanf ("%f", &r);
        areaCircle= circleArea(r);
        printf ("The area of the circle is %.2f", areaCircle);
        break;
    default:
        printf ("you have entered a wrong number");
        break;
    }
}

void array100 ()
{
    int K;
    scanf ("%d", &K);
    int a;
    int array[K];

    for (a=0; a<K; a++)
    {
        printf ("Enter number: ");
        scanf ("%d", &array[a]);
    }
    int i, j, temp;

    for (i=0; i<K-1; i++)
    {
        for (j=i+1; j<K; j++)
        if (array[i]>array[j])
        {
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
    printf ("The smallest number is: %d ", array[0]);
}

void arrayAverage ()
{
    int N;
    scanf ("%d", &N);
    int i, average, sum, number;
    number=0;
    sum=0;
    int array[N];

    for (i=0; i<N; i++)
    {
        number++;
        printf ("Enter number: ");
        scanf ("%d", &array[i]);
        sum+=array[i];
    }

     average=sum/number;
     for (i=0; i<N; i++)
     {
            if (array[i]>average)
        {
            printf ("%d\n", array[i]);
        }
     }

}

void string1 ()
{
    char string[30];
    int i;

    printf ("Enter a string: ");
    gets (string);
    for (i = 0; string[i]!='\0'; i++) {
      if(string[i] >= 'a' && string[i] <= 'z') {
         string[i] =string[i] -32;
      }
   }
   printf("String in Upper Case: %s", string);
}

void integerToString ()
{
    int arr[100];
    int i = 0;
    int j, r;
    int N;
    printf ("Enter a number: ");
    scanf ("%d", &N);

    while (N != 0) {
        r = N % 10;
        arr[i] = r;
        i++;
        N = N / 10;
    }
    for (j=i-1; j>-1; j--)
    {
        printf("%d ", arr[j]);
    }
}

void doubledInteger ()
{
    char string[30];
    gets(string);

    int number;
    number= atoi (string);

    int doubled;
    doubled= number*2;
    printf ("%d", doubled);
}

void matrixDiagonal ()
{
   int N;
   printf("Enter a number of rows and columns: ");
   scanf("%d",&N);
   int arr[N][N];
   int i, j;
   printf ("Enter matrix:\n");

   for (i=0; i<N; i++)
   {
       for (j=0; j<N; j++)
       {
           scanf ("%d", &arr[i][j]);
           if (i==j)
           {
               printf ("%d ", arr[i][j]);
           }
       }
   }
}


void secondaryDiagonal ()
{
    int N;
    printf ("enter number of rows and columns: ");
    scanf ("%d", &N);
    int arr1[N][N];
    int arr2[N][N];
    int i, j;
    printf ("Enter matrix: ");

}


void daysAndRows ()
{
    int currentDay, rows, newDay;
    printf ("Enter current day: ");
    scanf ("%d", &currentDay);
    printf ("Enter how many to skip:");
    scanf ("%d", &rows);
    newDay= (currentDay + rows)%7;

    switch (newDay)
    {
    case 0:
        printf ("Monday");
        break;
    case 1:
        printf ("Tuesday");
        break;
    case 2:
        printf ("Wednessday");
        break;
    case 3:
        printf ("thursday");
        break;
    case 4:
        printf ("friday");
        break;
    case 5:
        printf ("saturday");
        break;
    case 6:
        printf ("Sunday");
        break;
    default:
        printf ("You have entered wrong value");
        break;
    }

}


void thirdOfMarch ()
{
    int year2013 = 2013;
    int chosenYear;
    printf ("Choose year: ");
    scanf ("%d", &chosenYear);
    int daysOf2013 = 6;
    int newDay;


}
















int main()
{
   daysAndRows();
    return 0;
}
