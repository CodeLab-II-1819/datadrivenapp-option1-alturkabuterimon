#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Declare width and height of window for scalability. 
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	welcomeText.load();
	welcome = "Sample Tweet Program.";

	//Declare padding 
	padding = ofGetWindowHeight() / 55;
	

}

//--------------------------------------------------------------
void ofApp::update(){
	//Continuously update width and height so that it changes as the user resizes the window 
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	//Same as above with padding
	padding = ofGetWindowHeight() / 55;

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(106, 92, 174); //change background colour 

	ofSetColor(157, 169, 225); //Set box colour

	//Draw background boxes
	ofDrawRectangle(padding, padding, (width -(padding * 2)), (height/8));
	ofDrawRectangle(padding, (height / 8) + (padding * 2), (width / 5), ((height / 9) * 7) - (padding * 20));
	

	//Set colour to white
	ofSetColor(231, 236, 255);
	ofDrawRectangle((width / 5) + (padding * 2), (height / 8) + (padding * 2), ((width / 5) * 4) - padding * 3, ((height / 8) * 7) - (padding * 5));

	//Draw buttons 
	ofDrawRectangle(padding * 2, (height / 8) + padding * 3, (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 4 + (height / 16), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 5 + ((height / 16) * 2), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 6 + ((height / 16) * 3), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 7 + ((height / 16) * 4), (width / 5) - padding * 2, (height / 16));



}

