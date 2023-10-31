#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; // Adding namespace

struct Task {
    string description;
    bool completed;

    Task(const string &desc) : description(desc), completed(false) {}
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string &description) {
        Task newTask(description);
        tasks.push_back(newTask);
        cout << "Task added: " << description << endl;
    }

    void viewTasks() {
        cout << "Tasks:" << endl;
        int count = 1;
        for (const Task &task : tasks) {
            cout << count << ". ";
            cout << (task.completed ? "[X] " : "[ ] ") << task.description << endl;
            count++;
        }
    }

    void markCompleted(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            tasks[taskIndex - 1].completed = true;
            cout << "Task marked as completed." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    void removeTask(int taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task removed." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }
};

int main() {
    TodoList todo;
    int choice;
    string task;
    int taskNumber;

    do {
        cout << "------ To-Do List Manager ------" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task to add: ";
                cin.ignore();
                getline(cin, task);
                todo.addTask(task);
                break;

            case 2:
                todo.viewTasks();
                break;

            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> taskNumber;
                todo.markCompleted(taskNumber);
                break;

            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNumber;
                todo.removeTask(taskNumber);
                break;

            case 5:
                cout << "Exiting... Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}

