#include "Task.h"

unsigned int Task::task_count = -1;

//constructori
Task::Task() : task_id(++task_count), task_name(""), task_status(false), task_priority(0), task_duration(0) {}
Task::Task(const std::string& name_var, const bool status_var, const int duration_var, const int priority_var)
    : task_id(++task_count), task_name(name_var), task_status(status_var), task_priority(priority_var), task_duration(duration_var) {
}

// Setteri
void Task::set_task_Name(const std::string& name_var) {
    task_name = name_var;
}

void Task::set_task_Status(const bool& status_var) {
    task_status = status_var;
}

void Task::set_task_Priority(const unsigned int& priority_var) {
    task_priority = priority_var;
}

void Task::set_task_duration(const unsigned int& duration_var) {
    task_duration = duration_var;
}

// Getteri
unsigned int Task::get_task_id() const {
    return task_id;
}

std::string Task::get_task_name() const {
    return task_name;
}

bool Task::get_task_status() const {
    return task_status;
}

unsigned int Task::get_task_priority() const {
    return task_priority;
}

unsigned int Task::get_task_duration() const {
    return task_duration;
}

// Destructor
Task::~Task() {}