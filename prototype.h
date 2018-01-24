#ifndef PROTOTYPE_H_INCLUDED
#define PROTOTYPE_H_INCLUDED

//functions prototypes

    void   calculate_numberofchilds_average           (int);
    void   calculate_numberofchilds_average_bygender  (int);
    void   calculate_age_average                      (int);
    void   print_names_statistics                     (int);
    void   remove_person                              (int);
    void   find_relation                              (int,int);
    void   print_children                             (int,node*);
    void   print_bloodline                            (int);
    void   insert_person                              (int);
    void   search_person_byfirstname                  (string,node*);
    void   search_person_bylastname                   (string,node*);
    void   search_person_byid                         (int);


#endif // PROTOTYPE_H_INCLUDED
