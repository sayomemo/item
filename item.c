#include <stdio.h>

#define N 5

typedef struct player {
	char name[20];
	int en;
}player_t;

int main(void){
	
	int i, j, k;
	
	int a[N];
	
	player_t dh[N] = 
	{"Nanari", 1500,
	 "Nao", 0,
	 "Sayo", 8300,
	 "Mikan", 10000,
	 "Yumi", 500,
	};
	
	for (i = 0; i < N; i++){
		printf("%10s: %6d\n", dh[i].name, dh[i].en);
	}
	
	printf("k[円]: ");
	scanf("%d", &k);
	
	j = 0;
	for(i = 0; i < N; i++){
		if(k <= dh[i].en){
			a[j] = i;
			j++;
		}
	}
	
	printf("アイテムの配布対象者は\n");
	for(i = 0; i < j; i++){
		printf("%s\n", dh[a[i]].name);
	}
	
	return 0;
}
