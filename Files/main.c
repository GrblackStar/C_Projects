#include <stdio.h>
#include <stdlib.h>

//typedef struct S_info {
//    int number;
//    struct S_info *next;
//    struct S_info *previous;
//}INFO;
//
//INFO *readFromTextFile (INFO *head)
//{
//    FILE *f;
//    f = fopen ("textFile.txt", "r");
//    if (f == NULL)
//    {
//        perror ("File read open error");
//        return NULL;
//    }
//
//    INFO *current = NULL;
//    while (!feof (f))
//    {
//        INFO *newNum = malloc (sizeof(INFO));
//        newNum-> next = NULL;
//        newNum->previous = NULL;
//
//        int res = fscanf(f, "%d", &newNum->number);
//
//        if ((res!=1) || ferror (f))
//        {
//            perror ("File read error");
//            free (newNum);
//            return head;
//        }
//
//        if (head == NULL)
//        {
//            head = newNum;
//        }
//        else{
//            current->next = newNum;
//        }
//        current = newNum;
//    }
//    fclose (f);
//    return head;
//}
//
//int qm (FILE *f)
//{
//    INFO *root = NULL;
//    root = readFromTextFile(root);
//
//    INFO *current = NULL;
//
//    int array [20];
//    int index=0;
//
//    int max=0;
//
//    while (current->next !=NULL)
//    {
//        for (index=0; index<20; index++)
//            {
//              if (current->number%2 == 0)
//                 {
//                    int result = sscanf (current->number, "%d", array[index]);
//                 }
//            }
//    }
//
//    for (index=0; index<20; index++)
//        {printf ("%d", array[index]);}
//
//
//
//    int i, j, a;
//    int n = 20;
//
//        for (i = 0; i < n; ++i)
//        {
//            for (j = i + 1; j < n; ++j)
//            {
//                if (array[i] < array[j])
//                {
//                    a = array[i];
//                    array[i] = array[j];
//                    array[j] = a;
//                }
//            }
//        }
//
//
//    max = array[0];
//    printf ("The biggest number is: %d ", max);
//
//    return max;
//}

int qm1 (FILE *fp)
{
    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf ("Error");
        exit (1);
    }

    char single;
    char array[20];

    int index = 0;
    int max=0;

    while ((single = fgetc(fp)) != EOF)
    {
        printf ("%c", single);
        for (index=0; index<20; index++)
        {
            if(single%2 == 0)
            {
                array[index] = single;
            }
        }
    }

    int i, j, a;
    int n = 20;

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (array[i] < array[j])
                {
                    a = array[i];
                    array[i] = array[j];
                    array[j] = a;
                }
            }
        }


    max = array[0];
    printf ("The biggest number is: %d ", max);

    fclose(fp);

    return max;
}


int countStrings(const char *str1, const char *str2)
{
    int count = 0;
    size_t str2Lenght = strlen(str2);
    const char *p = str1;
    while (NULL != (p = strstr(p, str2)))
    {
        count ++;
        p += str2Lenght;
    }
}


int nn (FILE*f, char c)
{

    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf ("Error");
        exit (1);
    }

    char single;
    char array[20];

    int index = 0;

    while ((single = fgetc(fp)) != EOF)
    {
        printf ("%c", single);
        for (index=0; index<20; index++)
        {
            if(single%2 == 0)
            {
                array[index] = single;
            }
        }
    }




}


int main()
{
//    INFO *root = NULL;
    FILE *f;
    f = fopen ("textFile.txt", "r");

    root = qm1(f);

    fclose (f);
    return 0;
}
