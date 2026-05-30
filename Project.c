#include <stdio.h>
#include <string.h>

struct DestinationDetail {
    char name[50];
    int days;
    int nights;
    char meals[50];
    char hotelIncluded[10];
    char transportIncluded[10];
    char dayPlan[7][200];
};
struct DestinationDetail northernAreas[5] = {
    { "Hunza", 3, 2, "Breakfast + Lunch", "Yes", "Yes",
        { "Day 1: Arrival in Hunza, check-in at hotel.", "Day 2: Visit Baltit Fort & Altit Fort.", "Day 3: Explore Attabad Lake, return." }
    },
    { "Skardu", 4, 3, "Breakfast + Dinner", "Yes", "Yes",
        { "Day 1: Travel to Skardu, hotel check-in.", "Day 2: Visit Shangrila Resort & Skardu Fort.", "Day 3: Day trip to Satpara Lake.", "Day 4: Return journey." }
    },
    { "Naran", 3, 2, "Breakfast Only", "Yes", "Yes",
        { "Day 1: Travel to Naran, evening leisure at lake.", "Day 2: Excursion to Saif-ul-Malook Lake.", "Day 3: Return journey." }
    },
    { "Swat", 3, 2, "Breakfast + Lunch", "Yes", "Yes",
        { "Day 1: Arrival in Mingora, Swat Museum visit.", "Day 2: Malam Jabba sightseeing & adventure sports.", "Day 3: Return journey." }
    },
    { "Fairy Meadows", 4, 3, "No Meals", "Camping", "Yes",
        { "Day 1: Travel to Raikot Bridge, jeep ride to Tattu Village.", "Day 2: Trek to Fairy Meadows, camping setup.", "Day 3: Explore Nanga Parbat view, photography.", "Day 4: Return trek and departure." }
    }
};
struct DestinationDetail coastalAreas[5] = {
	{"Karachi",3, 2,"Breakfast + Dinner","Yes","Yes",
		{"Day 1: Arrival in Karachi, visit Clifton Beach.","Day 2: Explore Quaid's Mausoleum, Pakistan Maritime Museum.","Day 3: Visit Hawksbay and return."},
    },
    {"Gwadar",4, 3,"Breakfast Only","Yes","Yes",
    	{"Day 1: Travel to Gwadar.","Day 2: Visit Gwadar Port & Beach.","Day 3: Explore Hammerhead & Princess of Hope.","Day 4: Return journey."},    
    },
    {"Kund Malir",2, 1,"Lunch + Dinner","No","Yes",
        {"Day 1: Depart Karachi to Kund Malir, evening beach walk.","Day 2: Visit Hingol National Park, return."},
    },
    {"Ormara",3, 2,"Breakfast + Dinner","No","Yes",
        {"Day 1: Travel to Ormara Beach.","Day 2: Water activities & relaxation.","Day 3: Return journey."},
    },
    {"Astola Island",3, 2,"No Meals","Camping","Yes",
        {"Day 1: Boat ride to Astola Island, tent setup.","Day 2: Snorkeling, fishing & exploration.","Day 3: Return to Gwadar/Karachi."},
    }
};
struct DestinationDetail historicalAreas[5] = {
    { "Lahore Fort", 2, 1, "Breakfast Only", "Yes", "Yes",
        { "Day 1: Arrival in Lahore, visit Badshahi Mosque & Fort.", "Day 2: Lahore Museum and Walled City walk." }
    },
    { "Badshahi Mosque", 2, 1, "No Meals", "No", "Yes",
        { "Day 1: Mosque visit and nearby food street.", "Day 2: Old Lahore exploration." }
    },
    { "Mohenjo-Daro", 3, 2, "Lunch + Dinner", "Yes", "Yes",
        { "Day 1: Travel & check-in.", "Day 2: Full Mohenjo-Daro archaeological tour.", "Day 3: Return." }
    },
    { "Taxila", 2, 1, "Breakfast Only", "No", "Yes",
        { "Day 1: Taxila Museum visit.", "Day 2: Dharmarajika Stupa exploration." }
    },
    { "Harappa", 2, 1, "Breakfast + Dinner", "Yes", "Yes",
        { "Day 1: Arrival and museum visit.", "Day 2: Ruins exploration & return." }
    }
};
struct DestinationDetail cityAreas[5] = {
    { "Islamabad", 2, 1, "Breakfast Only", "Yes", "Yes",
        { "Day 1: Faisal Mosque, Pakistan Monument.", "Day 2: Monal & hiking trails." }
    },
    { "Lahore", 3, 2, "Breakfast + Dinner", "Yes", "Yes",
        { "Day 1: Walled City tour.", "Day 2: Museums & food street.", "Day 3: Wagah Border ceremony." }
    },
    { "Karachi", 3, 2, "No Meals", "No", "Yes",
        { "Day 1: City tour.", "Day 2: Beach visit.", "Day 3: Shopping & return." }
    },
    { "Peshawar", 2, 1, "Breakfast Only", "No", "Yes",
        { "Day 1: Qissa Khwani Bazaar.", "Day 2: Museum & Bala Hisar Fort." }
    },
    { "Quetta", 3, 2, "Breakfast + Dinner", "Yes", "Yes",
        { "Day 1: Hanna Lake.", "Day 2: Quaid-e-Azam residency.", "Day 3: City exploration." }
    }
};
struct DestinationDetail adventureAreas[5] = {
    { "K2 Base Camp", 10, 9, "Breakfast + Lunch + Dinner", "Camping", "Yes",
        { "Day 1–2: Travel to Skardu.", "Day 3: Askole trek start.", "Day 4–7: Baltoro Glacier trek.", "Day 8: K2 Base Camp.", "Day 9–10: Return." }
    },
    { "Rakaposhi Trek", 4, 3, "Breakfast + Dinner", "Camping", "Yes",
        { "Day 1: Travel to Nagar.", "Day 2: Trek to base camp.", "Day 3: Explore & descend.", "Day 4: Return." }
    },
    { "Fairy Meadows Hike", 3, 2, "Breakfast Only", "Huts", "Yes",
        { "Day 1: Travel to Raikot ? Jeep ride.", "Day 2: Fairy Meadows & Nanga Parbat view.", "Day 3: Return trek." }
    },
    { "Deosai", 3, 2, "No Meals", "Camping", "Yes",
        { "Day 1: Travel to Deosai.", "Day 2: Sheosar Lake.", "Day 3: Return." }
    },
    { "Khunjerab Pass", 2, 1, "Breakfast Only", "No", "Yes",
        { "Day 1: Travel to Passu.", "Day 2: Visit Khunjerab Pass, return." }
    }
};
struct DestinationDetail religiousAreas[5] = {
    { "Kartarpur", 1, 0, "No Meals", "No", "Yes",
        { "Day 1: Visit Kartarpur Corridor & Gurdwara Darbar Sahib." }
    },
    { "Panja Sahib", 2, 1, "Breakfast Only", "No", "Yes",
        { "Day 1: Visit Gurdwara Panja Sahib.", "Day 2: Local spiritual sites." }
    },
    { "Multan Shrines", 2, 1, "Breakfast + Dinner", "Yes", "Yes",
        { "Day 1: Shrine of Shah Rukn-e-Alam.", "Day 2: Bahauddin Zakariya & city sites." }
    },
    { "Makli", 2, 1, "No Meals", "No", "Yes",
        { "Day 1: Explore Makli Necropolis.", "Day 2: Shah Jahan Mosque & return." }
    },
    { "Shah Rukn-e-Alam", 1, 0, "No Meals", "No", "Yes",
        { "Day 1: Shrine visit & guided tour." }
    }
};

void planPackage();
void showCategories();
int suggestCategoryByMood();
int suggestCategoryByPersonality();
void showDetails(struct DestinationDetail d);
void personalDetails(int prices[], char destinations[][30], int count);
float payment(float totalAmount);
void printReceipt(char name[], char cnic[], char gender, int members,float totalAmount);
int discount();
int suggestions(char bookedDestinations[][30], int destCount);
void exitSystem();
void style(char style,int times);
void gap(int times);

int main(){
	
    int choice,flag,i;
    gap(8);
    printf("***** Tourism Management System *****\n");
    gap(7);
    printf("~Where smart planning meets unforgettable journeys~\n\n\n");
    gap(9);
    printf("***** Home Page *****\n");
    do{
    	flag=0;
        printf("\n(1)View Categories and Book Packages\n(2)Plan your own package\n(3) Exit\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				showCategories();
				break;
			case 2:
				planPackage();
				break;	
			case 3:
				exitSystem();
				flag++;
				break;
			default :
				printf("Invalid choice!");
				break;		
		}
	}while(flag==0);
    return 0;
}

void planPackage(){
	
    int i,days,mealsPerDay,age,members,flag1=0;
    float distance=0,stayCost=0,foodCost=0,travelCost=0,totalAmount=0;
    char destinations[200],name[30],gender,cnic[14];
	style('=',168);
    printf("\t\t\t\t\tTransport rate per km = 45.0\tHotel Cost per day = 5000\tPer Meal Cost = 800\n");
	style('=',168);
	printf("Enter full name: ");
    scanf(" %[^\n]", name);
    do{
        printf("Enter gender (M/F): ");
        scanf(" %c", &gender);
        if(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') 	printf("Invalid gender!\n");
    }while(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    do{
        printf("Enter age: ");
        scanf("%d", &age);
        if(age < 0 || age>99) printf("Invalid age!\n");
    }while(age < 0 || age>99);
    int valid;
    do{
        valid = 1;
        printf("Enter CNIC (13 digits): ");
        scanf(" %s", cnic);
        if(strlen(cnic) != 13) valid = 0;
        int k=0;
        while(k < 13) {
            if(cnic[k] < '0' || cnic[k] > '9') valid = 0;
            k++;
        }
        if(!valid) printf("Invalid CNIC!\n");
    }while(!valid);
    printf("Enter name of destinations: ");
    scanf(" %[^\n]",destinations);
    printf("Enter distance(in km): ");
    scanf(" %f",&distance);
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("Enter number of meals per day: ");
    scanf("%d", &mealsPerDay);
    printf("Enter number of members: ");
    scanf("%d",&members);
    travelCost= distance * 45.0; 
    stayCost = days * 5000;
    foodCost = days * mealsPerDay * members * 800;
    totalAmount = stayCost + foodCost + travelCost;
    printf("\n--- Your Custom Package ---\n\n");
    printf("Destinations: %s\n",destinations);
    printf("Days: %d\n", days);
    printf("Meals per day: %d\n", mealsPerDay);
    printf("Hotel cost: %.2f\n", stayCost);
    printf("Food cost: %.2f\n", foodCost);
    printf("Travel cost: %.2f\n", travelCost);
    printf("Total Package Cost: %.2f\n", totalAmount);
    float amount=payment(totalAmount);
    printReceipt(name, cnic, gender, members,amount);
    char again;
    do{
    	printf("\nDo you want to book another package? (Y/N): ");
    	scanf(" %c", &again);
    	if(again == 'Y' || again == 'y')  flag1++;
    	else if(again == 'N' || again == 'n'){
    		printf("Select exit to close the website");
    		flag1++;
		}	
		else{
        	printf("\nInvalid selection\n");
		} 
	}while(flag1==0);
}

void showCategories(){
	int catChoice,i,flag1,flag2,flag3;
    char more;
    char categories[6][30] = {"Northern Areas", "Coastal Areas", "Historical & Cultural","City / Urban", "Adventure & Trekking", "Religious / Spiritual"};
    int prices[6][5] = {
        {27500, 34500, 19000, 22000, 21000},
        {15000, 26000, 8000, 13000, 27000},
        {9000, 8500, 11000, 10500, 9500},
        {16000, 18000, 15000, 12000, 14000},
        {165000, 38000, 22000, 8000, 9000},
        {7000, 8000, 9000, 8500, 6500}
    };
    char destinations[6][5][30] = {
        {"Hunza","Skardu","Naran","Swat","Fairy Meadows"},
        {"Karachi","Gwadar","Kund Malir","Ormara","Astola Island"},
        {"Lahore Fort","Badshahi Mosque","Mohenjo-Daro","Taxila","Harappa"},
        {"Islamabad","Lahore","Karachi","Peshawar","Quetta"},
        {"K2 Base Camp","Rakaposhi Trek","Fairy Meadows Hike","Deosai","Khunjerab Pass"},
        {"Kartarpur","Panja Sahib","Multan Shrines","Makli","Shah Rukn-e-Alam"}
    };  
    do {
        printf("\nHow do you want to select a category?\n\n");
        printf("1. Suggest based on your mood\n");
        printf("2. Suggest based on your personality\n");
        printf("3. Select category on your own\n\n");
        printf("Enter choice: ");
        int modeChoice;
        scanf("%d",&modeChoice);
        switch(modeChoice){
            case 1: catChoice = suggestCategoryByMood(); break;
            case 2: catChoice = suggestCategoryByPersonality(); break;
            case 3: catChoice = 0; break; 
            default: printf("Invalid choice!\n"); catChoice = -1; break;
        } 
    } while(catChoice == -1);
    if(catChoice == 0){
        printf("\n***Categories***\n\n");
        for(i=0;i<6;i++) 	printf("%d. %s\n", i+1, categories[i]);
        do{ 
            flag1=0;
            printf("\nSelect Category (1-6): ");
            scanf("%d",&catChoice);
            if(catChoice<1 || catChoice>6){
                printf("\nInvalid selection\n");
                flag1++;
            } 
        }while(flag1==1);
    }
    catChoice--;	
    int selected[5],count = 0,destChoice[5],j=0;
    more = 'Y';
    while(more == 'Y' || more == 'y') {
        printf("\nDestinations in %s:\n\n", categories[catChoice]);
		for(i=0;i<5;i++)    printf("%d. %s (Price per person: Rs %d)\n", i+1, destinations[catChoice][i], prices[catChoice][i]);
        do{
        	flag2=0;
		    printf("\nSelect a destination (1-5): ");
        	scanf("%d",&destChoice[j]);
    		if(destChoice[j]<1 || destChoice[j]>5){
    			printf("\nInvalid selection\n");
    			flag2++;
			} 
		}while(flag2==1);
		switch(catChoice) {
	        case 0: showDetails(northernAreas[destChoice[j]-1]); break;
    	    case 1: showDetails(coastalAreas[destChoice[j]-1]); break;
        	case 2: showDetails(historicalAreas[destChoice[j]-1]); break;
	        case 3: showDetails(cityAreas[destChoice[j]-1]); break;
    	    case 4: showDetails(adventureAreas[destChoice[j]-1]); break;
        	case 5: showDetails(religiousAreas[destChoice[j]-1]); break;
    	}
        count++;
        if(count < 5) {
        	int flag=0;
        	do{
            printf("\nDo you want to add another destination from this category? (Y/N): ");
            scanf(" %c", &more);
            if(more == 'Y' || more == 'Y' || more == 'N' || more == 'n') flag++;
            else printf("Invalid selection");
        	}while(flag==0);
        }
		else 	more = 'N';
    }
    int totalPrices[5];
    char bookedDest[5][30];
    for(i=0;i<count;i++){
        totalPrices[i] = prices[catChoice][destChoice[i]-1];
        strcpy(bookedDest[i], destinations[catChoice][destChoice[i]-1]);
    }
    char book;
    do{
		flag3=0;
	    printf("\nDo you want to book above package(s)? (Y/N): ");
    	scanf(" %c",&book);
   	 	if(book=='Y' || book=='y') 	personalDetails(totalPrices, bookedDest, count);
    	else if(book=='N' || book=='n') 	showCategories();
    	else{
    		printf("\nInvalid selection\n");
    		flag3++;
		}
	}while(flag3==1);
}

int suggestCategoryByMood(){
	
    int moodChoice,cat,flag1,flag2;
    char seeDest;
    do{
    	flag1=0;
    	printf("\nSelect your current mood:\n");
    	printf("1. Relaxed\n2. Adventurous\n3. Spiritual\n4. Curious / Exploring\n");
    	printf("Enter choice: ");
    	scanf("%d", &moodChoice);
    	switch(moodChoice) {
        	case 1: 
				cat = 1; 
				break;
        	case 2: 
				cat = 5; 
				break; 
        	case 3: 
				cat = 6; 
				break;
        	case 4: 
				cat = 3; 
				break; 
        	default: 
            	printf("\nInvalid choice!\n\n");
            	flag1++;
    	}
    }while(flag1==1);
    printf("\nSuggested category: ");
    switch(cat) {
        case 1: 
			printf("Coastal Areas\n"); 
			break;
        case 3: 
			printf("Historical & Cultural\n"); 
			break;
        case 5: 
			printf("Adventure & Trekking\n"); 
			break;
        case 6: 
			printf("Religious / Spiritual\n"); 
			break;
    }
    do{
    	flag2=0;
    	printf("\nDo you want to see destinations in this category? (Y/N): ");
    	scanf(" %c", &seeDest);
    	if(seeDest=='Y' || seeDest=='y') return cat;
    	else if(seeDest=='N' || seeDest=='n') return -1;
		else{
			printf("\nInvalid choice!\n\n");
           	flag2++;
    	}
    }while(flag2==1);
}

int suggestCategoryByPersonality() {
    int score[6] = {0,0,0,0,0,0},flag1,flag2,flag3,flag4,flag5;
    char ans;
    char *categories[6] = {"Northern Areas", "Coastal Areas", "Historical & Cultural", "City / Urban", "Adventure & Trekking", "Religious / Spiritual"};
    do{
		flag1=0;
		printf("\nAnswer a few questions to find your ideal travel category.\n");
   	 	printf("Q1. Do you enjoy mountains, lakes, and natural scenery? (Y/N): ");
    	scanf(" %c", &ans);
    	if(ans=='Y'||ans=='y'){
        	score[0]++; 
        	score[4]++;
    	} 
		else if(ans=='N'||ans=='n'){
        	score[1]++; 
        	score[3]++;
   		}
   		else{
			printf("\nInvalid choice!\n\n");
           	flag1++;
    	}
    }while(flag1==1);
    do{
		flag2=0;
    	printf("Q2. Are you interested in history, culture, and architecture? (Y/N): ");
    	scanf(" %c", &ans);
    	if(ans=='Y'||ans=='y') {
        	score[2]++; 
        	score[3]++; 
    	}
    	else if(ans=='N'||ans=='n'){
        	score[0]++; 
        	score[1]++;
        	score[4]++;
   		}
   		else{
			printf("\nInvalid choice!\n\n");
           	flag2++;
    	}
    }while(flag2==1);
    do{
		flag3=0;
    	printf("Q3. Do you enjoy physical activities like trekking, climbing, or sports? (Y/N): ");
    	scanf(" %c", &ans);
    	if(ans=='Y'||ans=='y') {
        	score[4]++; 
        	score[0]++; 
    	}
    	else if(ans=='N'||ans=='n'){
        	score[1]++;
   		}
   		else{
			printf("\nInvalid choice!\n\n");
           	flag3++;
    	}
    }while(flag3==1);
    do{
		flag4=0;
    	printf("Q4. Are you interested in spiritual or religious experiences? (Y/N): ");
    	scanf(" %c", &ans);
    	if(ans=='Y'||ans=='y'){
        	score[5]++; 
        	score[2]++; 
    	}
    	else if(ans=='N'||ans=='n'){
        	score[0]++; 
        	score[1]++;
        	score[4]++;
   		}
   		else{
			printf("\nInvalid choice!\n\n");
           	flag4++;
    	}
    }while(flag4==1);
    int i, max = 0, cat = 0;
    for(i=0;i<6;i++) {
        if(score[i] > max) {
            max = score[i];
            cat = i+1; 
        }
    }
    printf("\nSuggested category based on your personality: %s\n\n", categories[cat-1]);
    do{
		flag5=0;
	printf("Do you want to see destinations in this category? (Y/N): ");
    scanf(" %c", &ans);
    if(ans=='Y'||ans=='y') return cat;
    else if(ans=='N'||ans=='n') return -1;
    else{
			printf("\nInvalid choice!\n\n");
           	flag5++;
    	}
    }while(flag5==1);
}

void showDetails(struct DestinationDetail d){
	int i;
    printf("\n===== Package Details =====\n");
    printf("Destination: %s\n", d.name);
    printf("Duration: %d Days / %d Nights\n", d.days, d.nights);
    printf("Meals Included: %s\n", d.meals);
    printf("Hotel Included: %s\n", d.hotelIncluded);
    printf("Transport Included: %s\n\n", d.transportIncluded);
    for(i=0; i < d.days; i++) {
        printf("%s\n", d.dayPlan[i]);
    }
}

void personalDetails(int prices[], char destinations[][30], int count){
	
    int age,members,i,flag2=0;
    float totalAmount=0;
    char name[30],cnic[20],gender;
    printf("\n\n");
    gap(9);
    printf("***** Personal Details *****\n\n");
    printf("Enter full name: ");
    scanf(" %[^\n]", name);
    do {
        printf("Enter gender (M/F): ");
        scanf(" %c", &gender);
        if(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') printf("Invalid gender!\n");
    } while(gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    do {
        printf("Enter age: ");
        scanf("%d", &age);
        if(age < 0 || age>99) printf("Invalid age!\n");
    } while(age < 0 || age>99);
    int valid;
    do {
        valid = 1;
        printf("Enter CNIC (13 digits): ");
        scanf(" %s", cnic);
        if(strlen(cnic) != 13) valid = 0;
        int k;
        k = 0;
        while(k < 13) {
            if(cnic[k] < '0' || cnic[k] > '9') valid = 0;
            k++;
        }
        if(!valid) printf("Invalid CNIC!\n");
    }while(!valid);
    printf("Enter number of members: ");
    scanf("%d",&members);
    for(i=0;i<count;i++)       totalAmount += prices[i] * members;
    float amount=payment(totalAmount);
    printReceipt(name, cnic, gender, members,amount);
    suggestions(destinations,count);
    char again;
    do{
    	printf("\nDo you want to book another package? (Y/N): ");
    	scanf(" %c", &again);
    	if(again == 'Y' || again == 'y')  flag2++;
    	else if(again == 'N' || again == 'n'){
    		printf("\nSelect exit to close the website\n");
    		flag2++;
		}
		else{
        	printf("\nInvalid selection\n");
		} 
	}while(flag2==0);
}

float payment(float totalAmount){
	
	int flag1=0,flag2=0,select,off,i;
	gap(10);
    printf("***** Payment *****\n\n");
    printf("Total amount to pay: Rs %.2f\n\n", totalAmount);
    off=discount();
    if(off==1){
    	printf("\nCongratulations!You have avail 10%% discount\n\n");
    	totalAmount=totalAmount-(totalAmount*0.1);
    	printf("Total Amount to pay: %.2f\n",totalAmount);
	}
    else printf("\nNo discount.Better Luck Next Time!\n");
    do{
		flag1=0;
		printf("\nPayment Methods\n\n(1)Card\n(2)Bank Transfer\n(3)Cash\n\nSelect payment method:");
    	scanf("%d",&select);
    	if(select<0 || select>3){
    		printf("\nInvalid selection\n");
    		flag1++;
		} 
	}while(flag1==1);
    printf("Processing payment...\n");
    sleep(3);
	printf("Payment Successful!\n");
	sleep(1);
	return totalAmount;
}

int discount(){
	
	int i,j,row,col,flag;
	printf("To avail the discount find number 5 in the boxes below.Best of Luck!\n");
	char a[4][4]={'*','*','*','*',
				  '*','5','*','*',
				  '*','*','*','*',
				  '*','*','5','*'};	
	char b[4][4]={'_','_','_','_',
				  '_','_','_','_',
				  '_','_','_','_',
				  '_','_','_','_'};			
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				printf(" %c",b[i][j]);
			}
			printf("\n");
		}
	do{
		flag=0;
		printf("\nSelect the position to reveal\n\n");
		printf("Select row : ");
		scanf("%d",&row);
		printf("Select column : ");
		scanf("%d",&col);
	
		if(row>4 || row<0 || col>4 || col<0){
			printf("\nInvalid selection!\n\n");
			flag++;
		}
	}while(flag==1);
	b[row-1][col-1]=a[row-1][col-1];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" %c",b[i][j]);
		}
		printf("\n");
	}
	if(b[row-1][col-1]=='5')	return 1;
	else return 0;
}

void printReceipt(char name[], char cnic[], char gender, int members,float totalAmount){
	
    int i;
    printf("\n\n=================== TOURISM RECEIPT ===================\n");
    printf("Name             : %s\n", name);
    printf("CNIC             : %s\n", cnic);
    printf("Gender           : %c\n", gender);
    printf("Number of members: %d\n", members);
    printf("-------------------------------------------------------\n");
    printf("Total Amount Paid: Rs %.2f\n", totalAmount);
    printf("=======================================================\n");
    printf("\t\n!Kindly save the screenshot of this receipt to use it in future!\n\n\n");
}

int suggestions(char bookedDestinations[][30], int destCount) {
	
	int i,j;
	gap(6);
    printf("***** FEW SUGGESTIONS FROM US TO MAKE YOUR JOURNEY MORE ENJOYABLE *****\n");
    for(i= 0;i<destCount;i++){
        printf("\n");
        if(strcmp(bookedDestinations[i], "Hunza") == 0) {
            style('=',168);
            printf("%80s\n", "HUNZA");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Warm clothes","Dry fruits","High altitude","Chapshuro","Baltit Fort");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hiking shoes","Hunza caps","Stay hydrated","Apricot Cake","Attabad Lake");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Jacket","Handicrafts","Walk slowly","Hunza Bread","Passu Cones");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Skardu") == 0) {
            style('=',168);
            printf("%80s\n", "SKARDU");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Thermal layers","Gemstones","Expect cold","Balti Gosht","Shangrila");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Gloves","Dry apricots","Avoid overexertion","Mamtu","Kachura Lake");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Camera","-","-","-","Skardu Fort");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Naran") == 0) {
            style('=',168);
            printf("%80s\n", "NARAN");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Raincoat","Wooden crafts","Sudden weather change","Trout Fish","Saif-ul-Malook");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hiking boots","-","-","-","Babusar Top");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Swat") == 0) {
            style('=',168);
            printf("%80s\n", "SWAT");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Joggers","Handmade shawls","Curvy roads","Swati Trout","Malam Jabba");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Light jacket","-","Travel early","-","Kalam Valley");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Fairy Meadows") == 0) {
            style('=',168);
            printf("%80s\n", "FAIRY MEADOWS");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hiking gear","Wooden carvings","Tough trek","Local organic dishes","Nanga Parbat View");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Headlamp","-","High altitude","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Karachi") == 0) {
            style('=',168);
            printf("%80s\n", "KARACHI");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sunscreen","Ajrak","Stay hydrated","Biryani","Clifton Beach");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Light clothes","Blue pottery","-","Nihari","Do Darya");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Gwadar") == 0) {
            style('=',168);
            printf("%80s\n", "GWADAR");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sunblock","Seashell crafts","Hot weather","Grilled Fish","Hammerhead");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Beach sandals","-","-","-","Gwadar Port");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Kund Malir") == 0) {
            style('=',168);
            printf("%80s\n", "KUND MALIR");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hat","Handmade items","Remote area","Fresh Fish BBQ","Princess of Hope");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Water bottles","-","Carry snacks","-","Makran Coastal Road");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Ormara") == 0) {
            style('=',168);
            printf("%80s\n", "ORMARA");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sunglasses","Local seashell art","Limited shops","Fish Tikka","Ormara Beach");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Slippers","-","-","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Lahore Fort") == 0) {
            style('=',168);
            printf("%80s\n", "LAHORE FORT");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Comfortable shoes","Miniature art","Stay hydrated","Lahori Chargha","Sheesh Mahal");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Badshahi Mosque") == 0) {
            style('=',168);
            printf("%80s\n", "BADSHAHI MOSQUE");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Modest clothing","Islamic calligraphy","Avoid weekends","Food Street BBQ","Courtyard View");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Mohenjo-Daro") == 0) {
            style('=',168);
            printf("%80s\n", "MOHENJO-DARO");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hat","Indus Valley replicas","Very hot weather","Sindhi Biryani","Great Bath");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Taxila") == 0) {
            style('=',168);
            printf("%80s\n", "TAXILA");
        	style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Comfortable shoes","Stone carvings","Sun protection","Local Desi Food","Dharmarajika Stupa");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Harappa") == 0) {
            style('=',168);
            printf("%80s\n", "HARAPPA");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Cap","Harappa miniatures","Avoid noon heat","Punjabi Thali","Harappa Museum");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Islamabad") == 0) {
            style('=',168);
            printf("%80s\n", "ISLAMABAD");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Light jacket","Handicrafts (Super Market)","Traffic hours","Pulao","Faisal Mosque");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","-","-","-","Sajji","Daman-e-Koh");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Lahore") == 0) {
            style('=',168);
            printf("%80s\n", "LAHORE");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Comfortable clothing","Khussa Shoes","Traffic rush hours","Karahi","Minar-e-Pakistan");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","-","-","-","Paaye, Halwa Puri","Food Street");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Peshawar") == 0) {
            style('=',168);
            printf("%80s\n", "PESHAWAR");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Light clothes","Peshawari Chappal","Crowded bazaars","Charsi Tikka","Qissa Khwani Bazaar");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Quetta") == 0) {
            style('=',168);
            printf("%80s\n", "QUETTA");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Jacket","Dry fruits, Rugs","Cold weather","Sajji, Rosh","Hanna Lake");
            style('=',168);
        }
		else if(strcmp(bookedDestinations[i], "K2 Base Camp") == 0) {
            style('=',168);
            printf("%80s\n", "K2 BASE CAMP");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Trekking gear","Expedition badges","High altitude","High-calorie snacks","Concordia");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Oxygen cans","-","Only trained trekkers","-","-");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sleeping bag","-","-","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Rakaposhi Trek") == 0) {
            style('=',168);
            printf("%80s\n", "RAKAPOSHI TREK");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Trekking shoes","Local crafts","Steep trail","Local Hunza dishes","Rakaposhi Viewpoint");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Backpack","-","-","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Fairy Meadows Hike") == 0) {
            style('=',168);
            printf("%80s\n", "FAIRY MEADOWS HIKE");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Hiking stick","Handicrafts","Steep trek","Local organic meals","Nanga Parbat View");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Warm socks","-","-","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Deosai") == 0) {
            style('=',168);
            printf("%80s\n", "DEOSAI");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Jacket","Natural honey","Cold winds","Karahi (Skardu style)","Sheosar Lake");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sunglasses","-","-","-","-");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Khunjerab Pass") == 0) {
            style('=',168);
            printf("%80s\n", "KHUNJERAB PASS");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Warm clothes","Pak-China Border items","Very cold","Local dry fruits","Border Gate");
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Gloves","-","Altitude sickness","-","-");
            style('=',168);
        } 
        else if(strcmp(bookedDestinations[i], "Kartarpur") == 0) {
            style('=',168);
            printf("%80s\n", "KARTARPUR");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Respectful clothing","Religious books","Follow temple rules","Langar","Gurdwara Corridor");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Panja Sahib") == 0) {
            style('=',168);
            printf("%80s\n", "PANJA SAHIB");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Modest clothing","Sikh cultural items","Crowded during festivals","Langar Prasad","Temple Interior");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Multan Shrines") == 0) {
            style('=',168);
            printf("%80s\n", "MULTAN SHRINES");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Cap, Light clothing","Multani Blue Pottery","Hot weather","Sohan Halwa","Shah Rukn-e-Alam Shrine");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Makli") == 0) {
            style('=',168);
            printf("%80s\n", "MAKLI");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Sunblock, Hat","Stone replicas","Sunny & open area","Sindhi Food","Makli Tombs");
            style('=',168);
        }
        else if(strcmp(bookedDestinations[i], "Shah Rukn-e-Alam") == 0) {
            style('=',168);
            printf("%80s\n", "SHAH RUKN-E-ALAM");
            style('=',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Packing List","Souvenirs","Health Advisory","Famous Food","Photo Spots");
            style('-',168);
            printf("\t\t\t| %-22s | %-22s | %-22s | %-22s | %-22s |\n","Respectful dress","Blue pottery, Sohan Halwa","Crowds during evening","Multani Karahi","Shrine Exterior");
            style('=',168);
        }
    }
    return;
}

void exitSystem(){ 
	
	int i;
	printf("\n\n");
	gap(8);
	printf("***** Thank you for visiting us! *****\n\n\n");
	printf("For any query feel free to contact us\n\n");
	printf("Mobile number: : 03312024118\t\t\t\tEmail: Tourismsystem@gmail.com");
}

void style(char style,int times){
	int i;
	for(i=0;i<times;i++) printf("%c",style);
}

void gap(int times){
	int i;
	for(i=0;i<times;i++) printf("\t");
}
