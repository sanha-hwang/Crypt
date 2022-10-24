#ifndef __SECURE_ENCRYPTOR_H__
#define __SECURE_ENCRYPTOR_H__

#include <string>

class Encryptor {
public:
    Encryptor(std::string key);
    ~Encryptor(void);

    void encryptor(std::string fileName);
};

#endif 