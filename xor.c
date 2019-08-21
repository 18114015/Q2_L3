#include<stdio.h>
#include<stdlib.h>
int count=0;
struct Node{
  struct Node *next;
  double data;
};
/**
* sai ruthvik Q2
*/
void create(struct Node *node,int n){ int j=0;
  struct Node *i;
  for(i=node;j<n;i=i->next,j++){
   i->next=(struct Node *)malloc(sizeof(struct Node)); 
   printf("Enter node value\n");
   scanf("%lf",&i->data);
}
i=NULL;
}
/**
* sai ruthvik Q2
*/
int XOR(struct Node *node,int n,int x,int y){
int i,xor=0;
for(i=1;i<=x;i++){
    node=node->next;
}
for(i=x;i<=y;i++){
    xor=xor^(int)node->data;
    node=node->next;
} 
return xor;
}
/**
* sai ruthvik Q2
*/
void f(struct Node *node,int n,int a[n][n],int i,int k){ if(k>=n||i>=n) return;
if(a[i][k]!=-1) return;
if(i>=k) return;
a[i][k]=XOR(node,n,i,k);
f(node,n,a,i,k+1);
f(node,n,a,i+1,i+2);
}
int main(){
int n,i,j,k;
printf("Enter value of n\n");
scanf("%d",&n);
struct Node *head=(struct Node *)malloc(sizeof(struct Node));
create(head,n); 
int a[n][n];
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 a[i][j]=-1;    
}
} 
f(head,n,a,0,1);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[i][j]==0){
  for(k=i;k<j;k++){
   count++;
}
}
}
}
printf("count=%d\n",count);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[i][j]==0){
  for(k=i;k<j;k++){
   printf("(%d,%d,%d)\n",i+1,k+2,j+1);
}
}
}
}
}

