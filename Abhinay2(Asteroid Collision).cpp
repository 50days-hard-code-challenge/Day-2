class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        /*int n=asteroids.size(); ///////O(N^2)  && O(N)///////
        vector<int>ans;
        vector<int>hash(n,1);
        for(int i=n-1;i>=0;i--){
            if(hash[i]&&asteroids[i]<0){
                int j=i-1;
                while(j>=0 && hash[j]&&asteroids[j]>0 &&abs(asteroids[j])<abs(asteroids[i])){
                    hash[j]=0;
                    j--;
                }
                if(j>=0){
                    if( asteroids[j]>0 && abs(asteroids[j])==abs(asteroids[i])){
                        hash[i]=0;
                        hash[j]=0;
                    }
                    if(asteroids[j]>0 && abs(asteroids[j])>abs(asteroids[i])){
                        hash[i]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(hash[i]==1){
                ans.push_back(asteroids[i]);
            }
        }
        return ans;*/
        stack<int> st;
        st.push(asteroids[0]);
        for (int i=1; i<asteroids.size(); i++) {
            int val = asteroids[i];
            if (st.empty()) st.push(val); 
            else if (st.top() < 0) st.push(val); 
            else {
                if (val > 0) st.push(val); 
                else {
            
                    int canPush = 1;
                    while (!st.empty() && st.top() > 0) {
                        if (st.top() + val < 0) {
                            st.pop();
                        }
                        else if (st.top() + val > 0) {
                            canPush = 0;
                            break;
                        }
                        else {
                            st.pop();
                            canPush = 0;
                            break;
                        }
                    }
                    if (canPush) st.push(val);
                }
            }
        }
    
        stack<int> temp;
        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        vector<int> ans;
        while (!temp.empty()) {
            ans.push_back(temp.top());
            temp.pop();
        }
        return ans;
    }
};
