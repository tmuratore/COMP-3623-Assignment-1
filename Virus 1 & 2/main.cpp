// MURATORE TRISTAN 20443557 Quine https://github.com/ohhopi/COMP-3623-Assignment-1
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
    string me[] = {
"// MURATORE TRISTAN 20443557 Quine https://github.com/ohhopi/COMP-3623-Assignment-1",
"#include <iostream>",
"#include <fstream>",
"using namespace std;",
"int main(int argc, char** argv) {",
"    string me[] = {",
"    };",
"    int q = 34;",
"    int co = 44;",
"    ofstream victimFile;",
"    victimFile.open(argv[1]);",
"    int i;",
"    for(i = 0; i < 6; i++) victimFile<<me[i]<<endl; //Before string me",
"    for(i = 0; i < 18; i++) victimFile<<(char)q+me[i]+(char) q+(char) co<<endl; //String me content",
"    victimFile<<(char) q+me[18]+(char) q<<endl; //String me last line",
"    for(i = 6; i <= 18; i++) victimFile<<me[i]<<endl; //After String me content",
"    victimFile.close();",
"    return 0;",
"}"
    };
    int q = 34;
    int co = 44;
    ofstream victimFile;
    victimFile.open(argv[1]);
    int i;
    for(i = 0; i < 6; i++) victimFile<<me[i]<<endl; //Before string me
    for(i = 0; i < 18; i++) victimFile<<(char)q+me[i]+(char) q+(char) co<<endl; //String me content
    victimFile<<(char) q+me[18]+(char) q<<endl; //String me last line
    for(i = 6; i <= 18; i++) victimFile<<me[i]<<endl; //After String me content
    victimFile.close();
    return 0;
}
