#include <stdio.h>
#include <conio.h>

int parli(){
	printf("Election is not happening now\nDo you wish to exit? 1 - Yes or 2 - No\n");
	int b;
	scanf("%d",&b);
	return b;
	
}

int state(){
	printf("Press\n1 for Tamil Nadu\nYour Output: ");
	int sta;
	scanf("%d",&sta);
	switch(sta){
		case 1:
			printf("Press \n1 for Coimbatore North\n2 for Coimbatore South\n3 for Los Angeles\n4 for Marandhuten\n5 for Madagascar\nYour Output: ");
			int cho;
			scanf("%d",&cho);
			/*switch(cho){
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
				case 4:
					
					break;
				case 5:
					
					break;
			}*/
			printf("Press \n1 for Ram DMK\n2 for Prem ADMK\n3 for Sneha Naam Tamizhar\n4 for Tulasi BJP\n5 for Sudhagar INC\nYour Output: ");
			int vote;
			scanf("%d",&vote);
			printf("\n\nThis is a State election. Your voting acknowledgement: \n\n");
			printf("Election State: Tamil Nadu\n");
			printf("Constitution: ");
			switch(cho){
				case 1:
					printf("Coimbatore North");
					break;
				case 2:
					printf("Coimbatore South");
					break;
				case 3:
					printf("Los Angeles");
					break;
				case 4:
					printf("Marandhuten");
					break;
				case 5:
					printf("Madagascar");
					break;
			}
			printf("\nVoting Party: ");
			switch(cho){
				case 1:
					printf("Ram DMK");
					break;
				case 2:
					printf("Prem ADMK");
					break;
				case 3:
					printf("Sneha Naam Tamizhar");
					break;
				case 4:
					printf("Tulasi BJP");
					break;
				case 5:
					printf("Sudhagar INC");
					break;
			}
			break;
	}
	return 3;
	
	
}



int main(){
	int qwer;
	char user[100], password[100];
	printf("Enter username: ");
	scanf("%s",user);
	printf("Enter password: ");
	scanf("%s",password);
	aaa:
	printf("Press 1 for Parlimentary elections\nPress 2 for State elections\nYour output: ");
	int inp;
	scanf("%d",&inp);
	switch(inp){
		case 1:
			qwer=parli();
			if(qwer==1){
				goto end;
			}
			else if(qwer==2) goto aaa;
			break;
		case 2:
			qwer=state();
			if(qwer==1){
				goto aaa;
			}
			else if(qwer==2) goto end;
			break;
		default:
			printf("Invalid");
			goto aaa;
	}
	end:
	printf("\n\nThank you");
}
