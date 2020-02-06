#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Room{
	
	char name[100];
	
};
typedef struct Room room;

int main(){
	
	srand(time(NULL));
	
	for(int i = 0; i<70;i++){
		printf("\n");
	}
	
	room tRoom[10] = {"entrance","empty","dark","strange","secret","weird","scary","hardcore","magic","teleportation"};
	int bGame = 0;
	int nChoice = 0;
	char  sChoice[100] = "";
	
	while(bGame == 0){
		
		nChoice = 0;
		printf("\n");
		
		while(nChoice == 0){
			
			nChoice = 1;
			printf("Where do you want to go ?\n");
			printf("- \"%s\" room\n", tRoom[1].name);
			printf("- \"%s\" room\n", tRoom[2].name);
			
			printf("0) Quit game (please don't T_T)\n");
			
			scanf("%100s", sChoice);
			
		}
		
		if(strcmp(sChoice, tRoom[1].name) == 0){
			
			printf("Woaw you arrived at the \"%s\" room !\n", tRoom[1].name);
			
		}
		else if(strcmp(sChoice, tRoom[2].name) == 0){
			
			printf("Woaw you arrived at the \"%s\" room !\n", tRoom[2].name);
			
		}
		else if (strcmp(sChoice, "0") == 0){
			
			bGame = 1;
			
		}
		else{
			
			nChoice = 0;
			
		}
		
		
	}
	
	
	return 0;
}