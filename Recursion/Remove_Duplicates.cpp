Given a string S, remove consecutive duplicates from it recursively.

#include<cstring>
void removeConsecutiveDuplicates(char *input) {
	if(input[0]=='\0'){
        return;
    }int n=strlen(input);
    if(input[0]==input[1]){
        int i=1;
        for(;i<n-1;i++){
            input[i]=input[i+1];
        }input[n-1]='\0';
     	removeConsecutiveDuplicates(input);   
    }removeConsecutiveDuplicates(input+1);
}
