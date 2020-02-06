#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Room{
	
	char name[100];
	char description[255];
	int difficulty;
	int connection [3];
	
};
typedef struct Room room;

int main(){
	
	srand(time(NULL));
	
	for(int i = 0; i<70;i++){
		printf("\n");
	}
	
	room tRoom[3] = {"entrance", "Simply th entrance room, this is where you come from",1,{0,1,1},"empty","It seems to be a clear and empty room...",1,{1,0,1},"dark","It is a dark and cold room, you better not staying long in there",10,{0,1,0}};
	int bGame = 0;
	int nChoice = 0;
	char  sChoice[100] = "";
	int nCurrentRoom = 0;
	int tPossible[3] = {0,0,0};
	
	while(bGame == 0){
		
		nChoice = 0;
		printf("\n");
		
		while(nChoice == 0){
			
			for(int i = 0; i<3; i++){
				tPossible[i] = 0;
			}
			
			printf("Where do you want to go ?\n");
			
			for(int i = 0; i < 3; i++){
				if (tRoom[nCurrentRoom].connection[i] == 1){
					printf("- \"%s\" room\n", tRoom[i].name);
					tPossible[i] = 1;
				}
			}
			
			printf("0) Quit game (please don't T_T)\n");
			
			scanf("%99s", sChoice);
			
			for(int i = 0; i<3 ; i++){
				
				if(strcmp(sChoice, tRoom[i].name) == 0 && tPossible[i] == 1){
					printf("Woaw you arrived at the \"%s\" room !\n", tRoom[i].name);
					nCurrentRoom = i;
					nChoice = 1;
					printf("%s\n", tRoom[i].description);
				}
				
			}
		
		}
		
		
	}
	
	
	return 0;
}