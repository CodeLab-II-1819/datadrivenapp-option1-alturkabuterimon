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

		ofTrueTypeFont font, font2; //Declare font for text
		ofImage logo; //Declare image
};
