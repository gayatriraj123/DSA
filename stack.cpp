#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(20);

    // remove
    st.pop();

    // // check
    // cout<<" element on top is :"<<st.top()<<endl;
    
    // // size
    // cout<<" size of stack is :"<<st.size()<<endl;

    // if(st.empty())
    // {
    //     cout<<"stack is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"stack is not empty"<<endl;
    // }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}