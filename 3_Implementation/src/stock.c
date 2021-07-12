
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdbool.h>
#include"stock.h"
int avlId(int cid)
{
 FILE *fp;
 fp = fopen("Record", "r");
 while (!feof(fp))
 {
  fread(&c, sizeof(c), 1, fp);

  if (cid == c.id)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}
void removeComponent()
{
	FILE *fpo;
 FILE *fpt;
 int r, s;
 printf("Enter the component id you want to delete :");
 scanf("%d", &r);
 if (avlId(r) == 0)
  printf("component id %d is not available in the file\n", r);
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&c, sizeof(c), 1, fpo))
  {
   s = c.id;
   if (s != r)
    fwrite(&c, sizeof(c), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&c, sizeof(c), 1, fpt))
   fwrite(&c, sizeof(c), 1, fpo);
  printf("\nRECORD DELETED\n");
  fclose(fpo);
  fclose(fpt);
 }
 printf("press any key to go back");
 getch();

}
void updateComponent()
{
	 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 printf("Enter Component id to update:");
 scanf("%d", &r);
 avl = avlId(r);
 if (avl == 0)
 {
  printf("Component with given id %d is not Available in the file", r);
 }
 else
 {
  fpo = fopen("Record", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&c, sizeof(c), 1, fpo))
  {
   s = c.id;
   if (s != r)
    fwrite(&c, sizeof(c), 1, fpt);
   else
   {
    printf("\n\t1. Update Name of component id %d", r);
    printf("\n\t2. Update quantity of component id %d", r);
    printf("\n\t3. Update both Name and quantity of componet id %d", r);
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
     printf("Enter component Name:");
     scanf("%s", &c.name);
     break;
    case 2:
     printf("Enter quantity: ");
     scanf("%d", &c.quantity);
     break;
    case 3:
     printf("Enter Name: ");
     scanf("%s", &c.name);
     printf("Enter quantity: ");
     scanf("%d", &c.quantity);
     break;
    default:
     printf("Invalid Selection");
     break;
    }
    fwrite(&c, sizeof(c), 1, fpt);
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("Record", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&c, sizeof(c), 1, fpt))
  {
   fwrite(&c, sizeof(c), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("RECORD UPDATED\n");
 }
 printf("press any key to go back");
 getch();
}
void viewComponents()
{
	 FILE *fp1;
    fp1 = fopen("Record", "r");
    printf("\nComponent id\tComponent Name\tComponent Quantity\n\n");
    while (fread(&c, sizeof(c), 1, fp1))
    printf("  %d\t\t%s\t\t%d\n", c.id, c.name, c.quantity);
    fclose(fp1);
    printf("press any key to go back");
    getch();
}

bool addComponentToFile(){
	 FILE *fp;
 fp = fopen("Record", "a");
 printf("Enter the component id  :");
 scanf("%d", &c.id);
 printf("Enter the component name :");
 scanf("%s", &c.name);
 printf("Enter the quantity:");
 scanf("%d", &c.quantity);
 fwrite(&c, sizeof(c), 1, fp);
 fclose(fp);
 printf("press any key to go back");
 getch();
 return true;
}
void executeAdminChoice()
{
	switch (adminChoice)
		{
			case 1:
			//printf("add");
			//bool flag = 
			addComponentToFile();
			break;
			case 2:
				//printf("update");
				updateComponent();
				break;
				case 3:
					//printf("remove");
					removeComponent();
					break;
					case 4:
					//	printf("view all");
						viewComponents();
						break;
						case 5:
							//printf("logout");
							backToWelcomePage = true;
							break;
						default:
							printf("Invalid Choice!");
		}
}
void showAdminMenu()
{   
	printf("Welcome to cims\n");
	printf("1-add a component\n");
	printf("2-update existing component data \n");
	printf("3-remove a component\n");
	printf("4-view all the component\n");
	printf("5-logout\n");
	scanf("%d",&adminChoice);
	executeAdminChoice();
}
bool validateAdminLoginDetails()
{
	if(id==1170 && password==1234)
	{   
	    //printf("Welcome Manager");
		return true;
	}
	else
	{
		return false;
	}
}
void showAdminLoginForm()
{   
	printf("Enter Admin id:");
	scanf("%d",&id);
	printf("\n");
	printf("Enter password: ");
	scanf("%d",&password);
    printf("\n");
	/*printf("admin id is %d",id);
	printf("\npassword is %d",password);*/

}


