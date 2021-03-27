#include <deque>
#include <stack>
#include <iostream>
#include <string>

int main(){
    std::deque <std::string> que;
    std::string s;
    int n=0;
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        std::cin >> s;
        if ((s == "*")){
            std::cin >> s;
            que.insert(que.begin() + que.size()/2 + que.size() % 2, s);
        } else
        if ((s == "+")){
            std::cin >> s;
            que.push_back(s);
        } else
        if ((s == "-")){
            std::cout << que.front() << "\n";
            que.pop_front();
        }
    }
}