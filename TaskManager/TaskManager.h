#pragma once
#include "Task.h"

class TaskManager
{
	private:
		Task taskInstance;

	public:
		TaskManager();
		void AddTask();
		void ShowTasks();
		void ModifyTask();
		void DeleteTask();
		void RecommendTask();
		void Exit();


};
