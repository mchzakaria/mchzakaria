//initialisation d'une file 

File *init_file(){

    File *f = (File*)malloc(sizeof(File));

    f->head=NULL;

    f->tail=NULL;

    return f;

}

//creation d'un processus 

proc *create(proc p){

  proc *prc =(proc*)malloc(sizeof(proc));

  prc->identifiant=p.identifiant ;

  prc-> temps_exec =p. temps_exec;

  prc->dat_arriv=p.dat_arriv;

  prc->prio=p.prio;

  prc->next=NULL;

return prc ;

}

//pop process

proc *pop_proc(File *f){

    if(f->tail== NULL){

        exit(1);

    }

    else {

        proc* p = f->head;

        f->head = f->head->next;

        if(f->head == NULL){

            f->tail = NULL;

        }

        f->size--;

    return p;

    }

}

//read process
proc *read(File *f){

    return f->head;

}

// affichage 
void affiche(File *f){

    int i;

    proc *p = NULL;

    for(i=0;i<z;i++){

        printf("%d\t%d\t%d\t%d\n",f->head->identifiant,f->head->dat_arriv,f->head-> temps_exec,f->head->prio);

        p = pop_proc(f);

    }

}

void push_FIFO (File *f,proc *p){

    if(f->tail == NULL)

        f->head = f->tail = p ;

    else{

        f->tail->next = p ;

        f->tail = p ;

    }

    f->size++;

}

void push_SJF (File *f){

    File *temp=f,*azer;

    int i,j,bt=0,min;

    proc val;

    for(i=0;i<z;i++){

        for(j=i+1;i<z;j++){

            if(temp->head->dat_arriv  > temp->head->next->dat_arriv){

                val.identifiant = temp->head->identifiant ;

                val.dat_arriv = temp->head->dat_arriv ;

                val.temps_exec = temp->head->temps_exec;

                val.prio = temp->head->prio ;

               

                temp->head->identifiant = temp->head->next->identifiant;

                temp->head->dat_arriv = temp->head->next->dat_arriv;

                temp->head->temps_exec = temp->head->next->temps_exec;

                temp->head->prio = temp->head->next->prio;

               

                temp->head->next->identifiant = val.identifiant ;

                temp->head->next->dat_arriv = val.dat_arriv ;

                temp->head->next->temps_exec = val.temps_exec;

                temp->head->next->prio = val.prio ;

            }

        }

    }

    azer->head=temp->head->next;

    for(j=0;j<z;j++){

        bt=bt+temp->head->temps_exec;

        min=azer->head->temps_exec;

        for(i=1;i<z;i++){

            if(bt >= temp->head->dat_arriv && temp->head->temps_exec < min){

                val.identifiant = azer->head->identifiant;

                val.dat_arriv = azer->head->dat_arriv ;

                val.temps_exec = azer->head->temps_exec;

                val.prio = azer->head->prio ;

                   

                azer->head->identifiant = temp->head->identifiant;

                azer->head->dat_arriv = temp->head->dat_arriv;

                azer->head->temps_exec = temp->head->temps_exec;

                azer->head->prio = temp->head->prio;

                   

                temp->head->identifiant = val.identifiant ;

                temp->head->dat_arriv = val.dat_arriv ;

                temp->head->temps_exec = val.temps_exec;

                temp->head->prio = val.prio ;

            }

        }

        azer->head=azer->head->next;

        temp->head=temp->head->next;

    }

    affiche(temp);

}

void file_cree(File *f){

    int i;

    proc a;

    proc *p = NULL;

    for(i=0;i<z;i++){

       printf("Proc N'%d\n",i+1);

       printf("L'identifiant : ");

       scanf("%d",&a.identifiant);

       printf("Date d'arriver: ");

       scanf("%d",&a.dat_arriv);

       printf("Temps d’execution: ");

       scanf("%d",&a.temps_exec);

       printf("La prioriter: ");

       scanf("%d",&a.prio);

       p = create(a);

       push_FIFO(f,p);

    }

}
