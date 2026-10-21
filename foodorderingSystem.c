#include<stdio.h>
#include<string.h>
int main()
{
	int Choice,Qty;
	float Total=0 , Price=0 ,Amount=0;
	char ItemName[30][20];
	char Item[30];
	int QtyList[10];
	float PriceList[10];
	float AmountList[10];
	int i=0,j;
	
    printf("================================================================\n");
	printf("----------------Welcome To Shivansh Snack Center---------------\n");
    printf("================================================================\n");

	
	do{
		
		printf("\n===========================FOOD MENU===========================\n");
		printf("1. Pizza        -   Rs.150\n");
		printf("2. Burger       -   Rs.90\n");
		printf("3. Cold Drink  -   Rs.20\n");
		printf("4. Coffe        -   Rs.40\n");
		printf("5. Cold Coffe   -   Rs.70\n");
		printf("6. Sandwich     -   Rs.60\n");
		printf("7. Pasta        -   Rs.50\n");
		printf("0. Print Bill & Exit \n\n");
		
		printf("Enter Choice :");
		scanf("%d",&Choice);
		
		if(Choice==0)
		break;
		
		printf("Enter Quantity :");
		scanf("%d",&Qty);
		
		switch(Choice)
		{
			case 1:
				strcpy(Item,"Pizza");
				Price = 150;
				break;
								
			case 2:
				strcpy(Item,"Burger");
				Price = 90;
				break;

			case 3:
				strcpy(Item,"Cold Drink");
				Price = 20;
				break;

			case 4:
				strcpy(Item,"Coffee");
				Price = 40;
				break;
				
			case 5:
				strcpy(Item,"Cold Coffee");
				Price = 700;
				break;
				
			case 6:
				strcpy(Item,"Sandwich");
				Price = 60;
				break;
				
			case 7:
				strcpy(Item,"Pasta");
				Price = 50;
				break;
			
			default:
				printf("Invalid Choice.\n");
		}
		Amount = Price * Qty;
		Total += Amount;
		
		strcpy(ItemName[i], Item);
		QtyList[i] = Qty;
		PriceList[i] = Price;
		AmountList[i] = Amount;
		i++;
		
		
        printf("\nAdded Successfully!\n");
        printf("%s x %d = Rs.%.2f\n", Item, Qty, Amount);

	}
	while(1);
	printf("\n");
	printf("\n================================================================\n");
	printf("SIVANSH SNACK CENTER\n");
	printf("================================================================\n");
    printf("S.No\tItem\t\tQty\tPriceList\tAmount\n");
    printf("----------------------------------------------------------------\n");
    for(j=0;j<i;j++)
    {
    	printf("%d\t%-12s\t%d\t%.2f\n",
    	j+1,
    	ItemName[j],
    	QtyList[j],
    	AmountList[j]);
	}
    printf("----------------------------------------------------------------\n");
    printf("\t\t\tTotal Bill: Rs.%.2f\n", Total);
    printf("================================================================\n");
    printf("-------------------Thank You! Visit Again-----------------------\n");
    printf("================================================================\n");

	return 0;
}
