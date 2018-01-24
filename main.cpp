    #include <iostream>
    #include <stdlib.h>
    #include <windows.h>
    #include <conio.h>
    #include <stdio.h>
    #include <time.h>
    using namespace std;
    #include "const_variables.h"
    #include "struct_node.h"
    #include "prototype.h"
    #include "functions.h"


int main()
{

   #include "head_of_tree.h"

 while(true){

    // show main menu
    int menu_selection=0;

   #include "menu.h"

    while (menu_selection>11 || menu_selection<1)
          cin>>menu_selection;

    int selection=0;
    string fn;
    string ln;
    int first_id;
    int second_id;

    // processing answer
    switch (menu_selection){

    case 1: cout<<"\n\n Enter ID of parent:"; cin>>selection; insert_person(selection);
    break;

    case 2: cout<<"\n\n Enter ID of person:"; cin>>selection; remove_person(selection);
    break;

    case 3: cout<<"\n\n Search by ... ?\n 1) ID\n 2)First name\n 3)Last name\n"; while (selection<1 || selection>3) cin>>selection;


     switch(selection){
            case 1: cout<<"Enter ID : "; cin>>selection; search_person_byid(selection);
            break;


            case 2: cout<<"Enter First name : ";  cin>>fn; search_person_byfirstname(fn,tree);
            break;


            case 3: cout<<"Enter Last name : ";  cin>>ln; search_person_bylastname(ln,tree);
            break;

     }
    break;

    case 4: cout<<" Enter Id : "; cin>>selection; print_bloodline(selection);
    break;

    case 5: cout<<" Enter Id : "; cin>>selection; print_children(selection);
    break;

    case 6: cout<<" Enter first id : ";cin>>first_id;   cout<<"\n Enter second id :"; cin>>second_id; find_relation(first_id,second_id);
    break;

    case 7: cout<<" Enter Id : "; cin>>selection; age_sum=0; number_of_persons=0; calculate_age_average(selection); cout<<"\a\a average is : "<<age_sum/number_of_persons<<"\n\n";
    break;

    case 8: cout<<" Enter Id : "; cin>>selection; number_of_persons=0; number_of_children=0; calculate_numberofchilds_average(selection); cout<<"\a\a number of children is : "<<(number_of_children/number_of_persons)*1.0<<"\n\n";
    break;

    case 9: cout<<" Enter Id : "; cin>>selection; female=0; male=0; calculate_numberofchilds_average_bygender(selection); cout<<"\n\n male : "<<male/number_of_persons<<" | female : "<<female/number_of_persons<<"\n\n";
    break;

    case 10:


     for(int i=0;i<1000;i++)
        {
            names[i]="";
            names_number[i]=0;
        }

        cout<<" Enter Id : "; cin>>selection; print_names_statistics(selection);



        for(int i=0;i<1000;i++)
        {
            if(names[i]=="")break;
            else
            {
                cout<<names[i]<<" : "<<names_number[i]<<endl;
            }
        }
    break;

    case 11: return 0;
    break;

    }


 } // end while true


    return 0;
}
