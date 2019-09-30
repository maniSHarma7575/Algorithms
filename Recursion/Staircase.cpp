/*Question
A child is running up a staircase with n steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways*/

int waysUpStair(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<=2)
    {
        return n;
    }
    else
    {
        return waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);
    }


}
