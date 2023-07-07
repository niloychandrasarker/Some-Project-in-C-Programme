/*  Resturent Billing System */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void formateDesign(char name[50],char date[40])
{
    printf("\n\n");
    printf("\t     NILOY'S  RESTURENT AND PARTY CENTER    ");
    printf("\n\t----------------------------------------------");
    printf("\nDate : %s",date);
    printf("\nInvoice To : %s",name);
    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("Item\t\t\t");
    printf("Qty\t\t\t");
    printf("Total\t\t\t");
    printf("\n--------------------------------------------------------");
    printf("\n\n");
}
void printBill(char item[20],int qty,float price)
{
    printf("%s\t\t",item);
    printf("\t%d\t\t",qty);
    printf("\t%0.2f\t\t",qty*price);
    printf("\n\n");

}
void genarateBill(float total)
{
    printf("\n");
    float discount = 0.1*total;
    float netTotal = total - discount;
    printf("-----------------------------------------\n");
    printf("Discount offer 10% : \t\t%.2f :",total - netTotal);
    printf("\n-----------------------------------------\n");
    printf("Total Amount : \t\t\t%.2f",netTotal);

}
struct resturent
{
    char name[40];
    char item[50];
    int noOfItem;
    int unitchargeofitem;
    int qty;
    float price;

};
int main()
{
    float total;
    int m;
    struct resturent r1[40];
    printf("\n\t\t****WELCOME TO THE **** NILOY'S RESTURENT****\n");
    printf("\t-------------------------------------------------------------");
    printf("\nEnter the Customar Name : ");
    scanf("%s",&r1->name);
    printf("Enter the number of order  as request of customar : ");
    scanf("%d",&m);

    for(int i=0; i<m; i++)
    {
        printf("\nEnter %d item : \t",i+1);
        scanf("%s",&r1[i].item);
        printf("Enter Quantity of item :\t");
        scanf("%d",&r1[i].noOfItem);
        printf("Enter per unit charge of Item :\t");
        scanf("%d",&r1[i].unitchargeofitem);
        total += r1[i].noOfItem * r1[i].unitchargeofitem;

    }
    formateDesign(r1->name,"01/10/2023");
    for(int i=0; i<m; i++ ){
        printBill(r1[i].item, r1[i].noOfItem, r1[i].unitchargeofitem );
        printf("\n");
    }
    genarateBill(total);
    return 0;


}
