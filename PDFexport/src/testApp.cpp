#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){


    ofBackground(0,0,0);
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
//    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
	
    oneShot = false;
	pdfRendering = false;

	
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    // PDF stuff

    
	if( oneShot ){
		ofBeginSaveScreenAsPDF("screenshot-"+ofGetTimestampString()+".pdf", false);
	}
	
	ofSetColor(54);
	if( pdfRendering ){
		ofDrawBitmapString("press r to stop pdf multipage rendering", 32, 50);
	}else{	
		ofDrawBitmapString("press r to start pdf multipage rendering", 32, 50);
	}
		
		
	ofFill();		
	ofSetColor(54,54,54);
    
    ofSetColor(ofColor::salmon);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofRect(mouseX, mouseY, 20, 20);
	

	if( oneShot ){
		ofEndSaveScreenAsPDF();
		oneShot = false;
	}	
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
	
	if( key=='r'){
		pdfRendering = !pdfRendering;	
		if( pdfRendering ){
			ofSetFrameRate(12);  // so it doesn't generate tons of pages
			ofBeginSaveScreenAsPDF("recording-"+ofGetTimestampString()+".pdf", true);
		}else{
			ofSetFrameRate(60);
			ofEndSaveScreenAsPDF();		
		}
	}
    
    
    if( !pdfRendering && key == 's' ){
		oneShot = true;
	}

	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}


