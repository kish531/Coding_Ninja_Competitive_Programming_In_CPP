Write a recursive function to convert a given string into the number it represents. 
That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

#include<cstring>
int string(char input[], int end){
    if(end<0){
        return 0;
    }int a=input[end]-'0';
    int num=a + 10*string(input, end-1);
    return num;
}

int stringToNumber(char input[]) {
    int n=strlen(input);
	  return string(input, n-1);
}
