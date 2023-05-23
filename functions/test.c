primenos(s,e)
    {
        int isfactor(int n,int x)
        {
        if(n%x==0)
        {
          return 1;
        }
        else
        {
         return 0;
        }
        }
        for(int i=s;i<=e;i++)
        {
        for(int j=2;j<=i;j++)
        
            {
                if(isfactor(i,j-1)==1)
                {
                    break;
                }
            }
            if(j==i)
            {
                printf("%d is a prime number\n",i);
            }
            else
            {
                printf("%d is not a prime number\n",i);
            }
     }
     
    int main()
    {
      int s,e;
      scanf("%d %d",&s,&i);
      return primenos(5,12)
    
    }
    }