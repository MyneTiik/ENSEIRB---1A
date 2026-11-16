#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#define MAXOUT 3
#define MAXEQU 10

typedef enum {ROUTER, SWITCH, HOST, SERVER} netkind;

const char *netkind_str(netkind kind){

    switch (kind) {
        case ROUTER:   return "ROUTEUR";
        case SWITCH:    return "SWITCH";
        case HOST:      return "HOST";
        case SERVER:    return "SERVER";
        default:        return "INVALIDE";
    }
}

struct NetNode{
    int id;
    char *name;
    netkind kind;
    struct NetNode *out[MAXOUT];
};

struct Network{
    struct NetNode *equ[MAXEQU];
    int count;
    struct NetNode *start;
};

struct NetNode *node_create(int id, char *name, netkind kind){
    struct NetNode *node=malloc(sizeof(struct NetNode));
    if(node==NULL){
        return NULL;
    }
    node->id = id;
    node->name=name;
    node->kind=kind;
    for (int i=0;i<MAXOUT;i++){
        node->out[i]=NULL;
    }
    return node;
}

struct Network *net_create(){
    struct Network *net=malloc(sizeof(struct Network));
    if(net==NULL){
        return NULL;
    }
    net->count = 0;
    net->start = NULL;
    for (int i=0;i<MAXEQU;i++){
        net->equ[i]=NULL;
    }
    return net;
}

void node_connect(struct NetNode *A, struct NetNode *B){
    if ((A==NULL) || (B==NULL)){return;}
    for (int i=0;i<MAXOUT;i++){
        if (A->out[i]==NULL){
            A->out[i]==B;
            return;
        }
    }

}

int main(){
    printf("%s\n", netkind_str(SERVER));

    struct NetNode *r1 = node_create(1, "R1", ROUTER);
    struct NetNode *r2 = node_create(2, "R2", ROUTER);
    struct NetNode *s1 = node_create(1, "S1", SWITCH);




    printf("%d %s %s\n", r1->id, r1->name, netkind_str(r1->kind));


    return 0;
}