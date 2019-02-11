int main()
{
   int a,k,power=1;
    scanf("%d",&a);
    scanf("%d",&k);
while(k>0)
{
   power=power*a;
    k--;
}
printf("%d",power);
    
    return 0;
}
