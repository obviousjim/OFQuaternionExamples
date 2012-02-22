#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(30);

	ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofVec3f axis;  
    float angle;       
    curRot.getRotate(angle, axis);  
    glPushMatrix();  
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 40);  
    ofRotate(angle, axis.x, axis.y, axis.z);  
    ofBox(0, 0, 0, 200); //i'm drawing a box b/c it's easier to see it rotate!  
    ofPopMatrix();  
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    ofVec2f mouse(x,y);  
    ofQuaternion yRot(x-lastMouse.x, ofVec3f(0,1,0));  
    ofQuaternion xRot(y-lastMouse.y, ofVec3f(-1,0,0));  
    curRot *= yRot*xRot;  
    lastMouse = mouse;  
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    lastMouse = ofVec2f(x,y);  
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