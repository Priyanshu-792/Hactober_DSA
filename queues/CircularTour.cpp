// Rest of the code is already given in driver code

class Solution
{
  public:
  
    int tour(petrolPump p[],int n)
    {  int sum=0; int index=0;
       int petrol = 0; int dist = 0;
      

       for(int i=0; i<n;i++)
     {
           petrol+=p[i].petrol;
           dist+=p[i].distance;
           sum+=p[i].petrol-p[i].distance;
           if(sum<0){
               sum=0;
               index=i+1;
           }
       }


       if(dist>petrol){
           return -1;
       }
       return index;
    }
};