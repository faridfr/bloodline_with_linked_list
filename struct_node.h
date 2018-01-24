#ifndef STRUCT_NODE_H_INCLUDED
#define STRUCT_NODE_H_INCLUDED


    struct data {
            string first_name;
            string last_name;
            string job;
            string city;
            float age;
            int number_of_child;
            int birth_year,birth_month,birth_day;
            int die_year,die_month,die_day;
            int id;
            bool is_male;
            bool is_dead;
            };

    struct node{
            node* parent;
            node* link[10];
            data information;
               };

    node* tree;

#endif // STRUCT_NODE_H_INCLUDED
