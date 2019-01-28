#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Declare width and height of window for scalability. 
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();

	//Load Font
	font.load("FragmentCore.otf", 25);
	font2.load("FragmentCore.otf", 18);

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

	//Draw Title Text
	ofSetColor(255);
	font.drawString("Sample Tweet Program", ((width / 35) + padding * 2), height/10);
	

	//Set colour to off-white
	ofSetColor(231, 236, 255);
	ofDrawRectangle((width / 5) + (padding * 2), (height / 8) + (padding * 2), ((width / 5) * 4) - padding * 3, ((height / 8) * 7) - (padding * 5));

	//Draw output text
	ofSetColor(157, 169, 225);
	font.drawString("Output:", (width / 5) + (padding * 3), ((height / 23) * 7) - (padding * 5));

	//Draw buttons
	ofSetColor(231, 236, 255);
	ofDrawRectangle(padding * 2, (height / 8) + padding * 3, (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 4 + (height / 16), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 5 + ((height / 16) * 2), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 6 + ((height / 16) * 3), (width / 5) - padding * 2, (height / 16));
	ofDrawRectangle(padding * 2, (height / 8) + padding * 7 + ((height / 16) * 4), (width / 5) - padding * 2, (height / 16));

	//Draw box text 
	ofSetColor(106, 92, 174);
	

	font2.drawString("Count All Tweets", (width / 15) - padding * 2, (height / 10) + padding * 3 + (height / 16));
	font2.drawString("Mentions: Money", (width / 15) - padding * 2, (height / 10) + padding * 7.5 + (height / 16));
	font2.drawString("Print: Paris", (width / 15) - padding * 2, (height / 10) + padding * 12 + (height / 16));
	font2.drawString("Search by Word", (width / 15) - padding * 2, (height / 10) + padding * 16.5 + (height / 16));
	font2.drawString("Print: Rabbits", (width / 15) - padding * 2, (height / 10) + padding * 21 + (height / 16));



}

