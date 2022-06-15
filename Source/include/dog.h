#include <string>
#include <iostream>

class dog
{
public:
    explicit dog(std::string name_param);
    dog() = default;
    ~dog();

    std::string get_name() const
    {
        return dog_name;
    }

    void set_dog_name(const std::string &name)
    {
        dog_name = name;
    }

    void print_info()
    {
        std::cout << "Dog [ name : " << dog_name << " ]" << std::endl;
    }

private:
    std::string dog_name {"Puffy"};

};

