#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    int pt;
    int gf;
    int ga;
    int gd;
}Team;

int compareTeam(const void *a, const void *b){
    Team *teamA = (Team *) a;
    Team *teamB = (Team *) b;

    if(teamA -> pt != teamB -> pt){
        return teamB->pt - teamA->pt;
    }

    if(teamA->gd != teamB->gd){
        return teamB->gd - teamA->gd;
    }

    return teamA->id - teamB->id;
}

int main(){
    int n;

    if(scanf("%d",&n) != 1) return 0;

    Team teams[1005];

    for(int i = 0;i < n;i++){
        scanf("%d %d %d %d",&teams[i].id, &teams[i].pt, &teams[i].gf, &teams[i].ga);
        teams[i].gd = teams[i].gf - teams[i].ga;
    }

    qsort(teams, n, sizeof(Team), compareTeam);

    for(int i = 0;i < n;i++){
        printf("%d\n",teams[i].id);
    }
    return 0;
}