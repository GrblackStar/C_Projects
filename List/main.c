
#include <stdio.h>
#include <stdlib.h>
struct List
{
	int val;
	struct List* next;
};
typedef struct List List;

List *new_item()
{
	List *result=NULL;
	result = (List *)malloc(sizeof(List));
	printf("New Item -> Val = ");
	scanf("%d",&result->val);
	result->next = NULL;
	return result;
}

List *create_queue_list(int size)
{
	List *res_root = NULL;
	List *end_item = NULL;
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

List *create_stack_list(int size)
{
	List *res_root = NULL;
	List *curr_item = NULL;
	int i;
	for(i=0; i<size; i++)
	{
		curr_item = new_item();
		curr_item->next = res_root;
		res_root=curr_item;
	}
	return res_root;
}

void free_list(List* root)
{
	List* curr_item = root;
	while(root != NULL)
	{
		root = root->next;
		free(curr_item);
		curr_item= root;
	}
}

List *delete_item(List *root, int criteria(List *item))
{
	List* prev_item=root;
	List* curr_item=root;
	int f=0;
	while(curr_item!=NULL)
	{
		if(criteria(curr_item))
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

void insert_item_after(List *item,List *item2)
{
	item2->next=item->next;
	item->next = item2;
}

void print(List* root)
{
	List* curr_item = root;
	while(curr_item != NULL)
	{
		printf("Item has value %d\n",curr_item->val);
		curr_item=curr_item->next;
	}
}

List* find_first_item(List* root, int criteria(List *item))
{
	List* curr_item = root;
	while(curr_item != NULL)
	{
		if(criteria(curr_item))
			return curr_item;
		curr_item = curr_item->next;
	}
	return NULL;
}

List* swap_items(List* root, List* A, List* B)
{
	List *prev_A=NULL;
	List *prev_B=NULL;
	List *curr_item = root;
	int f=0;
	if(root == A) f=1;
	else if(root == B) f=2;
	while(curr_item != NULL)
	{
		if(curr_item->next == A)
			prev_A = curr_item;
		if(curr_item->next == B)
			prev_B = curr_item;
		curr_item = curr_item->next;
	}
	if((prev_A != NULL||f==1) && (prev_B != NULL||f==2))
	{
		if(f!=1)
			prev_A->next = B;
		else
			root = B;
		if(f!=2)
			prev_B->next = A;
		else
			root = A;
		curr_item = A->next;
		A->next = B->next;
		B->next = curr_item;

	}
	return root;

}

List* bubble_sort(List* root,int compare(List* A, List* B))
{
	List* curr_item = root;
	int change;
	do
		for(curr_item = root,change = 0;curr_item->next!=NULL&&curr_item!=NULL;curr_item=curr_item->next)
			if(compare(curr_item,curr_item->next))
			{
				root = swap_items(root,curr_item,curr_item->next);
				change = 1;
				break;
			}
	while(change);
	return root;
}

int cmp(List* A, List* B)
{
	if(A->val > B->val)
		return 1;
	else
		 return 0;
}
int val_more_than_5_and_less_than_8(List *item)
{
	if(item->val > 5 && item->val < 8)
		return 1;
	else
		return 0;
}
int main()
{
	List *root = NULL;
	int n;
	scanf("%d",&n);
	root=create_queue_list(n);
	printf("Before Sort\n");
	print(root);
	root = bubble_sort(root,cmp);
	printf("After Sort\n");
	print(root);
	free_list(root);
	return 0;
}
