#include<iostream>
#include<deque> 
#include<vector>
#include<utility>
using namespace std;
typedef struct NODE
{
  NODE *father;
  vector<NODE*> son;
  int name;
} node;
void DFS(){

}
void LCA(){

}
int main()
{
  deque<node> tree;
  pair<int,int> p1;
  vector<pair<int,int> >v1;
  int n,father,son;
  scanf("%d",&n);
  for(int i=0;i!=n;i++){
	scanf("%d%d",&father,&son);
	
  }
  return 0;
}
