You are given three rods (numbered 1 to 3), and ‘N’ disks initially placed on the first rod, one on top of each other in increasing order of size 
(the largest disk is at the bottom). You are supposed to move the ‘N’ disks to another rod(either rod 2 or rod 3) using the following rules and in less than 2 ^ (N) moves.

void moveDisks(int n, int source, int auxiliary, int destination, vector<vector<int>> &moves){
    if(n==1){
        moves.push_back({source, destination});
    	return;
    }
    moveDisks(n-1, source, destination, auxiliary, moves);
    moves.push_back({source, destination});
    moveDisks(n-1, auxiliary, source, destination, moves);
}

vector<vector<int>> towerOfHanoi(int n){
    vector<vector<int>>moves;
    moveDisks(n, 1, 2, 3, moves);
    return moves;
}

/**********OR**********/

void moveDisks(int n, int toRod, int fromRod, vector<vector<int>> &moves){
    if (n == 1){
        moves.push_back({fromRod, toRod});
        return;
    }
    int rem = 1 ^ 2 ^ 3 ^ toRod ^ fromRod;
    moveDisks(n - 1, rem, fromRod, moves);
    moves.push_back({fromRod, toRod});
    moveDisks(n - 1, toRod, rem, moves);
}

vector<vector<int>> towerOfHanoi(int n){
    vector<vector<int>> moves;
    moveDisks(n, 2, 1, moves);
    return moves;
}
