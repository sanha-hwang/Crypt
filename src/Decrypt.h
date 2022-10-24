#ifndef __SECURE_DECRYPTOR_H__
#define __SECURE_DECRYPTOR_H__

#include <string>

class Decryptor {
public:
    Decryptor(std::string key);
    ~Decryptor(void);

    void decryptor(std::string fileName);
};

#endif 