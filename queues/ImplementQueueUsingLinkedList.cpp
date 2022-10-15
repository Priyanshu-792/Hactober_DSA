// Rest of the code is already given in driver code

void MyQueue:: push(int x)
{
        QueueNode *temp = new QueueNode(x);
        if (front == NULL){
            front = rear = temp;
            return;        
        }
        rear->next = temp;
        rear = temp;
}

int MyQueue :: pop()
{
        if (front == NULL)
            return -1;
        QueueNode *head1 = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        int res = head1->data;
        delete head1;
        return res;
}