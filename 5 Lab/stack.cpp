#include <iostream>
#include <stack>
#include <math.h>

int read() {
    int x;
    std::cin >> x;
    return x;
}

int main() {
    std::stack<int> st;
    int x;
    while((x = read()) != 0){
        if (x > 0)
            st.push(x);
        else if (not st.empty()) {
            if (abs(x) < st.top())
                st.top() += x;
            else
                st.pop();
        }
    }
    if (st.empty())
        std::cout << 0 << ' ' << -1;
    else
        std::cout << st.size() << ' ' << st.top();
}