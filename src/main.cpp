#include <iostream>
#include "Process/ProcessManager.h"
#include "Audio/AudioPlayer.h"

int main(int argc, char **argv) {
    AudioPlayer player;
    player.play(argv[1]);
}