class MyQueue {
    stack<int> s1, s2;
public:
    MyQueue() {}

    void push(int x) {
        // Push all elements to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x); // Push new element to s1

        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};
