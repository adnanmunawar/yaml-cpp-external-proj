#include <iostream>
#include <stdio.h>
#include <yaml-cpp/yaml.h>

using namespace std;
int main(){
	cerr << "Hello World!" << endl;

    YAML::Node node = YAML::LoadFile("../config.yaml");

    cerr << "Apple: " << node["apple"].as<string>() << endl;

	return 0;
}
