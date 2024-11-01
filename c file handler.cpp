#include<stdio.h>
#include<stdlib.h>

void writetofile(const char *filename){
	FILE*fptr;
	char sentence[100];
	
	printf("Enter a sentence of up to 100 characters: ");
	fgets(sentence,100,fptr);
	
	fptr=fopen("data.txt","w");
	if (fptr==NULL){
		perror("Error opening file");
		exit(EXIT_FAILURE);
		}
			fprintf(fptr,%s,sentence);
			fclose(fptr);
			
			}
			void readfile(const char *filename) {
				FILE *fptr
				char c ;
				
				fptr=fopen(filename,"r");
				if(fptr==NULL){
					perror("Error opening file");
					exit(EXIT_FAILURE);
		
				}
				printf ("contents of %s:\n" ,filename);
				while((c=fgets(fptr)) 1=EOF){
					putchar(c);
				}
				fclose(fptr);

			}
			int main (){
				write to file ("data.txt");
				readfile("data.txt");
				
				return 0;
				
			}
				
	

