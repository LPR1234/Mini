#ifndef __STOCK_H__
#define __STOCK_H__

#include<stdio.h>
#include<stdbool.h>

int id;
int password;
int adminChoice;
bool backToWelcomePage;

struct Component{
	int id;
	char name[20];
	int quantity;
}c;

int avlId(int cid);
void removeComponent();
void updateComponent();
void viewComponents();
bool addComoponentToFile();
void executeAdminChoice();
void showAdminMenu();
bool validateAdminLoginDetails();
void showAdminLoginForm();

#endif
