#include<iostream>
#include<time.h>
#include <stdio.h>
#include <string.h>
#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;


int main(){
	
	int x;
		
	char array[] = {"seven, world, about, again, heart, pizza, water, happy, sixty, board, month, angel, death, green, music, fifty, three, party, piano, Kelly, mouth, woman, sugar, amber, dream, apple, laugh, tiger, faith, earth, river, money, peace, forty, words, smile, abate, house, alone, watch, lemon, South, erica, anime, after, santa, women, admin, jesus, china"};
	
	char *word = strtok(array, ",");
	
	srand(time(0));
		
	x = rand() % 100;
	
	word = array[x];
	
	while (word != NULL){
		
		cout<<("%s\n",word);
		word = strtok(NULL, ",");
	}
	return 0;
}
