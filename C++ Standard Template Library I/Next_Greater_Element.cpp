Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x, is the first greater element on right side of x in the array. 
Elements for which no greater element exist, consider next greater element as -1.

#include <vector>
#include <stack>
vector<int> nextGreaterElement(vector<int> input) {
	  vector <int> output(input.size(), 0);
    stack <int> s;
    int n=input.size();
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            output[i]=-1;
            s.push(input[i]);
        }else{
            while(!s.empty() && input[i]>=s.top()){
                s.pop();
            }if(s.empty()){
                output[i]=-1;
                s.push(input[i]);
            }else{
                output[i]=s.top();
                s.push(input[i]);
            }
        }
    }return output;
}
