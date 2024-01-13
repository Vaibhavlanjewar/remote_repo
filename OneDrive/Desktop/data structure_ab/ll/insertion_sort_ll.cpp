class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        // add code here.
        //https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
        stack<int>st;
        for(int i=0 ; i<k ; i++){
            st.push(q.front());
            q.pop();
        }
        
      while(!st.empty()){
            q.push(st.top());
            st.pop();
            
        }
        int sz=q.size();
        for(int i=0 ; i< sz-k ; i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};