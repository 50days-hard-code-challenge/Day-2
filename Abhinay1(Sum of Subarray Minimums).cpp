class Solution {
public:
   
    int sumSubarrayMins(vector<int>& arr) {
    

        /*unsigned const int n=1000000007;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=((sum%n)+(arr[i]%n))%n;
            int min=arr[i]%n;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<min){
                    min=arr[j]%n;
                }
                sum=((sum%n)+(min%n))%n;
            }
        }
        return sum;*/
        /*int sum=0;
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            int s=i;
            int e=i+1;
            sum=((sum%n)+(arr[s]%n))%n;
            st.push(arr[s]);
            while(e<arr.size()){
                if(st.top()<arr[e]){
                    sum=((sum%n)+(st.top()%n))%n;
                }
                else{
                    while(!st.empty()){
                        st.pop();
                    }
                    sum=((sum%n)+(arr[e]%n))%n;
                    st.push(arr[e]);
                }
                e++;
            }
            st.pop();
        }
        return sum;*/
  
        int n = arr.size();
        int MOD = 1e9 + 7;
        vector<int> left(n), right(n);
        
        
        stack<int>st;
        st.push(0);
        left[0] = 1; 
        for(int i=1; i<n; i++)
        {
            while(!st.empty() && arr[i] < arr[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                left[i] = i+1; 
            else 
                left[i] = i - st.top(); 
            
            st.push(i);
            
        }
        
        while(st.size()) 
            st.pop();
        
         
        st.push(n-1);
        right[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && arr[i] <= arr[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                right[i] = n-i; 
            else 
                right[i] = st.top()-i;
            
            st.push(i);
        }
        
        int res = 0;
        for(int i=0; i<n; i++)
        {
            long long prod = (left[i]*right[i])%MOD;
            prod = (prod*arr[i])%MOD;
            res = (res + prod)%MOD;
        }
        
        return res%MOD;
  }
};

  
