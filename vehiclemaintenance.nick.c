#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
	char vehicleType, maintenance, input;
	float arrHour, arrMin, leftHour, leftMin;
	float arrTransformer, leftTransformer, total;
	float totalCharge, labor;
	float tireChange, oilChange, mechRepair;
		
	printf("Input I for inputting arrival and departure time, E to exit: ");
	scanf(" %c", &input);
	
	while(input == 'I')
	{	
		printf("Input I for inputting arrival and departure time, E to exit: ");
		scanf(" %c", &input);
		
		if(input == 'I')
		{
		
		printf("Enter type of the vehicle: ");
		scanf(" %c", &vehicleType);
		
			switch(vehicleType)
			{
				case 'C':
					
					printf("Input hour vehicle arrived: ");
					scanf("%f", &arrHour);
				
					printf("Input minute vehicle arrived: ");
					scanf("%f", &arrMin);
					
					printf("Input hour vehicle left: ");
					scanf("%f", &leftHour);
					
					printf("Input minute vehicle left: ");
					scanf("%f", &leftMin);
					
					printf("Input type of maintenance: ");
					scanf(" %c", &maintenance);
					
					total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
					
					if(maintenance == 'T')
					{
						tireChange = 80; 
						
						printf("******\n");
							
						printf("Type of vehicle: Car\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = tireChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", tireChange, labor, totalCharge);
						
					}
					else if(maintenance == 'L')
					{
						oilChange = 120; 
						
						printf("******\n");
							
						printf("Type of vehicle: Car\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = oilChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", oilChange, labor, totalCharge);
					
					}
					else if(maintenance == 'M')
					{
						
						mechRepair = 200; 
						
						printf("******\n");
							
						printf("Type of vehicle: Car\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = mechRepair + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", mechRepair, labor, totalCharge);
						
					}
					else
					{
						printf("Try again later ! \n");
					}
					
					break;
					
				case 'B':
					
					printf("Input hour vehicle arrived: ");
					scanf("%f", &arrHour);
				
					printf("Input minute vehicle arrived: ");
					scanf("%f", &arrMin);
					
					printf("Input hour vehicle left: ");
					scanf("%f", &leftHour);
					
					printf("Input minute vehicle left: ");
					scanf("%f", &leftMin);
					
					printf("Input type of maintenance: ");
					scanf(" %c", &maintenance);
					
					total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
					
					if(maintenance == 'T')
					{
						tireChange = 150; 
						
						printf("******\n");
							
						printf("Type of vehicle: Bus\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = tireChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", tireChange, labor, totalCharge);
						
					}
					else if(maintenance == 'L')
					{
						oilChange = 200; 
						
						printf("******\n");
							
						printf("Type of vehicle: Bus\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = oilChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", oilChange, labor, totalCharge);
					
					}
					else if(maintenance == 'M')
					{
						
						mechRepair = 500; 
						
						printf("******\n");
							
						printf("Type of vehicle: Bus\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = mechRepair + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", mechRepair, labor, totalCharge);
						
					}
					else
					{
						printf("Try again later ! \n");
						
					}
					
					break;	
					
				case 'T':
				
					printf("Input hour vehicle arrived: ");
					scanf("%f", &arrHour);
				
					printf("Input minute vehicle arrived: ");
					scanf("%f", &arrMin);
					
					printf("Input hour vehicle left: ");
					scanf("%f", &leftHour);
					
					printf("Input minute vehicle left: ");
					scanf("%f", &leftMin);
					
					printf("Input type of maintenance: ");
					scanf(" %c", &maintenance);
					
					total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
					
					if(maintenance == 'T')
					{
						tireChange = 100; 
						
						printf("******\n");
							
						printf("Type of vehicle: Truck\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = tireChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", tireChange, labor, totalCharge);
						
					}
					else if(maintenance == 'L')
					{
						oilChange = 150; 
						
						printf("******\n");
							
						printf("Type of vehicle: Truck\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.1f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = oilChange + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", oilChange, labor, totalCharge);
					
					}
					else if(maintenance == 'M')
					{
						
						mechRepair = 500; 
						
						printf("******\n");
							
						printf("Type of vehicle: Truck\n");
						
						printf("TIME - IN: %.2f : %.2f\n", arrHour, arrMin);
						printf("TIME - OUT: %.2f : %.2f\n", leftHour, leftMin);
						
						total = (leftHour - arrHour) + ((arrMin/60) + (leftMin/60));
						
						printf("Total Time: %.2f\n", total);
											
						printf("******\n");
						
						labor = total * 20;
						
						totalCharge = mechRepair + labor;
						
						printf("TOTAL CHARGE FOR CUSTOMER: %.1f TL + %.1f TL = %.1f TL\n", mechRepair, labor, totalCharge);
						
					}
					else
					{
						printf("Try again later ! \n");
						
					}
					
					break;	
					
				default:
				
					printf("Please try again later\n");
					break;	
	}
	
		
	}
	else
	{
		printf("BYE\n");
	}
	
	
	
	}
	
		
		
	return (0);
}
