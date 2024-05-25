#include <stdio.h>

int printiee_754_64(int your_number)
{

    printf("Your number IEE754 presentation is:\n");
    sign(your_number);
    exponent_64(your_number);
    mantissa(your_number);


}

int printiee754_32(int your_number)
{

    printf("Your number IEE754 presentation is:\n");
    sign(your_number);
    exponent_32(your_number);
    mantissa(your_number);

}

int sign(int number){

    if(number>=0){

        number = 0;

    }
    else{
        number = 1;

    }
    printf("%d",number);

}

int exponent_64(int num)
{
    long long int binNumber = 0;
    int power = 0;

    while (num>0){
        int rem =num%2;
        long long int temp = pow(10,power);
        binNumber += rem * temp;
        power++;
        num /= 2;
  
    }
    int us = (power-1);
    int bias = 1023 + us;

    long long int binNumber_iee = 0;
    int power_iee = 0;

        while (bias>0){
        int rem =bias%2;
        long long int temp = pow(10,power_iee);
        binNumber_iee += rem * temp;
        power_iee++;
        bias /=2;
    }  
printf("%lld",binNumber_iee);
}

int exponent_32(int num)
{
    long long int binNumber = 0;
    int power = 0;

    while (num>0){
        int rem =num%2;
        long long int temp = pow(10,power);
        binNumber += rem * temp;
        power++;
        num /= 2;
  
    }
    int us = (power-1);
    int bias = 127 + us;

    long long int binNumber_iee = 0;
    int power_iee = 0;

        while (bias>0){
        int rem =bias%2;
        long long int temp = pow(10,power_iee);
        binNumber_iee += rem * temp;
        power_iee++;
        bias /=2;
    }  
printf("%lld",binNumber_iee);

}

int mantissa(int n)
{

    int a[20],i;
    for(i=0;n>=0;i++){
        a[i] = n%2;
        n = n/2;
        if(n<1){
            break;
        }

    }
    // dizileri çevirme

    for(i=i-1;i>0;i--){

        printf("%d",a[i]);
    }

}


int main(){

    int secim;
    float sayi;

    printf("For float ----->1\nFor double------>2\n");
    printf("Selection:");
    scanf("%d",&secim);

    printf("Your Number:");
    scanf("%f",&sayi);

    if(secim == 1){

        printiee754_32(sayi);


    }
    else if(secim == 2){

        printiee_754_64(sayi);

    } 

    else{

        printf("Wrong Selection...");

    }

return 0;
}