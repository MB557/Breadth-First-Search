#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *link;
};

void Input(struct node *Head[],struct node *Temp[],int u,int v)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->val=v;
    temp->link=NULL;

    if(Head[u]==NULL)
    {
        Head[u]=temp;
        Temp[u]=temp;
    }
    else
    {
        Temp[u]->link=temp;
        Temp[u]=temp;
    }
}

int Deq(int *F,int Store_QU[])
{
    int D;
    D = Store_QU[*F];
    (*F)= (*F)+1;
    return D;
}

void Enq(int Store_QU[],int x,int *F ,int *R)
{
    if(*F == -1 && *R == -1) {
        *F=0;
        *R=0;
        Store_QU[*R]=x;
    }

    else {
        (*R) = (*R) + 1;
        Store_QU[*R]=x;
    }
}

void BFS(struct node *Head[], struct node *Temp[], int Store_QU[], int V)
{
    int F=-1, R=-1;
    int FLAG[V], Counter[V];

    for(int a=1;a<V;++a)
        {
            Counter[a]=-1;
            FLAG[a]=0;
        }

    FLAG[0]=1, Counter[0]=0;
    int u=0;

    while(1)
        {
            if(F>R) break;
            Temp[u]=Head[u];

            while(Temp[u]!=NULL)
            {

                    if(FLAG[Temp[u]->val] == 0)
                    {
                        Enq(Store_QU,Temp[u] -> val,&F,&R);
                        FLAG [Temp[u] -> val] = 1;
                        Counter[Temp[u] -> val] = Counter[u]+1;
                    }

                Temp[u]=Temp[u]->link;
            }
              u= Deq(&F,Store_QU);
          }

        for(int i=0;i<V;++i)
        {
            printf("%d",Counter[i]);
            printf("\n");
        }
        printf("\n");
}
int main()
{
    int test,V,E,u,v,Store_QU[500];
    scanf("%d",&test);

    for(int k=0; k<test; ++k)
    {
        scanf("%d%d",&V,&E);
        struct node *Temp[V], *Head[V];

        for(int i=0; i<V; ++i)
        {
            Head[i]=NULL;
            Temp[i]=NULL;
        }

        for(int b=0;b<E;++b)
        {
            scanf("%d%d",&u,&v);
            Input(Head,Temp,u,v);
        }

        BFS(Head, Temp, Store_QU, V);
    }
}
