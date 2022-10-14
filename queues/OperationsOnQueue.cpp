// Rest of the code is already given in driver code

class Solution
{
    public:
    void enqueue(queue<int> &q,int x)
    {
       q.push(x);
    }
    void dequeue(queue<int> &q)
    {
        q.pop();
    }
    int front(queue<int> &q)
    {
        return q.front();
    }
    
    string find(queue<int> q, int x)
    {
        int len = q.size();
        for(int i =0 ; i< len ; i++)
        {
            int temp=q.front();
            if(temp==x)
            {
            return "Yes";
            }
            q.pop();
        }
        return "No";
    }
};