#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetFrameRate(1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    int circleRadius = 200;
    float numVertices = 30;
    float vertexDegree = TWO_PI / numVertices;
    
    ofSetColor(30);
    ofBeginShape();
    for (int i = 0 ; i< numVertices + 3; i++) {
        float x = cos(i*vertexDegree) * (circleRadius + ofRandom(-50,50));
        float y = sin(i*vertexDegree) * (circleRadius + ofRandom(-50,50));
        ofCurveVertex(x, y);
    }
    ofEndShape();
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
