#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){	
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    ofBackground(40);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
//    ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
//    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
	
    for (int i=0; i<NUM_FIRE; i++) {
        firing[i].setup();
    }
    
    oneShot = false;
    pdfRendering = false;
	
}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<NUM_FIRE; i++) {
        firing[i].update();
    }


}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    //pdf
    if( oneShot ){
        ofBeginSaveScreenAsPDF("screenshot-"+ofGetTimestampString()+".pdf", false);
    }
    if( pdfRendering ){
        //some visual cues
    }
    
    
    //draw
    for (int i=0; i<NUM_FIRE; i++) {
        firing[i].draw();
    }
    
    
    //pdf
    if( oneShot ){
        ofEndSaveScreenAsPDF();
        oneShot = false;
    }
    
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
    if (key == 'f' || key == 'F') {
        ofToggleFullscreen();
    }
    
    
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
void testApp::keyReleased  (int key){ 
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    check +=1;
    
    if (check == 1) {
        firing[0].refire(x, y);
    }
    else if(check == 2){
        firing[1].refire(x, y);
        check = 0;
    }

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
//    check +=1;
//    
//    if (check == 1) {
//        firing[0].refire(x, y);
//    }
//    else if(check == 2){
//        firing[1].refire(x, y);
//        check = 0;
//    }
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
