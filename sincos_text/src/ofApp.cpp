#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    circleRadius = 200;
    font.loadFont("Helvetica.Ttf", 12);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(30);
    
    float numWords = 30;
    float wordDegree = TWO_PI / numWords;
    
    for (int i = 0; i< numWords; i++) {
        ofPushMatrix();
        float x = cos(i*wordDegree) *circleRadius;
        float y = sin(i*wordDegree) *circleRadius;
        ofTranslate(x, y);
        ofRotate(i * wordDegree * RAD_TO_DEG);
//        ofDrawBitmapString("Hello World!", 0,0);
        font.drawString("Hello World!", 0, 0);
        ofPopMatrix();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
