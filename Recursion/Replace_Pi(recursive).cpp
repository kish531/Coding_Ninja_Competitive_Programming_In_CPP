Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

// Change in the given string itself. So no need to return or print anything
#include<cstring>
void replacePi(char input[]) {
	if(input[0]=='\0'){
        return;
    }int n=strlen(input);
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';
        input[1]='.';
        for(int i=n-1;i>1;i--){
            input[i+2]=input[i];
        }input[2]='1';
        input[3]='4';
        replacePi(input+4);
    }replacePi(input+1);
}
