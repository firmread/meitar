// derived from Rune Madsen's Processing version
// which can be found here : https://github.com/runemadsen/printing-code/tree/master/form/sincos_allshapes

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofTranslate(ofGetWidth()/2, 125);
    ofSetColor(30);
    
    int points[] = {3,4,6,40};
    
    for (int i = 0; i < 4; i++){
        ofBeginShape();
        for (int j = 0; j< points[i]; j++) {
            float vertexX = cos(j * (TWO_PI/points[i]))*100;
            float vertexY = sin(j * (TWO_PI/points[i]))*100;
            ofVertex(vertexX, vertexY);
        }
        ofEndShape();
        ofTranslate(0, 200);
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
