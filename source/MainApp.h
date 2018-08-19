#pragma once

#include "ofMain.h"

#define SAMPLE_RATE     48000
#define BUFFER_SIZE     128
#define INPUT_CHANNELS  2
#define OUTPUT_CHANNELS 2

class MainApp : public ofBaseApp
{
public:
    // ========================================================================
    void setup();
    void update();
    void draw();

    // ========================================================================
    void keyPressed(int key);
    void keyReleased(int key);

    // ========================================================================
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);

    // ========================================================================
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    // ========================================================================
    void audioIn(ofSoundBuffer &buffer);
    void audioOut(ofSoundBuffer &buffer);

private:
    // ========================================================================
    ofSoundStream soundStream;
};
