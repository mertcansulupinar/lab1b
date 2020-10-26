#include <stdio.h>
#include <stdlib.h>

int main()
{

    //first question

    //degiskenleri tanimliyoruz / we define variables

    float shortSide, longSide, area;

    //kullanicidan verileri topluyoruz / we collect data from the user
    printf("**************************\n");
    printf("first question\n");
    printf("Please, could you write shorter side of the rectangle?\n");
    scanf("%f", &shortSide);
    printf("Please, could you write longer side of the rectangle?\n");
    scanf("%f", &longSide);

    //dikdortgenin alanini hesapliyoruz / we calculate the area of ​​the rectangle
    area = shortSide * longSide;

    //dikdortgenin alanini ekrana yazdiriyoruz / we print the area of ​​the rectangle on the screen
    printf("\nThe area of the rectangle is %.2f meter-square\n", area);



    //second question

    //degiskenleri tanimliyoruz / we define variables

    int kurusBes, kurusOn, kurusYirmiBes, kurusElli, liraBir, kurusAmount, kurus, lira;

    //kullanicidan verileri topluyoruz / we collect data from the user
    printf("\n**************************\n");
    printf("second question\n");
    printf("Enter the number of  1 LIRA   >  ");
    scanf("%d", &liraBir);
    printf("Enter the number of  50 kurus   >  ");
    scanf("%d", &kurusElli);
    printf("Enter the number of  25 kurus   >  ");
    scanf("%d", &kurusYirmiBes);
    printf("Enter the number of  10 kurus   >  ");
    scanf("%d", &kurusOn);
    printf("Enter the number of  5 kurus   >  ");
    scanf("%d", &kurusBes);

    //topladigimiz tum verileri kurus cinsine ceviriyoruz / we convert all the data we collect into kurus
    kurusAmount = (liraBir * 100) + (kurusElli * 50) + (kurusYirmiBes * 25) + (kurusOn * 10) + (kurusBes * 5);

    //kurusa cevirdigimiz verileri lira ve kurus cinsine ayiriyoruz / we divide the data we have translated into kurus into lira and kurus
    lira = kurusAmount / 100;
    kurus = kurusAmount % 100;

    //kullanicinin cebindeki parayi lira ve kurus turunden ekrana yazdiriyoruz / we print the money in the user's pocket on the screen in lira and kurus types
    printf("\nYou have %d lira and %d kurus in your pocket\n", lira, kurus );
    
    getch();

    return 0;
}
