#include<iostream>
#include<queue>
using namespace std;

int main()
{
    string str = "zarcaazrd";
    int freq[26] = {0};
    queue<char> q;

    string ans = "";

    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];

        //freq increament
        freq[ch - 'a']++;
        q.push(ch);
        while(!q.empty())
        {
            if(freq[q.front() -'a'] > 1)
            {
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
        {
            ans.push_back('#');
        }
    }
    cout<<"final ans is: "<<ans<<endl;
    return 0;
}