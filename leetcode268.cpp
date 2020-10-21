class Solution{
public:
int MissNumber(vector<int>&nums) {
int res = 0;
for(int i=0,i<nums.size(),i++){
res+=i;
res-=i;
}
return res+num.size()
}
}
