#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		float width, height; //width and height of windows
		float padding; //Padding variable

		string welcome; //Text 

		ofTrueTypeFont welcomeText; //Declare font for text
};
