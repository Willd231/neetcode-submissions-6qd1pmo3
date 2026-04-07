class DynamicArray {
public:
    std::vector<int> array;
    DynamicArray(int capacity) {
        array.reserve(capacity);
    }

    int get(int i) {
        return(array[i]);
         }

    void set(int i, int n) {
        array[i] = n;
        return;
    }

    void pushback(int n) {
        array.push_back(n);
    }

    int popback() {
        if(array.size() == 0){
            return -1;
        }
        int last = array.back();
        array.pop_back();
        return last;
    }

    void resize() {
        array.reserve(array.size() * 2);
    }

    int getSize() {
        return array.size();
    }

    int getCapacity() {
        return array.capacity();
    }
};
