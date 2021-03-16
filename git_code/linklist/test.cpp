#include<iostream>
using namespace std;
struct node{
    int val;
    node*next;
    node(int x){
        val=x;
        next=NULL;
    }
};
node* dau(node*hao,int i){
    node*tao=new node(i);
    tao->next=hao;
    return tao;
}
node* cuoi(node*hao,int i){
    node* temp=hao;
    node*tao=new node(i);
    while(temp->next){
        temp=temp->next;
    }
    temp->next=tao;
    return hao;
}
void in(node*hao){
    while(hao){
        cout<<hao->val<<" ";
        hao=hao->next;
    }
}
int main(){
    int n,x,k,s;
    cin>>n>>x;
    node*hao=new node(x);
    node*temp=hao;
    for(int i=1;i<n;i++){
        cin>>x;
        node*tt=new node(x);
        temp->next=tt;
        temp=temp->next;
    }
    temp=hao;
    cin>>k>>s;
    node*ss=new node(s);
    if(k==0){
        ss->next=hao;
        hao=ss;
    }
    else{
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        ss->next=temp->next;
        temp->next=ss;

    }
    in(hao);
    return 0;
}