for(int i = 0; i < n; i++)
{
for(int j = i+1; j<n; )
{
if(a[i] == a[j])
{
for(k = j; k < n-1; k++)
{
  a[k] = a[k+1];
  
 }
 
 else
 {
 j++;
 }


}
}
