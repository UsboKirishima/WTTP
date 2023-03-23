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

#define PROCESS_PATH "/proc"

using namespace std;

vector<string> text;

class ProcessManager {
    public:
        void getProcess(string,string);
};

void ProcessManager::getProcess(string id, string info);