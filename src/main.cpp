#include <wx/wx.h>

class MyApp : public wxApp {
public:
    bool OnInit() override;
};

class MyFrame : public wxFrame {
public:
    MyFrame() : wxFrame(nullptr, wxID_ANY, "wxWidgets + vcpkg CI!!") {
        new wxStaticText(this, wxID_ANY, "Hello wxWidgets!", wxPoint(20,20));
    }
};

bool MyApp::OnInit() {
    MyFrame* frame = new MyFrame();
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(MyApp);

