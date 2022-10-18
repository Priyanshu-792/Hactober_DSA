// Rest of the code is already given in driver code

void QueueStack :: push(int x)
{
        q1.push(x);
}
int QueueStack :: pop()
{
        int a;
        if(q1.empty())
        {
            return -1;
        }
        
        else
        {
            while(!q1.empty())
            {
                if(q1.size() == 1)
                {
                    a=q1.back();
                    break;
                }
                else
                {
                    q2.push(q1.front());
                    q1.pop();
                }
            }
            q1.pop();
        }
        swap(q1,q2);
        return a;
}