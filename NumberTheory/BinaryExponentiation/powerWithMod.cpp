int pow(int a, int b, int m)
{
   int ans=1;
   while(b)
   {
     if(b&1)
      ans=((ans%MOD)*(a%MOD))%m;
      b/=2;
      a=((a%MOD)*(a%MOD))%m;
   }
   return ans;
}
