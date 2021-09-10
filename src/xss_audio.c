//
// Created by ludwig on 9/10/21.
//
#include <stdio.h>
#include <stdlib.h>

char check_audio() {
    int pacmd = WEXITSTATUS(system("pacmd list-sinks | grep RUNNING"));

    if (pacmd != 0) {
        return 1;
    }
    system("xset s reset");
    return 0;
}
