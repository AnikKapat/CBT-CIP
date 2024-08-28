#include<stdio.h>
void main(){
	char str[100];
	int line=0, word=0, ch=0, i;
	printf("Enter a line of string \n");
	scanf("%[^*]",str);
	//fgets(str,100,stdin);
	for(i=0;str[i]!='\0';i++){
		ch++;
		if(str[i]=='\n'){
			line++;
		}
		if(str[i]=='\n' && str[i+1]!='\n' || str[i]==' ' && str[i+1]!=' ' || str[i]=='\t'&&str[i+1]!='\t'){
			word++;
		}
		
	} 
	printf("%d is total Line \n", line);
	printf("%d is total Charecter \n", ch);
	printf("%d is total Word", word);
}
