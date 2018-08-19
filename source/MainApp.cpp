#include "MainApp.h"

// ========================================================================
void MainApp::setup()
{
    ofBackground(0);

    soundStream.printDeviceList();

    // if you want to set the device id to be different than the default:
    //
    //	auto devices = soundStream.getDeviceList();
    //	settings.setOutDevice(devices[3]);

    // you can also get devices for an specific api:
    //
    //	auto devices = soundStream.getDeviceList(ofSoundDevice::Api::PULSE);
    //	settings.setOutDevice(devices[0]);

    // or get the default device for an specific api:
    //
    // settings.api = ofSoundDevice::Api::PULSE;

    // or by name:
    //
    //	auto devices = soundStream.getMatchingDevices("default");
    //	if(!devices.empty()){
    //		settings.setOutDevice(devices[0]);
    //	}

    ofSoundStreamSettings settings;

    settings.setInListener(this);
    settings.setOutListener(this);

    settings.sampleRate        = SAMPLE_RATE;
    settings.bufferSize        = BUFFER_SIZE;
    settings.numInputChannels  = INPUT_CHANNELS;
    settings.numOutputChannels = OUTPUT_CHANNELS;

    soundStream.setup(settings);
} // MainApp::setup

void MainApp::update()
{ }

void MainApp::draw()
{ }

// ========================================================================
void MainApp::keyPressed(int key)
{ }

void MainApp::keyReleased(int key)
{ }

// ========================================================================
void MainApp::mouseMoved(int x, int y)
{ }

void MainApp::mouseDragged(int x, int y, int button)
{ }

void MainApp::mousePressed(int x, int y, int button)
{ }

void MainApp::mouseReleased(int x, int y, int button)
{ }

void MainApp::mouseEntered(int x, int y)
{ }

void MainApp::mouseExited(int x, int y)
{ }

// ========================================================================
void MainApp::windowResized(int w, int h)
{ }

void MainApp::dragEvent(ofDragInfo dragInfo)
{ }

void MainApp::gotMessage(ofMessage msg)
{ }

// ========================================================================
void MainApp::audioIn(ofSoundBuffer &buffer)
{ }

void MainApp::audioOut(ofSoundBuffer &buffer)
{
    // buffer.getNumFrames() = buffer size
    // buffer.getNumChannels() = number of channels
    // buffer[i] = get sample i
}
