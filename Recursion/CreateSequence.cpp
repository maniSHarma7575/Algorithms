/*Problem Statement:
Given an integer n, you need to print all numbers less than n which are having digits only 2 or 5 or both.
Print every number in new line. Order of numbers doesn't matter.
*/
bool check(int n)
{
   if(n==0)
   {
       return true;
   }
   if(n%10==5 || n%10==2)
   {
       return check((int)n/10);
   }
    else
    {
        return false;
    }
   
}
void printSequence(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(check(i))
        {
            cout<<i<<endl;
        }
    }
    
}
