#include"Try.h"

General g1[100];

void insert(){
    for ( i = 0; i < many_structs; i++){
		printf("Struct data %d\n",i+1);
		printf("Insert struct name : ");
		scanf(" %[^\n]",&g1[i].path_name);
		printf("Insert how many x and y paths : ");
		scanf(" %d",&many_paths[i]);
		for ( j = 0; j < many_paths[i]; j++){
			printf("Insert x value : ");
			scanf(" %d",&g1[i].t1[j].x);
			printf("Insert y value : ");
			scanf(" %d",&g1[i].t1[j].y);
		}
	}
}

void cetak(){
    for ( i = 0; i < many_structs; i++){
		printf("Struct %d with name %s has %d paths :\n",i+1,g1[i].path_name,many_paths[i]);
		for ( j = 0; j < many_paths[i]; j++){
			printf("\tx[%d] : %d\n",j+1,g1[i].t1[j].x);
			printf("\ty[%d] : %d\n\n",j+1,g1[i].t1[j].y);
		}
		printf("\n\n");
	}
}