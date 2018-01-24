#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


    void count(string input){

    for (int i=0;i<1000;i++)
    {
        if (names[i]==input){
        names_number[i]++;
        return;
        }
    }
    int i=0;
    for (;i<1000;i++)
    {
        if (names[i]=="") break;
    }
    names[i]=input;
    names_number[i]++;
    }

    node* findbyid (int  id){

        int i=1;
        for(;i<=id;i*=10);
        i/=10;
        node* temp;
        if(id/i==1)
        {
            temp=tree;
            id=id%i;
            i/=10;
            while(i>0)
            {
                if(temp->link[id/i]==NULL)return NULL;
                else{
                    temp=temp->link[id/i];
                    id=id%i;
                    i/=10;
                    }
            }
            return temp;
        }else return NULL;

    }

    void calculate_numberofchilds_average(int input){

        node* person = findbyid(input); if (person==NULL) return;
        number_of_persons++;
        age_sum+=person->information.age;

        for (int i=0;i<10;i++){
            if(person->link[i]!=NULL) {
                calculate_numberofchilds_average(person->link[i]->information.id);
                number_of_children++;
            }
        }



    }

    void calculate_numberofchilds_average_bygender(int input){

        node* person = findbyid(input); if (person==NULL) return;
        if ( person->information.is_male )   male++;
        else female++;

        number_of_persons;

        for (int i=0;i<10;i++){
            if(person->link[i]!=NULL) {
                calculate_numberofchilds_average_bygender(person->link[i]->information.id);
            }
        }

    }

    void calculate_age_average(int input){

        node* person = findbyid(input); if (person==NULL) return;
        number_of_persons++;
        age_sum+=person->information.age;

        for (int i=0;i<10;i++){
            if(person->link[i]!=NULL) calculate_age_average(person->link[i]->information.id);
        }

    }

    void print_names_statistics(int input){

    node* person = findbyid(input); if (person==NULL) return;
    count(person->information.first_name);

    for (int i=0;i<10;i++)
    {

        if (person->link[i]!=NULL)
        {

            print_names_statistics(person->link[i]->information.id);

        }
    }
    }

    void remove_person(int input){

        node* person = findbyid(input);
        if(person==NULL) return;
        node* parent = person->parent;
        int id = person->information.id;
        id = id%10;
        parent->link[id]=NULL;

        // ! delete from storage
    }

    void find_relation(int input1,int input2){
        int n=0;
        int id1=input1;
        int id2=input2;
        while(id1>0&&id2>0)
        {
            id1/=10;
            id2/=10;
        }
        if(id1==0&&id2==0)
        {
            while(input1!=input2)
            {
                input1/=10;
                input2/=10;
                n+=2;
            }
        }else if(id2==0&&id1!=0)
        {
            while(id1>0)
            {
                input1/=10;
                id1/=10;
                n++;
            }
            while(input1!=input2)
            {
                input1/=10;
                input2/=10;
                n+=2;
            }
        }else
        {
            while(id2>0)
            {
                input2/=10;
                id2/=10;
                n++;
            }
            while(input1!=input2)
            {
                input1/=10;
                input2/=10;
                n+=2;
            }
        }


        cout<<"distance is "<<n;
    }

    void print_children(int input){

        node* person=findbyid(input); if (person==NULL) return;
        cout <<person->information.id;
        cout <<"(";
        for (int i=0;i<10;i++){
            if (person->link[i]!=NULL){
                print_children(person->link[i]->information.id);
                // VLR
            }
        }
        cout <<")";
    }

    void print_bloodline(int input){

       node* person = findbyid(input); if (person==NULL) return;
       cout << " id : " <<person->information.id<<" | first name : "<<person->information.first_name<<" | last name : "<<person->information.last_name<<"\n\n";
       while (person->parent!=NULL){
            person=person->parent;
            cout << " id : " <<person->information.id<<" | first name : "<<person->information.first_name<<" | last name : "<<person->information.last_name<<"\n\n";
       }

    }

    void insert_person(int input){

        // go to pointer
        node* parent;
        parent=findbyid(input);
        if(parent==NULL)return;
        // finding first null link
        int i=0;
        while (i<10){
            if(parent->link[i]==NULL) break;
            i++;
        }
        if(i==10) cout<<"\n\a Parent has the maximum number of children";
        else {

            node* child=new node;
            child->parent=parent;
            parent->link[i]=child;

            child->information.number_of_child=0;
            child->information.id=parent->information.id*10+i;

     for(int i=0;i<10;i++)
    {
        child->link[i]=NULL;
    }

    cout<<"\a\n* Enter first name\n";
    cin>>child->information.first_name;

    cout<<"\a\n* Enter last name\n";
    cin>>child->information.last_name;

    cout<<"\a\n* Enter age\n";
    cin>>child->information.age;

//    cout<<"\a\n* Enter job\n";
//    cin>>child->information.job;
//
//    cout<<"\a\n* Enter city\n";
//    cin>>child->information.city;
//
////    cout<<"\a\n* Enter number of child\n";
////    cin>>child->information.number_of_child;
//
//    cout<<"\a\n* Enter birth_year\n";
//    cin>>child->information.birth_year;
//
//    cout<<"\a\n* Enter birth_month\n";
//    cin>>child->information.birth_month;
//
//    cout<<"\a\n* Enter birth_day\n";
//    cin>>child->information.birth_day;
//
//    cout<<"\a\n* is_dead ? (any number is true else 0)\n";
//    cin>>child->information.is_dead;
//
//    if(child->information.is_dead)
//    {
//      cout<<"\a\n* Enter die_year\n";
//      cin>>child->information.die_year;
//
//      cout<<"\a\n* Enter die_month\n";
//      cin>>child->information.die_month;
//
//      cout<<"\a\n* Enter die_day\n";
//      cin>>child->information.die_day;
//    }
    cout<<"\a\n* is_male ? (any number is true else 0)\n";
    cin>>child->information.is_male;

    system("CLS");


        }


    }

    void search_person_byfirstname(string input,node* root){

        if(input==root->information.first_name) cout <<"\n id : "<<root->information.id<<" | first name : "<<root->information.first_name<<" | last name : "<<root->information.last_name<<"\n\n";

        for (int i=0;i<10;i++){
            if (root->link[i]!=NULL){
                search_person_byfirstname(input,root->link[i]);
                // VLR
            }
        }

    }

    void search_person_bylastname(string input,node* root){

        if(input==root->information.last_name) cout <<"\n id : "<<root->information.id<<" | first name : "<<root->information.first_name<<" | last name : "<<root->information.last_name<<"\n\n";

        for (int i=0;i<10;i++){
            if (root->link[i]!=NULL){
                search_person_bylastname(input,root->link[i]);
                // VLR
            }
        }

    }

    void search_person_byid(int input){
        node* person = findbyid(input); if (person==NULL) {cout<<"X";return;}
       cout <<"\n id : "<<person->information.id<<" | first name : "<<person->information.first_name<<" | last name : "<<person->information.last_name<<"\n\n";

    }



#endif // FUNCTIONS_H_INCLUDED
