#ifndef HEAD_OF_TREE_H_INCLUDED
#define HEAD_OF_TREE_H_INCLUDED

 int test=1;

    // create head of node
    node root;
    tree=&root;
    root.parent=NULL;
    for(int i=0;i<10;i++)
    {
        root.link[i]=NULL;
    }

    if(test){


    root.information.id=1;
    root.information.number_of_child=0;

    cout<<"\a\n* Enter first name\n";
    cin>>root.information.first_name;

    cout<<"\a\n* Enter last name\n";
    cin>>root.information.last_name;

    cout<<"\a\n* Enter age\n";
    cin>>root.information.age;

    cout<<"\a\n* Enter job\n";
    cin>>root.information.job;

    cout<<"\a\n* Enter city\n";
    cin>>root.information.city;

//    cout<<"\a\n* Enter number of child\n";
//    cin>>root.information.number_of_child;

    cout<<"\a\n* Enter birth_year\n";
    cin>>root.information.birth_year;

    cout<<"\a\n* Enter birth_month\n";
    cin>>root.information.birth_month;

    cout<<"\a\n* Enter birth_day\n";
    cin>>root.information.birth_day;

    cout<<"\a\n* is_dead ? (any number is true else 0)\n";
    cin>>root.information.is_dead;

    if(root.information.is_dead)
    {
      cout<<"\a\n* Enter die_year\n";
      cin>>root.information.die_year;

      cout<<"\a\n* Enter die_month\n";
      cin>>root.information.die_month;

      cout<<"\a\n* Enter die_day\n";
      cin>>root.information.die_day;
    }
    cout<<"\a\n* is_male ? (any number is true else 0)\n";
    cin>>root.information.is_male;

    system("CLS");


}
else {

            root.information.first_name="farid";
            root.information.last_name="froozan";
            root.information.job="CE";
            root.information.age=23;
            root.information.city="shahrood";
            root.information.number_of_child=0;
            root.information.birth_year=1375;
            root.information.birth_month=01;
            root.information.birth_day=29;
            root.information.id=1;
            root.information.is_male=1;;
            root.information.is_dead=0;

}


#endif // HEAD_OF_TREE_H_INCLUDED
