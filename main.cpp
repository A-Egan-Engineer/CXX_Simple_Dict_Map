#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> dictionary;
    map<string,string>::iterator it;

    dictionary.insert(pair<string,string>
        ("Cat", "Small furry animal that hunts for birds"));
    dictionary.insert(pair<string,string>(
        "Dog", "Animal that likes to chase cats"));
    dictionary.insert(pair<string,string>(
        "Bird","Small winged animal that feeds on bugs, seeds and other matter"));
    dictionary.insert(pair<string,string>(
        "Bug","Bugs are insects that consist of many different types like grubs, caterpillars, flies and more"));
    dictionary.insert(pair<string,string>(
        "Flies","Flies are winged bugs that make low buzzing sounds when they fly due to the high frequency they flap their wings every second, frogs love to eat them"));
    dictionary.insert(pair<string,string>(
        "Frog","Small reptile that comes in many colours and are often found in trees"));
    dictionary.insert(pair<string,string>(
        "Tree","There are many types of trees, they are plants that can grow to be many different types, sizes and some produce fruit"));
    dictionary.insert(pair<string,string>(
        "Fruit","Fruit can come in many different shapes, sizes, colours and many taste different"));
    dictionary.insert(pair<string,string>(
        "Apple","Apples are a type of fruit that contains seeds and have a thin skin, that is normally red or green"));
    dictionary.insert(pair<string,string>(
        "Red","Red is a colour that can be used to paint, and is one of the coulours of RGB"));

    return 0;
};
