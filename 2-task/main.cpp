#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream> 
#include "nlohmann/json.hpp"


//std::string str = dict["Nullam"]["country"].get<std::string>();
/*
for (auto &d: dict) {
    for (auto& [key, value]: d["cast"].items()) {
        std::cout << key << " " << value.get<std::string>() << ", ";
    }
    std::cout << std::endl;
}
*/

class Film {
    nlohmann::json dict;
    std::string filename = "record.json";
public:
    void readFile() {
        std::ifstream file(filename);
        file >> dict;
        file.close();
    }
    void findActor() {
        std::string actorName;
        std::cout << "Input actror name: ";
        std::cin >> actorName;
        for (auto& [key, value]: dict.items()) {
            std::string filmName = key;
            for (auto& [key, value]: value["cast"].items()) {
                std::string tempName = key.substr(0, key.find(" "));
                std::string tempSurname = key.substr(key.find(" ") + 1);
                if (actorName == tempName || actorName == tempSurname) {
                    std::cout << "Actor played in " << filmName << " as " << value.get<std::string>() << std::endl;
                }
            }
        }
    }
};

int main() {
    Film film;
    film.readFile();
    film.findActor();
}

/*
Используя модель данных из задачи №1, создайте JSON-документ, 
но теперь уже для пяти различных кинолент. Ключи в этой JSON-базе 
данных должны быть названиями фильмов, а значениями 
служить уже словари с информацией о картинах.
Загрузите базу данных в C++-программу для последующего 
анализа. Предусмотрите следующий функционал: 
поиск актёра по имени (или фамилии) и вывод в консоль 
названий кинолент, в которых снимался актёр, и роль, которую он исполнял.
*/