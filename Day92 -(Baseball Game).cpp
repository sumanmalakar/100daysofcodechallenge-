class Solution {
public:
    int calPoints(vector<string>& operations) {
    stack<int> s;
    int score=0;
    for(int i=0;i<operations.size();i++)
    {
        
        if(operations[i]=="C")
        {
            s.pop();
        }
        else if(operations[i]=="D")
        {
            int num=s.top()*2;
            s.push(num);
        }
        else if(operations[i]=="+")
        {
            int xzxczxczxcsc   =s.top();
            s.pop();
            int slast=s.top();
            s.push(last);
            s.push(last+slast);
        }
        else
        {
            int value=stoi(operations[i]);
            s.push(value);
        }
    }
    while(!s.empty())
    {
        score+= s.top();
        s.pop();
    }
    return score;
    }
};