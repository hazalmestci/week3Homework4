#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
     radius = radius + 0.2;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundAuto(FALSE);
    xPos = xOrig + radius * cos(angle);
    yPos = yOrig + radius * sin(angle);
    
    ofSetColor(ofRandom(0,155),ofRandom(100,205),ofRandom(100,205));
    float xorig = 500;
    float yorig = 300;
    float angle = ofGetElapsedTimef()*3.5;
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * sin(angle);
    ofDrawCircle (x,y,radius);
    ofDrawBox(x/2, y/2, xPos/2, 10);
    ofDrawBox(x*2, y*2, xPos, 10);
    
//    for (int i = 0; i < 500; i++){
//        float x = i;
//        float noise = ofNoise(i/10.0);
//        float y = ofMap(noise, 0,1, 0, 100);
//        ofVertex(x,y);
//        ofDrawBox(x/2, y/2, xPos/2, 10);
//    }
    
    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
