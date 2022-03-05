#include<stdio.h>
#include<string.h>
int main()
{   int choice=1,k=01;
    char date[15];
    FILE*B;
    B=fopen("bill.txt","a");
    printf("\nEnter the Date(dd-mm-yyyy): \n");
        gets(date);
    fprintf(B,"Date(dd-mm-yyyy): %s\n",date);
    fprintf(B,"________________________________\n");
    fclose(B);
    while(choice==1)
    {int i=1,quantity[10],y,o=0;
    float price,value,total,total_value,x=0,m=0,s=0,d=0;
    char Product_ID[10][10];
    float ITM01=200.00,ITM02=600.50,ITM03=1000.00,ITM04=700.00,ITM05=800.00,ITM06=1200.00,ITM07=1500.75,ITM08=850.25,ITM09=1245.00,ITM10=1575.60,ITM11=1231,ITM12=745.00,ITM13=525.00,ITM14=875.60,ITM15=925.00;
    B=fopen("bill.txt","a");
    fprintf(B,"Bill No.= #%d",k);
    while(choice==1)
    {
    printf("Enter your product ID:");
    scanf("%s",Product_ID[i]);
    printf("Enter your product quantity:");
    scanf("%d",&quantity[i]);
    printf("Are you add another product,if YES press 1 OR NO press 0");
    scanf("%d",&choice);
    o=o+1;
    i++;
    }
    printf("\n\n\n");
    printf("       :: WelcOme to SSR store::\n");
    printf("_______________________________________________\n");
    printf(" Product ID   Quantity    Price    Value \n");
    printf("_______________________________________________\n");
    fprintf(B,"\n\n\n");
    fprintf(B,"      :: WelcOme to SSR store::\n");
    fprintf(B,"_______________________________________________\n");
    fprintf(B," Product ID   Quantity    Price    Value \n");
    fprintf(B,"_______________________________________________\n");
    total_value=0;
    i=1;
    while(i<=o)
    {
        if(strcmp(Product_ID[i], "ITM01")==0)
        {
        price=ITM01;
        }
        if(strcmp(Product_ID[i], "ITM02")==0)
        {
        price=ITM02;
        }
        if(strcmp(Product_ID[i], "ITM03")==0)
        {
        price=ITM03;
        }
        if(strcmp(Product_ID[i], "ITM04")==0)
        {
        price=ITM04;
        }
        if(strcmp(Product_ID[i], "ITM05")==0)
        {
        price=ITM05;
        }if(strcmp(Product_ID[i], "ITM05")==0)
        {
        price=ITM05;
        }
        if(strcmp(Product_ID[i], "ITM06")==0)
        {
        price=ITM06;
        }
        if(strcmp(Product_ID[i], "ITM07")==0)
        {
        price=ITM07;
        }
        if(strcmp(Product_ID[i], "ITM08")==0)
        {
        price=ITM08;
        }
        if(strcmp(Product_ID[i], "ITM09")==0)
        {
        price=ITM09;
        }
        if(strcmp(Product_ID[i], "ITM10")==0)
        {
        price=ITM10;
        }
        if(strcmp(Product_ID[i], "ITM11")==0)
        {
        price=ITM11;
        }
        if(strcmp(Product_ID[i], "ITM12")==0)
        {
        price=ITM12;
        }
        if(strcmp(Product_ID[i], "ITM13")==0)
        {
        price=ITM13;
        }
        if(strcmp(Product_ID[i], "ITM14")==0)
        {
        price=ITM14;
        }
        if(strcmp(Product_ID[i], "ITM15")==0)
        {
        price=ITM15;
        }
    value=quantity[i]*price;
    printf("  %s          %d       %.2f     %.2f    \n",Product_ID[i],quantity[i],price,value);
    fprintf(B,"  %s          %d       %.2f     %.2f    \n",Product_ID[i],quantity[i],price,value);
    total_value=total_value+value;
    i++;
    }
    x=(total_value/100)*15;
    m=total_value+x;
    if(m>10000)
        d=(m/100)*5;
        s=m-d;
     printf("_______________________________________________\n");
     printf("                     total_value = %.2f Tk \n",total_value);
     printf("                      (+15%%) vat = %.2f Tk \n",x);
     printf("_______________________________________________\n");
     printf("                           Total = %.2f Tk\n",m);
     printf("                     discaunt(5%%)= %.2f Tk\n",d);
     printf("_______________________________________________\n");
     printf("                           Total = %.2f Tk\n",s);
     printf("\n\n\n");
     fprintf(B,"_______________________________________________\n");
     fprintf(B,"                     total_value = %.2f Tk \n",total_value);
     fprintf(B,"                      (+15%%) vat = %.2f Tk \n",x);
     fprintf(B,"_______________________________________________\n");
     fprintf(B,"                           Total = %.2f Tk\n",m);
     fprintf(B,"                     discaunt(5%%)= %.2f Tk\n",d);
     fprintf(B,"_______________________________________________\n");
     fprintf(B,"                           Total = %.2f Tk\n",s);
     fprintf(B,"_______________________________________________\n");
     fclose(B);
     printf("Are you add another Bill,if YES press 1 OR NO press 0 :");
        scanf("%d",&choice);
    k++;
}
    getchar();
    return 0;
}
