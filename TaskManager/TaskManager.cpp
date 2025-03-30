#include "TaskManager.h"
#include <vector>

using namespace std;

vector<Task> tasks;

TaskManager::TaskManager() : taskInstance() {}

void TaskManager::AddTask() {

    string taskName;
    cout << "Introdu numele taskului: ";
    cin.ignore(); // Ignore any leftover newline character in the input buffer
    getline(cin, taskName);

    bool taskStatus;
    cout << "Introdu statusul taskului( 1-> Completat , 0-> In desfasurare): ";
    cin >> taskStatus;

    unsigned int taskDuration;
    cout << "Introdu durata taskului( in minute): ";
    cin >> taskDuration;

    unsigned int taskPriority;
    cout << "Introdu prioritatea taskului( 10-> Prioritar, 1->Neprioritar) : ";
    cin >> taskPriority;

    Task newTask(taskName, taskStatus, taskDuration, taskPriority);
    tasks.push_back(newTask);
    cout << "Task adaugat cu Succes.\n";
}

void TaskManager::ShowTasks() {
    for (const auto& task : tasks) {
        cout << "\nID-ul Taskului: " << task.get_task_id() << "\n Numele Taskului: " << task.get_task_name() << "\n Status: " << (task.get_task_status() ? "Completat" : "In desfasurare") << "\n Durata: " << task.get_task_duration() << "\n Coefficient: " << task.get_task_priority() << "\n\n";
 
    }
}

void TaskManager::ModifyTask() {
    unsigned int taskId;
    cout << "Introdu ID-ul Taskului ce trebuie modificat: ";
    cin >> taskId;
    for (auto& task : tasks) {
        if (task.get_task_id() == taskId) {
            string newTaskName;
            cout << "Introdu numele nou taskului ce este modificare: ";
            cin >> newTaskName;
            task.set_task_Name(newTaskName);

            bool newTaskStatus;
			cout << "Introdu statusul nou taskului ce este in modificare( 1-> Completat , 0-> In desfasurare): ";
			cin >> newTaskStatus;
			task.set_task_Status(newTaskStatus);

			unsigned int newTaskDuration;
			cout << "Introdu durata noua a taskului ce este in modificare( in minute): ";
            cin >> newTaskDuration;
			task.set_task_duration(newTaskDuration);

			unsigned int newTaskPriority;
			cout << "Introdu prioritatea noua a taskului ce este in modificare( 10-> Prioritar, 1->Neprioritar) : ";
			cin >> newTaskPriority;
			task.set_task_Priority(newTaskPriority);

            cout << "Task modificat cu succes.\n";
            return;
        }
    }
    cout << "Taskul nu a fost gasit.\n";
}

void TaskManager::DeleteTask() {
    unsigned int taskId;
    cout << "Introdu ID-ul Taskului ce trebuie sters: ";
    cin >> taskId;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->get_task_id() == taskId) {
            tasks.erase(it);
            cout << "Task sters cu succes.\n";
            return;
        }
    }
    cout << "Taskul nu a fost gasit.\n";
}

void TaskManager::RecommendTask() {
	unsigned int maxPriority = 0;
    string maxPriorityTaskName="";
	for (const auto& task : tasks) {
		if (task.get_task_priority() > maxPriority && task.get_task_status() == 0) {
			maxPriority = task.get_task_priority();
            maxPriorityTaskName = task.get_task_name();
		}
	}
	if (maxPriorityTaskName =="") {
		cout << "Nu exista taskuri in lista.\n";
	}
	else {
		cout << "Taskul cu cea mai mare prioritate este: " << maxPriorityTaskName << "\n";
	}
    
}

void TaskManager::Exit() {
    cout << "Iesire din applicatie,sa ai o zi productiva!\n";
    exit(0);
}