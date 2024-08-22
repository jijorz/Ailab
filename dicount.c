#include <stdio.h>
#include <conio.h>

void main()
{
float amt , sub_tot , dis_amt , tax_amt , tot_amt , qty , vlu , dis , tax ;

clrsrc();
printf("Enter the quantity of item sold");
scanf("%f",&qty");
printf("Enter the value of item sold");
scanf("%f",&vlu");
printf("Enter the discount percentage");
scanf("%f",&dis");
printf("Enter the tax");
scanf("%f",&tax");

amt = qty * vlu ;

dis_amt = amt * dis / 100 ;

sub_tot = amount - dis_amt ;

tax_amt = sub_tot * tax / 100 ;

tot_amt = sub_tot + tax_amt ;

printf("the quantity sold %f ",qty);
printf("the price per item%f ",vlu);
printf("the amount %f ",amt);
printf("Discount %f ",dis_amt);
printf("total Discount %f ",sub_tot);
printf("tax %f ",tax_amt);
printf("total amount %f ",tot_amt);

}
