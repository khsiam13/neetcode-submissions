class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;
        for(auto e : tokens) {
            if(e != "+" && e != "-" && e != "*" && e != "/") s.push(stoi(e));
            else {
                int num;
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                if(e == "+") {
                    s.push(num1+num2);
                } else if(e == "-") {
                    s.push(num2-num1);
                } else if(e == "/") {
                    s.push(num2/num1);
                } else {
                    s.push(num1*num2);
                }
            }
        }
        return s.top();
    }
};
