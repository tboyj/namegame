//
// Created by jackson.philips on 3/17/2026.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>


class person {
private:
    std::string name;
    bool is_teacher_; // remnant of the old project lol

public:
    person(const std::string &name, bool isTeacher);

    std::string get_name() const;
    void set_name(const std::string& name) ;

};


#endif //PERSON_H