class Buffer {
    int* data;
    size_t size;
public:
    Buffer(size_t n) : size(n) { data = new int[n]; }
    ~Buffer() { delete[] data; }

    // Move constructor
    Buffer(Buffer&& other) noexcept 
        : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    // Copy disabled (optional)
    Buffer(const Buffer&) = delete;
};

