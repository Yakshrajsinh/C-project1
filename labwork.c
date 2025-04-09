    #include<stdio.h>

    int main(){
        int C;
        printf("enter celsius:");
        scanf("%d",&C);
        float fahrenheit=((9.0/5)*C)+32;
        printf("\n fehrenheit=%.2f",fahrenheit);

        
        float base_salery,HRA,DA,TA,gross_salary;
        printf("enter base salary");
        scanf("%f",&base_salery);

        HRA=(10.0/100)*base_salery;
        DA=(5.0/100)*base_salery;
        TA=(8.0/100)*base_salery;

        gross_salary=base_salery+HRA+DA+TA;

        printf("\ngross slary = %.2f",gross_salary);


        float angle1,angle2;
        printf("Enter angle 1:");
        scanf("%f",&angle1);
        printf("\nEnter angle 2:");
        scanf("%f",&angle2);
        printf("\nthe third angle of tringle is:%.2f",180-(angle1+angle2));

       
    }