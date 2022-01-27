#include<iostream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

void game(){
	int x,chances,loop;
	char guess;
	bool correct;
	string word,correct_answer;
	
	string array[100] = {"seven", "world", "about","board", "month", "angel","death", "green", "music", "fifty", "three", "party", "piano", "Kelly", "mouth", "woman", "sugar", "amber", "dream", "apple", "laugh", "tiger", "faith", "earth", "river", "money", "peace", "forty", "words", "smile", "abate", "house", "alone", "watch", "lemon", "south", "erica", "anime", "after", "santa", "women", "admin", "jesus", "china","stone", "blood", "megan", "thing", "light", "david", "cough", "story", "power", "pakistan", "point", "today", "sarah", "anger", "night", "glory", "april", "candy", "puppy", "above", "phone", "chris", "vegan", "forum", "jason", "irish", "birth", "other", "grace", "queen", "pasta", "plant", "jacob", "smart", "knife", "magic", "jelly", "black", "media", "honor", "cycle", "truth", "zebra", "train", "bully", "llama", "brain", "mango", "under", "dirty","wait","bye","hey","well","ill","will"};
	
	
	chances = 3;
	
	loop = 0;
	
	srand(time(0));
		
	x = rand() % 100;
	
	word = array[x];
			
	correct_answer = word;
	
	
	for(int i=0; i < correct_answer.length() ; i++){
		
		correct_answer[i] = '_';
	
	}
	while(loop<word.length()){
		
		if (chances == 0){
			break;
		}
		
		cout<<"Chances left : "<<chances<<endl;
		
		if(chances == 1){
			
			cout<<"Last chance!!"<<endl;
			
			}
	
		cout<<"Guess a character"<<endl;
	
		cout<<correct_answer<<":"<<endl;
	
		cin>>guess;
	
		correct = false;
	
		for(int i=0; i < word.length() ; i++){
	
			if(guess==word[i]){
				
				correct_answer[i] = word[i];
	
				loop+=1;
	
				correct = true;
	
			}
		
		}
	
		if (correct == false){
			
			chances -= 1;
				
			cout<<"oops!! Try again"<<endl;
						
		}
		
	}
	if(chances == 0){
		
		cout<<"You lose!! Better luck next time."<<endl;
			
		}
	else{
		cout<<"Congratulations!! You won!!"<<endl;
	}
	
			
}


int main(){
	char resp;	
	while(true){
		cout<<"Play (y/n) : ";
		cin>>resp;
		if(resp == 'y'){
			game();
			}
		else if(resp == 'n'){
			break;
		}
	}

	return 0;
	
}
