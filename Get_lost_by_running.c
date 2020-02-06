#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Room{
	
	char name[100];
	char description[255];
	int difficulty;
	int connection [12];
	
};
typedef struct Room room;

int main(){
	
	srand(time(NULL));
	
	for(int i = 0; i<70;i++){
		printf("\n");
	}
	
	room tRoom[12] = {"entrance", "Simply th entrance room, this is where you come from",1,{0,1,1,0,0,0,0,0,0,0,0,0},"empty","It seems to be a clear and empty room...",1,{1,0,1,0,0,0,0,0,0,0,0,0},"dark","It is a dark and cold room, you better not staying long in there",10,{0,1,0,1,1,1,0,0,0,0,0,0},"strange","It is a strange room where a weird feeling reigns...",5,{0,1,1,0,1,0,0,1,0,0,0,0},"warm","It is a room where you feel very hot, it looks like the global warming was not a fake...",11,{0,0,0,0,0,1,1,0,0,0,0,0},"hardcore","This is a horrible room where you cannot step back...Why did you go in a room with such a name ?!",15,{1,0,0,0,0,0,0,0,0,0,0,0},"magical","It is a safe room that make you feel better about your journey through this strange donjon",4,{0,0,0,0,1,1,0,1,0,0,0,0},"pause","Uh oh... You taught this was a pause room for you, but this is the pause room of all the monsters in the donjon ! RUN !!!",17,{0,0,0,0,0,0,1,0,1,0,0,0},"cold","It is a room where a cold atmosphere reigns, you better leaving quickly before taking cold >_<",9,{0,0,1,0,1,0,0,1,0,1,0,0},"T3leP0rTati0n_#","Despite its strange name, this room is really a teleportation room... But it feels like the rooms where you can go are changing each time you go in this room...",5,{1,0,0,0,0,0,0,0,0,0,1,1},"?EXIT?","Phew, this is finally the exit room, you can go out of the donjon now...oh wait...don't tell me that...no...YOU FORGOT THE KEYS ?",2,{1,0,0,0,0,0,0,0,0,0,0,0},"SATANIC","OH MY GOD RUN AWAY !!! THERE ARE DEMONS EVERYWHERE !!! WHY ARE YOU STUPID AND YOU DECIDED TO GO IN THERE ?!!",19,{0,0,1,0,0,0,0,0,0,0,0,1}};
	int bGame = 0;
	int nChoice = 0;
	char  sChoice[100] = "";
	int nCurrentRoom = 0;
	int tPossible[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
	
	while(bGame == 0){
		
		nChoice = 0;
		printf("\n");
		
		//rerandomizing the T3leP0rTati0n_# room
		for(int j = 1; j<9; j++){
			if(j==9){printf("je me suis gourré\n");}
			tRoom[9].connection[j] = rand()%2;
		}
		
		while(nChoice == 0){
			
			for(int i = 0; i<12; i++){
				tPossible[i] = 0;
			}
			
			printf("Where do you want to go ?\n");
			
			for(int i = 0; i <12; i++){
				if (tRoom[nCurrentRoom].connection[i] == 1){
					printf("- \"%s\" room\n", tRoom[i].name);
					tPossible[i] = 1;
				}
			}
			
			printf("Quit) Quit game (please don't T_T)\n");
			
			scanf("%99s", sChoice);
			
			for(int i = 0; i<12 ; i++){
				
				if(strcmp(sChoice, tRoom[i].name) == 0 && tPossible[i] == 1){
					printf("Woaw you arrived at the \"%s\" room !\n", tRoom[i].name);
					nCurrentRoom = i;
					nChoice = 1;
					printf("%s\n", tRoom[i].description);
				}
				
			}
			
			if(strcmp(sChoice, "Quit")==0){
				nChoice = 1;
				bGame = 1;
			}
		
		}
		
		
	}
	
	
	return 0;
}