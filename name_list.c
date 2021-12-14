//=============================================================================================
//
//
//					This Program is made by Yugal Sharma
//					Instagram:- @yugal.sharmaa
//
//
//
//=============================================================================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	printf("\n_______________________Name List_________________________________");
	int number,i,j;
	char names[20][20];
	printf("\n\n");
	printf("\n\tHow many names you want to enter:\t");
	scanf("%d",&number);
	printf("\n__________________________________________________________________");
// 	Entering the names
	system("cls");
	printf("\n__________________________________________________________________");
	for(i=0;i<number;i++){
			printf("\n\tEnter the %d Name:\t",i);
			scanf("%s",&names[i]);	
	}//for I ends here
	printf("\n__________________________________________________________________");

	
//	Printing the names	
	printf("\n__________________________________________________________________");
	for(i=0;i<number;i++){
			printf("\n\tYou have entered:\t%s",names[i]);
		}//for I loop ends here
	printf("\n__________________________________________________________________");
		printf("\n\n\tPress enter to sort names");
	getch();
		system("cls");
// Sorting the names in ascending order
	char temp[30];
	for(i=0;i<number;i++){
			for(j=i+1;j<number;j++){
				if(strcmp(names[i],names[j])>0){
					strcpy(temp,names[i]);
					strcpy(names[i],names[j]);
					strcpy(names[j],temp);
				}//if ends here
		}//for J ends here
	}//for I ends here
	printf("\n\n");
	printf("\n__________________________________________________________________");
//	Printing the sorted array	
	for(i=0;i<number;i++){
		printf("\n\tThe sorted string is:\t%s",names[i]);
	}//for ends here
	printf("\n__________________________________________________________________");
	printf("\n\n\tPress enter to continue");
	getch();
	system("cls");
	int dup;
	again:
	printf("\n\n\n");
	printf("\n__________________________________________________________________");
	printf("\n\t1: Find the duplicate name");
	printf("\n\t2: Display the list");
	printf("\n\t3: EXIT");
	printf("\n\n\tChoose your option:\t");
	scanf("%d",&dup);
	printf("\n__________________________________________________________________");
	
	switch(dup){
		case 1:
			goto duplicate;
			break;
		case 2:
			for(i=0;i<number;i++){
				for(j=i+1;j<number;j++){
					if(strcmp(names[i],names[j])>0){
						strcpy(temp,names[i]);
						strcpy(names[i],names[j]);
						strcpy(names[j],temp);
					}//if ends here
				}//for J ends here
			}//for I ends here
			printf("\n\n");
//	Printing the sorted array	
		printf("\n__________________________________________________________________");
		for(i=0;i<number;i++){
				printf("\n\tThe sorted string is:\t%s",names[i]);
			}//for ends here
		printf("\n__________________________________________________________________");
			goto again;
		break;
		
		case 3:
			printf("\n\tExiting the program........");
			return;
			break;
		default:
			printf("\n\tInvalid option");
			break;	
	}//switch ends here
		
		
		
	system("cls");	
	int choice,store_data,place;
	char change[10][10],new_name[10][10],tempo[20];
//	Checking for same name
	duplicate:
	printf("\n__________________________________________________________________");
	for(i=0;i<number;i++){
		for(j=i+1;j<number;j++){
			if(strcmp(names[i],names[j])==0){
				printf("\n\n\tYes you have a duplicate name:\t%s",names[i]);
			}//if ends here
		}//j ends here
	}//I ends here
	printf("\n__________________________________________________________________");
			 printf("\n\n\tPress enter to continue");
			 getch();
			 system("cls");
			 printf("\n\n");
			 again_again:
			 printf("\n\t1: Do you wish to change");	
			 printf("\n\t2: EXIT");
			 
			 printf("\n\tEnter your choice:\t");
			 scanf("%d",&choice);
			 printf("\n__________________________________________________________________");
			 switch(choice){
			 	case 1:	
//			 			printf("\n\tAt which place you want to replace name:\t");
//			 			scanf("%d",&place);
			 			printf("\n\tEnter the name you want to change:\t");
			 			scanf("%s",&change[0]);
			 		for(i=0;i<number;i++){
			 				store_data=strcmp(names[i],change[i]);
			 				if(store_data==0){
//			 					printf("\n\n\n\tYes programing is working till here");
			 					printf("\n\tEnter the New Name:\t");
			 					scanf("%s",&new_name[i]);
			 					strcpy(tempo,names[i]);
			 					strcpy(names[i],new_name[i]);
			 					printf("\n\tName have been updated");
			 					for(i=0;i<number;i++){
									printf("\n\tThe sorted string is:\t%s",names[i]);
								}//for ends here
			 				}//if ends here
			 				else{
			 					printf("No %s does not exist in the list",choice);
							 }//else ends here
//						 }//for J ends here
					 }//for I ends here
					 break;
				case 2:
					return;
					break;
				default:
					printf("\n\t Invalid option, please choose a valid one");
					goto again_again;
					break;	 
			 }//Switch ends here
}//main ends here

//=============================================================================================
//
//
//					This Program is made by Yugal Sharma
//					Instagram:- @yugal.sharmaa
//
//
//
//=============================================================================================
