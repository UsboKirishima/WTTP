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

#define cmd "ffplay "

using namespace std;

class AudioPlayer {
    public:
        void play(string);
};

void AudioPlayer::play(string AudioFile) {
    string SCRIPT = cmd + AudioFile;
    char *conSC = SCRIPT.data();
    system(conSC);
}