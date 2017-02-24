/* This is a customer dill payment for a company.
Written by Ahmad Ahmad
Date:02/14/2017
*/
#include<stdio.h>
#include<math.h>

#define  laborCost 0.55
#define tax 8.5

void aski_ng(float*,float*,float*,float*);

void area_I(float, float, float*);

void print_ing(float,float,float);

void calculate_installPrice(float*,float);

void subTotal(float*,float*,float*);
void Total(float*,float*);

int main(){

  float length,width,pricePerSqr,discount,area,value,subtotal,total;


// Calling functions we created

aski_ng(&length, &width, &discount, &pricePerSqr);
area_I(length,width,&area);
print_ing( length, width, area);
calculate_installPrice(&value,area);
subTotal(&subtotal,&value,&discount);
Total(&total,&subtotal);



printf("__________________________________________________________________________\n");
printf("      DESCRIPTION        Charges Cost        Charge    \n");
printf("--------------------------------------------------------------------------\n");
printf("       Carpet               %.2f              %.2f\n",pricePerSqr,pricePerSqr);
printf("       Labor                %.2f              %.2f\n",laborCost,laborCost);
printf("       Installed Price                        %.2f\n",value);
printf("       Discount:            %.2f              %.2f\n",discount,discount);

printf("       Subtotal:                              %.2f\n",subtotal);
printf("       Tax:                                   %.2f\n" ,tax);
printf("       Total:                                 %.2f\n",total);




}

void aski_ng(float*length, float*width,float*discount,float*pricePerSqr ){
printf("Length and width of the carpet in feet\n" );
scanf("%f %f",length,width);

printf("Whats the discount\n");
scanf("%f",discount);

printf("Cost Per Square foot (xxx.xx)\n");
scanf("%f",pricePerSqr);
return;

}


void area_I(float length,float width,float*area){

*area=(length*width);
return;

}

void print_ing(float length, float width, float area){

printf("Length       %.3f \n",length);
printf(" Width       %.3f \n",width);
printf("Area         %.3f \n", area);
return;

}


void calculate_installPrice(float*value,float area){

*value= (area*laborCost);



return;
}



void subTotal(float*subtotal,float*value,float*discount){

  *subtotal=(*value-*discount);





return;

}


void Total(float*total,float*subtotal) {

*total= (*subtotal*(tax/100))+(*subtotal);

return;


}

