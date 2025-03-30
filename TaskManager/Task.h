#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

class Task {
public:
    static unsigned int task_count;

private:
    unsigned int task_id;
    std::string task_name;
    bool task_status;
    unsigned int task_priority;
    unsigned int task_duration;

public:
    // Constructori
    Task();
    Task(const std::string& name_var, const bool status_var, const int duration_var, const int priority_var);

    // Setteri
    void set_task_Name(const std::string& name_var);
    void set_task_Status(const bool& status_var);
    void set_task_Priority(const unsigned int& priority_var);
    void set_task_duration(const unsigned int& duration_var);

    // Getteri
    unsigned int get_task_id() const;
    std::string get_task_name() const;
    bool get_task_status() const;
    unsigned int get_task_priority() const;
    unsigned int get_task_duration() const;

    // Destructor
    ~Task();
};

#endif // TASK_H