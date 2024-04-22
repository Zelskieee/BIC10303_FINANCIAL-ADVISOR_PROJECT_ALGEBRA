/******************************************************************************

                GROUP 2 (FINANCIAL ADVISOR)
                
                 coded & commented by Arif

*******************************************************************************/
//declare header
#include <stdio.h>
#include <string.h>
#include <math.h>

//declare function
void main()
{
    //declare identifier data types
    char query;
    char name[50];
    char status[15];
    char note[70];
    char type_vehic[20];
    char price[15];
    int table, subtraction, month, settlement;
    double taxes, kpi;
        
        //for re-enter this program without end function
        again:
        
        //dummy header of the program
        printf("\n< WELCOME TO FINANCIAL ADVISOR PROGRAM [GROUP 2] >\n");
        printf("CALCULATE YOUR MONTHLY FEE WHEN YOU BUYING A VEHICLE\n\n");
   
        //input from user
        //user need to input a name
        printf("\nEnter your name (e.g : Arif) = ");
        scanf("%s", &name);

        //declare blacklist for receive number input and blacklistRead for invalid alphabet
        int blacklist = 1;
	    int blacklistRead = 0;
	    
	    //(loop do-while-while)if-else statement for age
	    do
	    {
		printf("\nAre you blacklist (1:Blacklist 2:Whilelist) = ");
		blacklistRead = scanf("%d", &blacklist);
		
		    while(blacklistRead != 1)
		    {
			    printf("--That is not a number!! Please Try Again :) -- \n");
			    scanf("%*[^\n]");
			    printf("Please insert a number for your status : ");
			    blacklistRead = scanf("%d", &blacklist);
		    }
		
		    //if-else statement for classify status of user
	        if(blacklist==1)
                {
                    strcpy(status,"Blacklist");
                    printf("\nSorry you cannot proceed :( \n");
                    break;
                }
            else
                {
                    strcpy(status,"Whilelist");
                    printf("\nYou can proceed :) \n");
                }
	    }
	    while(blacklist<1 || blacklist>2);
            
	    //feedback to user
	    printf("-- Your Status is Valid :v --\n");
	    
	    //display menu for user choose the type of vehicle
	    printf("\n\tVEHICLES MENU\n");
        printf("\n################################");
        printf("\n# 1:   Toyota Hilux            #");
        printf("\n# 2:   Hiace Van               #");
        printf("\n# 3:   Isuzu Lorry             #");
        printf("\n################################\n");  
        
        //declare vehicle for receive number input and vehicleRead for invalid alphabet
        int vehicle = 0;
        int vehicleRead = 1;
    
        //(loop do-while-while)if-else statement for age
	    do
	    {
		printf("\nSelect type of vehicles (1-3) = ");
		vehicleRead = scanf("%d", &vehicle);
		
		    while (vehicleRead != 1)
		    {
			    printf("--That is not a number!! Please Try Again :) -- \n");
			    scanf("%*[^\n]");
			    printf("Please insert a number for your choice : ");
			    vehicleRead = scanf("%d", &vehicle);
		    }
	    
	    //if-else statement to determine vehicle cost
	    if(vehicle==1)
            {
                printf("  --Your Number is Valid--\n");
                strcpy(type_vehic, "Toyota Hilux");
                printf("You have chose Toyota Hilux\n\n");
            }
        else if(vehicle==2)
            {
                printf("  --Your Number is Valid--\n");
                strcpy(type_vehic, "Hiace Van");
                printf("You have chose Hiace Van\n\n");
            }
        else if(vehicle==3)
            {
                printf("  --Your Number is Valid--\n");
                strcpy(type_vehic, "Isuzu Lorry");
                printf("You have chose Isuzu Lorry\n\n");
            }
        else
            {
                printf(" --Invalid Number. Try Again Boss :) --\n");
            }
	    }
        while(vehicle<1 || vehicle>3);
        
        //switchcase for vehicle
        switch(vehicle)
        {
            case 1:
                printf("Toyota Hilux price : RM 120,000");
                break;
            case 2:
                printf("Hiace Van price : RM 80,000");
                break;
            case 3:
                printf("Isuzu Lorry : RM 230,000");
                break;
            default:
                printf(" --You Enter the Wrong Choice!!!-- ");
        }
        
        //dummy question
        printf("\n\nDo you want to proceed with the deposit amount? [PRESS ANY KEY AND ENTER TO CONTINUE]\n");//dummy instruction
        scanf("%s", &query);
        
        //declare deposit for receive number input and depositRead for invalid alphabet
        int deposit = 0;
        int depositRead = 1;
        
        //(loop do-while-while) for deposit
        do
	    {
		printf("\nEnter your deposit amount (RM 50,000) = RM ");
		depositRead = scanf("%d", &deposit);
		
		    while (depositRead != 1)
		    {
			    printf("--That is not a number!! Please Try Again :) -- \n");
			    scanf("%*[^\n]");
			    printf("Please insert a number for your deposit : ");
			    depositRead = scanf("%d", &deposit);
		    }
		
		//if-else statement for amount deposit
		if(deposit>=1000 && deposit<230001)
            {
                printf("\n --Amount accepted-- \n");
            }
        else
            {
                printf("\n --Amount not accepted-- \n");
            }
        }
        while(deposit<1000 || deposit>230000);
        
        //switchcase for vehicle that will calculate the balance
        switch(vehicle)
        {
            case 1:
            
                subtraction = 120000-deposit;
                printf("\nBalance calculation for Toyota Hilux");
                printf("\nRM 120,000 - RM %d",deposit);
                printf("\nBalance : RM %d", subtraction);
                strcpy(price, "RM 120,000");
                break;
        
            case 2:
        
                subtraction = 80000-deposit;
                printf("\nBalance calculation for Hiace Van");
                printf("\nRM 80,000 - RM %d",deposit);
                printf("\nBalance : RM %d", subtraction);
                strcpy(price, "RM 80,000");
                break;
        
            case 3:
        
                subtraction = 230000-deposit;
                printf("\nBalance calculation for Isuzu Lorry");
                printf("\nRM 230,000 - RM %d",deposit);
                printf("\nBalance : RM %d", subtraction);
                strcpy(price, "RM 230,000");
                break;
        
            default:
                printf("\n --Invalid. Please Try Again :) -- \n");
        }
        while(deposit<1000 || deposit>230000);
        
        //declare year for receive number input and yearRead for invalid alphabet 
        int year = 0;
        int yearRead = 1;
        
        //(loop do-while-while) for balance
        do
	    {
		printf("\nHow many year/years do you want to settle the balance? (not more than 10 years) : ");
		yearRead = scanf("%d", &year);
		
		    while (yearRead != 1)
		        {
			    printf("--That is not a number!! Please Try Again :) -- \n");
			    scanf("%*[^\n]");
			    printf("Please insert a number for your deposit : ");
			    yearRead = scanf("%d", &year);
		        }
		
		    //if-else statement for checking validation of year
		    if(year>0 && year<11)
                {
                    printf("\n --Valid-- \n");
                }
            else
                {
                    printf("\n --Invalid!! Please Try Again-- \n");
                }
        }
        while(year<1 || year>10);
        
        //declare formula for month and settlement
        month = year*12;
        settlement = subtraction/month;
    
        printf("\nRM %d that you need to pay for %d years", subtraction, year);
        printf("\n\nTotal payment without taxes RM %d for %d months", settlement, month);
        
        //declare formula for taxes
        taxes=1.1*settlement;
    
        printf("\n\nTotal payment including taxes RM %.2f for %d months", taxes, month);
    
        //declare salary for receive number input and salaryRead for invalid alphabet
        int salary = 0;
        int salaryRead = 1;
        
        //(loop do-while-while) for salary
        do
	    {
		printf("\n\nEnter your monthly salary (minimum RM 1000): RM ");
		salaryRead = scanf("%d", &salary);
		
		    while (salaryRead != 1)
		    {
			printf("--That is not a number!! Please Try Again :) -- \n");
			scanf("%*[^\n]");
			printf("Please insert a number for your deposit : ");
			salaryRead = scanf("%d", &salary);
		    }
		
		    //if-else statement to determine that salary accepted or not
		    if(salary>=1000)
                {
                    printf("\n --Salary Accepted-- \n");
                }
            else
                {
                    printf("\n --Salary not Accepted!! Please Try Again :) -- \n");
                }
        }
        while(salary<999 || salary>10000);
        
        //declare formula for kpi
        kpi = salary/2;
        
        //if-else statement to determine that user need guarantor or not
        if(kpi<taxes)
            {   
            strcpy(note,"You need a guarantor to purchase this vehicle");
            printf("\n\nYou need a guarantor to purchase this vehicle");
            }
        else
            {
            strcpy(note,"You can proceed to purchase this vehicle");
            printf("\n\nYou can proceed to purchase this vehicle");
            }
        
        //output for user
        printf("\n\n ---------------------Summary------------------------------");
        printf("\nName\t : %s", name);
        printf("\nStatus\t : %s", status);
        printf("\nVehicle\t : %s", type_vehic);
        printf("\nDeposit\t : RM %d", deposit);
        printf("\nBalance\t : RM(x)-RM(y) = %s - RM %d", price ,deposit);
        printf("\nBalance\t : RM %d", subtraction);
        printf("\nYear\t : %d years", year);
        printf("\nMonthly Payment\t : [RM(x) - RM(y)] / Months");
        printf("\nMonthly Payment\t : [%s - RM %d] / %d months", price, deposit, month);
        printf("\nMonthly Payment\t : RM %d", settlement);
        printf("\nTax\t : 110 percent x RM %d", settlement);
        printf("\nMonthly Payment including tax : RM %.2f", taxes);
        printf("\nMonthly Salary\t : RM %d", salary);
        printf("\nKPI\t : RM(z)/2 = RM %d / 2", salary);
        printf("\nKPI\t : RM %.2f", kpi);
        printf("\nNote\t : %s", note); 
        
        //dummy end program
        printf("\n\n======================THANK YOU===========================");
        
        //declare end_task for receive number input and end_taskRead for invalid alphabet
        int end_task = 1;
        int end_taskRead = 0;
        
        //(loop do-while-while)if-else statement for end_task
        do
	    {
		printf("\n\nPress '1' if you want to re-enter the input and \nPress '2' to end this program :) : ");
		end_taskRead = scanf("%d", &end_task);
		
		while (end_taskRead != 1)
		    {
			    printf("--That is not a number!! Please Try Again :) -- \n");
			    scanf("%*[^\n]");
			    printf("Please insert a number for this question: ");
			    end_taskRead = scanf("%d", &end_task);
		    }
        
                //if-else statement for end the program or re-enter the input
                if(end_task==1)
                    {
                        goto again;
                    }
                else if(end_task==2)
                    {
                        printf("\n========================END OF PROGRAM============================\n");
                        break;
                    }
                else
                    {
                        printf("\n-- Invalid Number !! Please Try Again :) --\n");
                    }
	    }
	    while(end_task<1 || end_task>2);
        
}
		
