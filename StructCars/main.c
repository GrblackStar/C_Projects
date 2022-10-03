#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ID[60];
    char color[30];
    float volume;
    char brand[50];
    float price;
}car;

typedef struct pointer_car
{
    car val;
    struct pointer_car * next;
}pointer;

void print_CHECK(pointer* root)
{
pointer* curr_item = root;
while(curr_item != NULL)
{

printf("ID: %s\n",curr_item->val.ID);
printf("Color: %s\n",curr_item->val.color);
printf("Volume: %.2f\n",curr_item->val.volume);
printf("Brand: %s\n",curr_item->val.brand);
printf("Price: %.2f\n\n",curr_item->val.price);

curr_item=curr_item->next;
}
}


pointer *new_item()
{
char read[60];

pointer *result=NULL;
result = (pointer *)malloc(sizeof(pointer));
if (!result){
        printf("\nNo memory allocated!");
        return result;}
else{

printf("Enter ID:\n");
scanf("%s", read);
fflush(stdin);
strcpy(result->val.ID, read);

printf("Enter color:\n");
scanf("%s", read);
fflush(stdin);
strcpy(result->val.color, read);

printf("Enter volume:\n");
scanf("%f", &result->val.volume);
fflush(stdin);

printf("Enter brand:\n");
gets(read);
fflush(stdin);
strcpy(result->val.brand, read);

printf("Enter price:\n");
scanf("%f", &result->val.price);
fflush(stdin);

printf("\n");

result->next = NULL;

return result;
}
}

pointer *create_queue(int size)
{
pointer *res_root = NULL;
pointer *end_item = NULL;
int i;
for(i=0; i<size; i++)
{
if(res_root == NULL)
{
res_root = new_item();
end_item = res_root;
}
else
{
end_item->next = new_item();
end_item = end_item->next;
}
}
return res_root;
}

void free_pointer(pointer* root)
{
pointer* curr = root;
while(root != NULL)
{
root = root->next;
free(curr);
curr= root;
}
}

pointer *delete_car(pointer *root, char ID[60])
{
pointer* prev_item=root;
pointer* curr_item=root;
int f=0;
while(curr_item!=NULL)
{
if(!strcmp(curr_item->val.ID,ID))
{
if(curr_item == root)
{
root = root->next;
prev_item = root;
f=1;
}
else
prev_item->next = curr_item->next;
free(curr_item);
curr_item = prev_item;
}
prev_item = curr_item;
if(f == 0)
curr_item=curr_item->next;
f=0;
}
return root;
}

void print(pointer* root, char brand[50])
{
pointer* curr_item = root;
while(curr_item != NULL)
{
    if(!strcmp(curr_item->val.brand, brand)){
printf("ID: %s\n",curr_item->val.ID);
printf("Color: %s\n",curr_item->val.color);
printf("Volume: %.2f\n",curr_item->val.volume);
printf("Brand: %s\n",curr_item->val.brand);
printf("Price: %.2f\n\n",curr_item->val.price);
    }
curr_item=curr_item->next;
}
}

void print_price(pointer* root, char brand[50])
{
pointer* curr_item = root;
float average;
float sum=0;
int counter=0;

while(curr_item != NULL)
{
if(!strcmp(curr_item->val.brand, brand))
    {
        counter=counter+1;
        sum=sum+curr_item->val.price;
    }
    curr_item=curr_item->next;
}

average=sum/counter;
printf("%f",average);

curr_item = root;//EXTREMELY IMPORTANT

while(curr_item != NULL)
{
    if(!strcmp(curr_item->val.brand, brand))
    {
            if(curr_item->val.price > average)
            {
                printf("ID: %s\n",curr_item->val.ID);
                printf("Color: %s\n",curr_item->val.color);
                printf("Volume: %.2f\n",curr_item->val.volume);
                printf("Brand: %s\n",curr_item->val.brand);
                printf("Price: %.2f\n\n",curr_item->val.price);
            }
    }
curr_item=curr_item->next;
}
}

int Readmenu(char *menu[]){
	int b = 1;
	int choice;
	printf("\n=======%s=======", menu[0]);
	for (b; (menu[b]); b++){
		printf("\n\n%d. %s", b, menu[b]);
	}
	printf("\n\nEnter your choice:\n");
	scanf("%d", &choice);
	return choice;
}

 int main() {
	int choiceFromMenu;

	pointer *root = NULL;
	pointer *add = NULL;
	pointer *q = NULL;

    int n;
    char ID_for_deleting[60];
    char brand_to_show[50];

	char *menu[] = {
		"MENU",
		"ADD a new car",
		"SEARCH for cars by BRAND",
		"DELETE car by ID",
		"SEE all cars by chosen BRAND with MORE than AVERAGE price for the brand",
		"Exit",
		"CHECK",
		NULL,
	};
	do{
		choiceFromMenu = Readmenu(menu);
		switch (choiceFromMenu)
		{
        case 1:
            if(root==NULL)
            {
              printf("Enter number of cars you would like to add:\n");
              scanf("%d", &n);
              fflush(stdin);

              root=create_queue(n);
            }

            else if(root!=NULL)
            {
              //pointer *add, *q;

              printf("Enter number of cars you would like to add:\n");
              scanf("%d", &n);
              fflush(stdin);

              add=create_queue(n);

              q=root;
              while(q->next!=NULL)
              {
                  q = q->next;
              }
                  q->next = add;
            }

            break;

        case 2:
            if(root==NULL) printf("No cars to show\n");

            else{
                printf("Choose the brand you would like to see:\n");
                fflush(stdin);
                gets(brand_to_show);
                fflush(stdin);

                print(root,brand_to_show);
            }

            break;

		case 3:
		    if(root==NULL) printf("No more cars\n");
		    else{
		    printf("Type in the ID code of the car/s you would like to delete:\n");
		    scanf("%s", ID_for_deleting);
		    fflush(stdin);
		    root=delete_car(root, ID_for_deleting);}

            break;

        case 4:
            if(root==NULL) printf("No cars to show\n");
            else{
                printf("Choose the brand you would like to see:\n");
                fflush(stdin);
                gets(brand_to_show);
                fflush(stdin);

                print_price(root,brand_to_show);
            }

            break;

        case 5:
            printf("\n=======Exit=======\n");
            exit(0);
            break;

        case 6:
            print_CHECK(root);
            break;
		}

	} while (choiceFromMenu != 5);

	free_pointer(root);
	free_pointer(add);

	return 0;
}
