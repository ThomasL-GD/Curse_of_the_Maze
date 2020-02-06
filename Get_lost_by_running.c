#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Room{
	
	int number;
	
};
typedef struct Room room;

int main(){
	
	srand(time(NULL));
	
	for(int i = 0; i<70;i++){
		printf("\n");
	}
	
	room tRoom[10] = {0,1,2,3,4,5,6,7,8,9};
	int bGame = 0;
	int nChoice = 0;
	
	while(bGame == 0){
		
		nChoice =-1;
		
		while(nChoice < 0 || nChoice > 2){
			
			printf("Where do you want to go ?\n");
			printf("1) Room %d\n", tRoom[1].number);
			printf("2) Room %d\n", tRoom[2].number);
			
			printf("0) Quit game (please don't T_T)\n");
			
			scanf("%d", &nChoice);
			
		}
		
		if(nChoice == 1){
			
			printf("Woaw you arrived at the Room %d !\n", tRoom[1].number);
			
		}
		else if(nChoice == 2){
			
			printf("Woaw you arrived at the Room %d !\n", tRoom[2].number);
			
		}
		else if (nChoice == 0){
			
			bGame = 1;
			
		}
		
		
	}
	
	
	return 0;
}