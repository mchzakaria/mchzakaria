
typedef struct Proc{

    int identifiant; //identifiant

    int temps_exec; //temps d'execution

    int dat_arriv; //date d'arrivee

    int prio; //priorite

    struct Proc *next;

}proc;

typedef struct{

    proc *head;

    proc *tail;

    int size;

}File;
