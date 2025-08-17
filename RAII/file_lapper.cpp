#include <cstdio>
#include <stdexcept>

class FileWrapper {
    FILE* fp;
public:
    FileWrapper(const char* path, const char* mode) {
        fp = std::fopen(path, mode);
        if (!fp) throw std::runtime_error("Failed to open file");
    }
    ~FileWrapper() {
        if (fp) std::fclose(fp);
    }

    FILE* get() { return fp; }
};

