#include<stdio.h>

struct StudentRec{
	int StudentNumber;
	char StudentName[20];
	int StudentMark;
	int StudentRank;
};

int main(){
	int i, j;
	struct StudentRec temp;
	struct StudentRec StudDB[7] = {
		{123456, "Miley", 20, 0},
		{124687, "Taylor", 37, 0},
		{154321, "Justin", 48, 0},
		{135412, "Avril", 95, 0},
		{136123, "Amy", 88, 0},
		{145671, "Jane", 55, 0},
		{143582, "Celine", 90, 0},
	};

	struct StudentRec S[7];
	
	for(i=0; i<7; i++){
		S[i] = StudDB[i];
	}
	
	for(i=0; i<7; i++){
		for(j=i+1; j<7; j++){
			if(S[i].StudentMark < S[j].StudentMark){
				temp = S[i];
				S[i] = S[j];
				S[j] = temp;
			}
		}
	}
	
	for(i=0; i<7; i++){
		S[i].StudentRank = i+1;

		// nim
	}
	
	for(i=0; i<7; i++){
		for(j=0; j<7; j++){
			if(S[i].StudentNumber == StudDB[j].StudentNumber){
				StudDB[j].StudentRank = S[i].StudentRank;
			}
		}
	}
	for(i=0; i<7; i++){
		printf("%d\t%s\t%d\t%d\n", StudDB[i].StudentNumber, StudDB[i].StudentName, StudDB[i].StudentMark, StudDB[i].StudentRank);
	}

	
	return 0;
}
