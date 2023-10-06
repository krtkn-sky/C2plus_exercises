#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element -> " << q.front() << endl;
    q.pop();
    cout << "Front element after pop -> " << q.front()  << endl;
    return 0;
}