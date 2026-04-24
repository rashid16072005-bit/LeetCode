class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntL=0,cntR=0,sps=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') cntL++;
            else if(moves[i]=='R') cntR++;
            else sps++;
        }
        if(cntL>=cntR) return cntL+sps-cntR;
        else return cntR+sps-cntL;
        return 0;
    }
};