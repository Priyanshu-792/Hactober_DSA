// Rest of the code is already given in driver code

void MyQueue :: push(int x)
{   
    
    arr[rear]=x;
    rear++;
}

int MyQueue :: pop()
{
    if(front==rear){
        return -1;
    }
    int item=arr[front];
    front=(front+1);
    return item;
       
}