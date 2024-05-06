#include <iostream>
#include <map>

class TaskManager {
public:
    void addTask(int id, std::string task) {
        tasks[id] = task;
    }

    void completeTask(int id) {
        tasks.erase(id);
    }

    void viewTasks() {
        for(auto task : tasks) {
            std::cout << "ID: " << task.first << ", Tarefa: " << task.second << std::endl;
        }
    }

private:
    std::map<int, std::string> tasks;
};

int main() {
    TaskManager tm;
    tm.addTask(1, "Ir ao supermercado");
    tm.addTask(2, "Estudar para a prova");
    tm.viewTasks();
    tm.completeTask(1);
    tm.viewTasks();
    return 0;
}
