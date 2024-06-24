#include <stdio.h>
struct gst
{
    int rate, qty, amount, discount, bill, gst;
    int customer, name,total;
};
int main()
{
    struct gst c1[3];
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\ncustomer no:%d\n", c1[i].customer = i);
        printf("Enter a customer name:");
        scanf("%s", &c1[i].name);
        printf("Enter a rate a item:");
        scanf("%d", &c1[i].rate);
        printf("Enter a quntity a item:");
        scanf("%d", &c1[i].qty);
        c1[i].amount = c1[i].rate * c1[i].qty;
        printf("amount:%d\n", c1[i].amount);
        c1[i].discount = (c1[i].amount * 10) / 100;
        printf("discount:%d\n", c1[i].discount);
        c1[i].bill = c1[i].amount - c1[i].discount;
        printf("bill:%d\n", c1[i].bill);
        c1[i].gst = (c1[i].bill * 18) / 100;
        printf("GST:%d\n", c1[i].gst);
        c1[i].total = c1[i].bill + c1[i].gst;
        printf("total:%d", c1[i].total);
    }
}