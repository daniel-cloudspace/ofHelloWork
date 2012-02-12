#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0,0,0);
    ofEnableSmoothing();
    step = 0;
    maxWidth = 800;
    maxHeight = 600;
    for(int i=0; i<50; i++) {
        circleX[i] = circleY[i] = 50;
        circleWidth[i] = 10;
        circleColor[i] = 255;
    }
    stepOffspeed=100;
    stepOff = 50;
    circleXspeed = 15.3;
    circleYspeed = 22.1;
    circleWidthspeed=4.3;
}

//--------------------------------------------------------------
void testApp::update(){
    // ofSetColor(0,0,0);
    // ofStroke(); OR ofFill();
    // ofCircle();

    for(int i=0; i<50; i++) {
        circleX[i] = (maxWidth/2+10) + (maxWidth/2-40) * sin((step-i*stepOff)/18.3 * .017453292516);
        circleY[i] = (maxHeight/2+10) + (maxHeight/2-40) * sin((step-i*stepOff)/22.1 * .017453292516);
        circleWidth[i] = 30 * sin((step-i*stepOff)/circleWidthspeed * .017453292516) + 10;
        circleColor[i] = 127 + 127 * ( sin((step-i*stepOff)/12.0 * .017453292516));// + sin(((step*5)/11.0 * .017453292516))) / 2.0;
    }

    //stepOff = 50 + 200 * sin(step/stepOffspeed * .017453292516);

    step++;
}

//--------------------------------------------------------------
void testApp::draw(){
    for(int i=0; i<50; i++) {
        ofSetColor(0,circleColor[i],0);
        ofFill();
        //ofNoFill();
        ofCircle(circleX[i],circleY[i],circleWidth[i]);
    }
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
