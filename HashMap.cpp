#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

    unordered_map<string,int> m;
    // insertion
    // 1

    pair<string,int> p= make_pair("babbar",1);
    m.insert(p);

    // 2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    // 3
    m["mera"] = 3;

    // serach the element
    cout<<m["mera"] <<endl;
    cout<<m.at("babbar") <<endl;
    cout<<m["unknown"] <<endl;
    cout<<m.at("unknown") <<endl; 

    cout<<m.size()<<endl;

    cout<<m.count("love")<<endl;

    // Eease

    m.erase("love");
    cout<<m.size()<<endl;

    // iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it !=m.end())
    {
        cout<< it->first <<" "<< it-> second <<endl;
        it++;
    }


    return 0;

      
}







