
int ID;
char pName[31];
char fName[16];
double prize, weight;
char address[21];

FILE *fp;
if((fp=fopen("myFile.bin","rb"))==NULL)
{
 printf("Error");
 exit(1);
}

if(fread(&ID,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
int pNameSize;
if(fread(&pNameSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fread(pName,sizeof(char),pNameSize,fp)!=pNameSize)
{
printf("Error");
 exit(1);
}
pName[pNameSize]='\0';
int fNameSize;
if(fread(&fNameSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fread(fName,sizeof(char),fNameSize,fp)!=fNameSize)
{
printf("Error");
 exit(1);
}
fName[fNameSize]='\0';

if(fread(&prize,sizeof(double),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fread(&weight,sizeof(double),1,fp)!=1)
{
printf("Error");
 exit(1);
}
int addressSize;
if(fwrite(&addressSize,sizeof(int),1,fp)!=1)
{
printf("Error");
 exit(1);
}
if(fwrite(address,sizeof(char),addressSize,fp)!=addressSize)
{
printf("Error");
 exit(1);
}
address[addressSize]='\0';
