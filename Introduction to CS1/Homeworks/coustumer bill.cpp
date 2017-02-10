///Writing a coustomer bill.
//author: Geraldo Braho
//date:09/10/2016
#include <stdio.h>

int tv;
int dvd;
int gameController;
int gameConsole;
int cell;

float tvPrice=400.00;
float dvdPrice=120.00;
float gameControllerPrice=35.20;
float gameConsolePrice=220.00;
float cellPrice=150.00;

float tv_total;
float dvd_total;
float gameConsole_total;
float gameController_total;
float cell_total;
float subtotal;
float t=8.25;
float total;

int main(void)
{
printf("1.How many Tv were sold :\n");
scanf("%d",&tv);
printf("------------------------------------------\n");
printf("2.How many DVD's were sold :\n");
scanf("%d",&dvd);
printf("-------------------------------------------\n");
printf("3.How many Game Controller were sold :\n");
scanf("%d",&gameController);
printf("----------------------------------------------\n");
printf("4.How many Game Consoles  were sold :\n");
scanf("%d",&gameConsole);
printf("------------------------------------------------\n");
printf("How many Cell Phones  were sold :\n");
scanf("%d",&cell);


float tv_total=(tvPrice*tv);
 float dvd_total=(dvdPrice*dvd);
 float gameConsole_total=(gameConsolePrice*gameConsole);
float gameController_total=(gameController*gameController);
float cell_total=(cell*cellPrice);


subtotal=(tv_total+dvd_total+gameConsole_total+gameController_total+cell_total);
t=(subtotal*t)/100;
total =subtotal+t;

printf("__________________________________________________________________________\n");
printf("QTY       DESCRIPTION        Unit price        Total price    \n");
printf("--------------------------------------------------------------------------\n");
printf("%d           TV                 %.2f          %.2f\n",tv,tvPrice,tv_total);
printf("%d        DVD Player            %.2f          %.2f\n",dvd,dvdPrice,dvd_total);
printf("%d      Game Controller         %.2f          %.2f\n",gameController,gameControllerPrice,gameController_total);
printf("%d       Game Consoles          %.2f          %.2f\n",gameConsole,gameControllerPrice,gameConsole_total);
printf("%d       Cell Phones            %.2f          %.2f\n",cell,cellPrice,cell_total);
printf("                                             -------------------\n");

printf("                                              Subtotal:%.2f\n",subtotal);
printf("                                              Tax:%f\n",t);
printf("                                              Total:%.2f\n",total);










}
