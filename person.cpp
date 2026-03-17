//
// Created by jackson.philips on 3/17/2026.
//

#include "person.h"

person::person(const std::string& name, bool isTeacher) : name(name), is_teacher_(isTeacher) {}

std::string person::get_name() const {
    return name;
}
void person::set_name(const std::string& name)  {
    this->name = name;
}

