//
// Created by pesekmik on 21.11.24.
//

#include "random.h"

#include <time.h>
#include <stdlib.h>

int rand_choice(int max) {
    srand(time(nullptr));
    return rand() % (max + 1);
}
