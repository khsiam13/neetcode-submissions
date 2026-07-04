class MinStack {
private:
    std::vector<std::pair<int, int>> elements; 
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(elements.size() > 0)
            elements.push_back({val, elements.back().second < val ? elements.back().second : val});
        else
            elements.push_back({val, val});
    }
    
    void pop() {
        elements.pop_back();
    }
    
    int top() {
        return elements.back().first;
    }
    
    int getMin() {
        return elements.back().second;
    }
};
