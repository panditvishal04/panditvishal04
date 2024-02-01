#include<iostream> 
using namespace std; 
int main()
{
int cost[50][50],dist[50];
int n,i,j,edges,source,desti,v,u,w,k; 
cout<<"\n Enter the number of nodes: "; 
cin>>n;
cout<<" Enter the number of edges:"; 
cin>>edges;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++) 
cost[i][j]=1000;
}
for (i=1;i<=edges;i++)
{
cout<<"\n Enter edge "<<i<<" source:"; 
cin>>source;
cout<<" Enter edge "<<i<<" destination:"; 
cin>>desti;
cout<<" Enter the weight of edge:"; 
cin>>w;
cost[source][desti]=w;
}
cout<<"\n Enter the starting vertex:"; 
cin>>v;
for(i=1;i<=n;i++)
dist[i]=cost[v][i]; 
dist[v]=0; 
for(k=2;k<n;k++)
{
for(u=1;u<=n;u++)
{
if(u!=v)
{
for(i=1;i<=n;i++)
{
if(cost[i][u]!=1000 &&dist[u]>dist[i]+cost[i][u]) 
dist[u]=dist[i]+cost[i][u];
}
}
}
}
cout<<"\n Shortest distance from starting vertex "<<v<< " to \n"; 
for(i=1;i<=n;i++)
cout<<" "<<i<<" is " <<dist[i]<<"\n";
return 0;
}
