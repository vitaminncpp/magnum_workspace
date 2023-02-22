#include <string>
#include <Magnum/GL/DefaultFramebuffer.h>
#include <Magnum/Platform/Sdl2Application.h>
#include <Magnum/GL/Context.h>
#include <Magnum/GL/Renderer.h>
#include <Magnum/GL/Version.h>
#include <Magnum/Math/Color.h>

using namespace Magnum;

class App: public Platform::Application {
public:
    explicit App(const Arguments& arguments);

private:
    void drawEvent() override;
};

App::App(const Arguments& arguments): Platform::Application{arguments} {
    using namespace Math::Literals;

    GL::Renderer::setClearColor(0xa5c9ea_rgbf);
    Debug{} << "Hello! This application is running on"
            << GL::Context::current().version();
}

void App::drawEvent() {
    GL::defaultFramebuffer.clear(GL::FramebufferClear::Color);

    /* TODO: Add your drawing code here */

    swapBuffers();
}

MAGNUM_APPLICATION_MAIN(App)
