#pragma once

#include "PauseState.h"

PauseState::PauseState(){

    pauseImage.load("images/ui/loading.png");

}

void PauseState::render(){

    if(pause) pauseImage.draw(50,50,50,50);

}



void PauseState::keyPressed(int key){

    if(key == 'p') pause = !pause;

}