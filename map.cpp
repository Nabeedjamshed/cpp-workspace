// map is just like dictionary
#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string,int> marksmap; // map<key(datatype),value(datatype)> mapname
    marksmap["Nabeed"] = 99;
    marksmap["Filza"] = 79;
    marksmap["Sualiha"] = 55;
    marksmap.insert({{"Jamshed",89}});
    marksmap.insert({{"Jamshed",89},{"Huma",87}}); // 2 bar insert kroge tu ek bar hi hoga.
    marksmap.insert(make_pair("Hello",9));
    map<string,int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;// iter ek key value pair ko point krrha iter.first se key miljaegi or iter.second se value kyu ke iter jha point rhha wha first per key hai like Nabeed and second per value hai like 99.
    }

    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The max size is: "<<marksmap.max_size()<<endl; // This gives ke kitni value map mai dal skte.
    cout<<"The empty is: "<<marksmap.empty()<<endl; //return 0 if map conatainer is not empty while return 1 if it is empty.
    return 0;
}

/*
A map in C++ STL is an associative container which stores key value pairs. To elaborate, a map stores a key of some data type and its corresponding values of some data type. For example: a teacher wants to store the marks of students which in future can be accessed by their names. Here, keys are the student names, and their marks are the corresponding values.
*/