#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CircleClusterApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CircleClusterApp::setup()
{
}

void CircleClusterApp::mouseDown( MouseEvent event )
{
}

void CircleClusterApp::update()
{
}

void CircleClusterApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CircleClusterApp, RendererGl )
