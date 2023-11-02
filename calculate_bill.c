#include<stdio.h>
int main(){
    int unit,fc,ec,total_bill,extra_bill,unit_call;
    printf("Enter the Unit consumption\n");
    scanf("%d",&unit);

    if(unit<=200){
        unit_call=220+0;
        extra_bill=unit_call*0.05;
        total_bill=unit_call+extra_bill;
        printf("Total bill of Electricity is: %d",total_bill);
    }
    else if(unit>=201 && unit<=400){
        unit_call=220+(unit*6);
        extra_bill=unit_call*0.05;
        total_bill=unit_call+extra_bill;
        printf("Total bill of Electricity is: %d",total_bill);
    }
        else if(unit>=401 && unit<=600){
        unit_call=220+(unit*7);
        extra_bill=unit_call*0.05;
        total_bill=unit_call+extra_bill;
        printf("Total bill of Electricity is: %d",total_bill);
    }
    else if(unit>=601){
        unit_call=220+(unit*8);
        extra_bill=unit_call*0.05;
        total_bill=unit_call+extra_bill;
        printf("Total bill of Electricity is: %d",total_bill);
    }
    return 0;
}