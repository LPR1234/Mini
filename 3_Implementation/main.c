#include"stock.h"
#include<stdio.h>
#include<stdbool.h>

int main()
{ 	
	while(1)
	{   
	    int input;
		printf("Welcome to Loki Electronics\n");
		printf("1- Admin Login\n");
		printf("2- Customer Login\n");
		printf("3- Exit \n");
		printf("Enter your choice:");
		scanf("%d",&input);
		//system("cls");
		switch (input)
		{
			case 1:
				showAdminLoginForm();
		        if(validateAdminLoginDetails()==true)
		         {   //system("cls");
		    	    while(1)
		    	    {   //system("cls");
		    	    	showAdminMenu();
		    	    	if(backToWelcomePage==true)
		    	    	{   //system("cls");
		    	    		break;		    	    		
						}
					}
		            
		         	}
			      else{
			    	printf("Invalid id or password\n");
			        }
				break;
				case 2:
					printf("user login");
				break;
				case 3:
					//exit(1);
					break;
					default:
						printf("Invalid choice!");
				
		}
		 	
	}
    }