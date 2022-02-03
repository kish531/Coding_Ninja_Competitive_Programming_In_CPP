Check whether a given String S is a palindrome using recursion. Return true or false.

#include<cstring>
bool checkPalindrome(char input[], int start, int end){
    if(start>=end){
        return true;
    }
    if(input[start]==input[end]){
        return checkPalindrome(input, start+1, end-1);
    }return false;
}

bool checkPalindrome(char input[]) {
	  int n=strlen(input);
    int i=0, j=n-1;
    return checkPalindrome(input, i, j);
}
