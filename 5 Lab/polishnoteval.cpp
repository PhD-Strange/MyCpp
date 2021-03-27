#include <iostream>
#include <string>
#include <stack>

int read() {
    int x;
    std::cin >> x;
    return x;
}

int main() {
    std::string str;
    std::stack<int> st;
    int res1, res2, res3;
    while(std::cin >> str){
        if((str.size() ==1 ) and (std::string("+-*/").find(str[0]) != std::string::npos)) {
            res1 = st.top();
            st.pop();
            res2 = st.top();
            s.pop();
            if (str == "+")
                res3 = res2 + res1;
            else if (str == "-")
                res3 = res2 - res1;
            else if (str == "*")
                res3 = res2 * res1;
            else
                res3 = res2 / res1;
            st.push(res3);
        }
        else{
            int f = stoi(str);
            st.push(f);
        }

    }
    int a = st.top();
    std::cout << a;
}