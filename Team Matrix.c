#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date {
int day;
int month;
int year;
};
void discount(){
	printf("\t\t\t\t--------- WELCOME TO NOWWAYS, YOUR WAY OF FLYING --------- \n\n\n  ");
printf("DISCOUNT AND OFFERS\n ");
printf("1. Discount of 40 percent for passenger whose age is 60 or above\n");
printf(" 2. For extra baggage weight @Rs 20/kg for baggage weight above 15 kgs\n");
}
int main() {
int noc, u, i, j = 1;
float dst, *bgw, *airf;
char source[20], dest[20], **gen, **cm, **name;
int *id, *age;
struct date s;
discount();
printf("\nBoarding date (dd/mm/yy):\n");
scanf("%d\n%d\n%d", &s.day, &s.month, &s.year);
printf("\nPlease Enter any one Source you prefer (cochin, Bangalore, delhi etc):");
scanf(" %s", source);
printf("\nPlease Enter Your Destination :");
scanf(" %s", dest);
printf("\nDistance of travel(km):");
scanf("%f", &dst);
printf("\nPlease Enter the Number of Passenger Deteil You Want to Enter: ");
scanf("%d", &noc);

// Dynamically allocate memory for arrays
bgw = (float*) calloc(noc, sizeof(float));
airf = (float*) calloc(noc , sizeof(float));
gen = (char**) malloc(noc * sizeof(char));
for (i = 0; i < noc; i++) {
    gen[i] = (char*) malloc(10 * sizeof(char));
}
cm = (char**) malloc(noc * sizeof(char));
for (i = 0; i < noc; i++) {
    cm[i] = (char*) malloc(5 * sizeof(char));
}
name = (char**) malloc(noc * sizeof(char));
for (i = 0; i < noc; i++) {
    name[i] = (char*) malloc(15 * sizeof(char));
}
id = (int*) calloc(noc, sizeof(int));
age = (int*) calloc(noc, sizeof(int));

for(i = 0; i < noc; i++) {
    printf("\nPassenger Deteil For Custome Number %d.", j);
    printf("\nPlease enter the name :");
    scanf("%s", name[i]);
    printf("\nGender(male,female or other):");
    scanf("%s", gen[i]);
    printf("\nAge of the boarding passenger:");
    scanf(" %d", &age[i]);
    printf("\nClub card membership (yes OR no):");
    scanf("%s", cm[i]);
    printf("\nPls enter Five digit customer id:");
    scanf("%d", &id[i]);
    printf("\nBaggage weight:");
    scanf("%f", &bgw[i]);
    j++;
    airf[i] = 150 * dst;
	airf[i] = ((bgw[i] > 15) ? (airf[i] + ((bgw[i] - 15.0) * 20.0)) : airf[i]);
if (age[i] >= 60)
airf[i] *= 0.6;
}
do {
    printf(" \n\nPassenger's menu from identifiers log. \n\n Please select the required information.\n\n");
    printf(" 1. Passenger profile \n\n 2. Airfare calculation \n\n 3. e-ticket \n\n 4. Exit\n\n ");
    scanf(" %d",&u);
    switch( u ) {
        case 1:
            printf("Passengers profile\n\n");

            for (i = 0; i < noc; i++) {
                printf("\n");
                printf("NAME OF THE PASSENGER %d: %s\n", i+1, name[i]);
                printf("GENDER OF THE PASSENGER %d: %s\n", i+1, gen[i]);
                printf("AGE OF THE PASSENGER %d: %d\n", i+1, age[i]);
                printf("CLUB MEMBERSHIP OF THE PASSENGER %d: %s\n", i+1, cm[i]);
                printf("PASSENGER ID %d: %d\n", i+1, id[i]);
                printf("PASSENGER'S BAGGAGE WEIGHT %d: %f\n",i+1,bgw[i]);
            }
            break;

            case 2:
 for(i = 0; i < noc; i++)
    {
    printf("AIRFAIR OF %s IS \t:",name[i]);
    printf("%f\n",airf[i]);
    }
    break ;
    
    
    case 3:
      
       for (i = 0; i < noc; i++) {
    printf("\nThe Boarding date %d/%d/%d \n",s.day,s.month,s.year);
    printf("NAME OF THE PASSENGER %d: %s\n",  i+1,name[i]);
    printf("GENDER OF THE PASSENGER %d: %s\n",i+1, gen[i]);
    printf("AGE OF THE PASSENGER %d: %d\n", i+1, age[i]);
    printf("CLUB MEMBERSHIP OF THE PASSENGER %d: %s\n",i+1,  cm[i]);
    printf( "PASSENGER ID %d: %d\n", i+1, id[i]);
    printf( "PASSENGER'S BAGGAGE WEIGHT %d: %f\n",i+1,  bgw[i]);
    printf("AIRFAIR OF %s IS :",name[i]);
    printf("%f\n",airf[i]);
}
    break;
    
    
    case 4 :
    break;

    default :
        printf("invalid input");

} 
} while (u < 4);
}
