#include "rooms.h"
#include "items.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define entry_room rooms[0]
#define store_room rooms[1]
#define hall_room rooms[2]
#define dark_room rooms[3]
#define library_room rooms[4]
#define dressing_room rooms[5]
#define dim_room rooms[6]
#define cell_room rooms[7]

int before_(Room room){
    int score;
    return score;
}

int after_(Room room){
    int score = 10;
    printf("score : %d\n",score);
    return score;
}

void nothing(){
    printf("just checking\n");
}

Room get_next_room(Room rooms[],Room current_room,char* dir){
    Room temp = {"","",0,NULL,0};
    if(strcmp(current_room.name,"Entry Room") == 0){
        if(strcmp(dir,"north") == 0){
            return rooms[2];
        }
        else if(strcmp(dir,"west") == 0){
            return rooms[1];
        }
    }
    else if(strcmp(current_room.name,"Store Room") == 0){
        if(strcmp(dir,"north") == 0){
            return rooms[5];
        }
        else if(strcmp(dir,"east") == 0){
            return rooms[0];
        }
    }
    else if(strcmp(current_room.name,"Hall Room") == 0){
        if(strcmp(dir,"up") == 0){
            return rooms[4];
        }
        else if(strcmp(dir,"south") == 0){
            return rooms[0];
        }
        else if(strcmp(dir,"east") == 0){
            return rooms[6];
        }
    }
    else if(strcmp(current_room.name,"Dark Room") == 0){
        if(strcmp(dir,"south") == 0){
            return rooms[5];
        }
        else if(strcmp(dir,"west") == 0){
            return rooms[1];
        }
    }
    else if(strcmp(current_room.name,"Library Room") == 0){
        if(strcmp(dir,"down") == 0){
            return rooms[2];
        }
    }
    else if(strcmp(current_room.name,"Dressing Room") == 0){
        if(strcmp(dir,"north") == 0){
            return rooms[3];
        }
        else if(strcmp(dir,"south") == 0){
            return rooms[1];
        }
        else if(strcmp(dir,"up") == 0){
            return rooms[7];
        }
    }
    else if(strcmp(current_room.name,"Dim Room") == 0){
        if(strcmp(dir,"west") == 0){
            return rooms[2];
        }
    }
    else if(strcmp(current_room.name,"Cell Room") == 0){
        if(strcmp(dir,"down") == 0){
            return rooms[5];
        }
    }
    return temp;
}

void describe_current_room(Room room){
    printf("You are now in %s\n",room.name);
    printf("%s",room.description);
}

void look(Item items[],Room room,int n){
    int i,size = 0;
    Item * itms = (Item*)malloc(sizeof(Item)*n);
    for(int i = 0 ; i < n ; i++){
        if(strcmp((items[i].location)->name,room.name) == 0){
            itms[size++] = items[i];
        }
    }
    if(size!=0){
        printf("The room has :\n");
        for(i = 0 ; i < size ; i++){
            printf("%s => %s\n",itms[i].name,itms[i].description);
        }
    }
    else{
        printf("The room is empty\n");
    }
}



