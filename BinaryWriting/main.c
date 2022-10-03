
int ID=10000;
char pName[31]="Samsung";
char fName[16]="ProgramiraneOOD";
double prize=100, weight=1.3;
char address[21]="Nqkakuv adres";
FILE *fp;
if((fp=fopen("myFile.bin","wb"))==NULL)
{
 printf("Error");
 exit(1);
}
if(fwrite(&ID,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
int pNameSize = strlen(pName);
if(fwrite(&pNameSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fwrite(pName,sizeof(char),strlen(pName),fp)!=strlen(pName))
{
printf("Error");
 exit(1);
}
int fNameSize = strlen(fName);
if(fwrite(&fNameSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fwrite(fName,sizeof(char),strlen(fName),fp)!=strlen(fName))
{
printf("Error");
 exit(1);
}
if(fwrite(&prize,sizeof(double),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fwrite(&weight,sizeof(double),1,fp)!=1)
{
printf("Error");
 exit(1);
}
int addressSize = strlen(address);
if(fwrite(&addressSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fwrite(address,sizeof(char),strlen(address),fp)!=strlen(address))
{
printf("Error");
 exit(1);
}
