#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <cstdio>
#include <cstdlib>

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>

#define PROCESS_PATH "/proc/"
#define FILE_STATUS "/status"

using namespace std;


class ProcessManager {
    public:
        void getProcess(string,string);
};

void ProcessManager::getProcess(string id, string info) {
    string path = PROCESS_PATH + id + FILE_STATUS;
    ifstream ifs(path);
    string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );


    string arg;

    string::size_type pos = content.find(' ');
    if(content.npos != pos) {
        arg = content.substr(pos + 1);
        content = content.substr(0, pos);
    }
    cout << arg;
}