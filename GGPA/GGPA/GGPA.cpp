//// GGPA.cpp : Defines the entry point for the application.
////
//
//#include "framework.h"
//#include "GGPA.h"
//#include <crtdbg.h>
//
//
//#define MAX_LOADSTRING 100
//
//// Global Variables:
//HINSTANCE hInst;                                // current instance
//WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
//WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name
//
//// Forward declarations of functions included in this code module:
//ATOM                MyRegisterClass(HINSTANCE hInstance);
//BOOL                InitInstance(HINSTANCE, int);
//LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
//INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
//
//// CX_DX_01_InitDevice.cpp의 WinMain 수정
//int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
//    _In_opt_ HINSTANCE hPrevInstance,
//    _In_ LPWSTR lpCmdLine,
//    _In_ int nCmdShow)
//{
//    // Enable run-time memory check for debug builds.
//#if defined(DEBUG) | defined(_DEBUG)
//    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//#endif
//    CKDX_InitDirect3DApp theApp(hInstance);
//    if (!theApp.Init())
//        return 0;
//    return theApp.Run();
//}
//
//
//
//// CX_DX_01_InitDevice.cpp에서 include하는 부분과 WinMain함수 제외하고 모두 삭제 후 아래 코드 추가
//CKDX_InitDirect3DApp::CKDX_InitDirect3DApp(HINSTANCE hInstance)
//    : D3DApp(hInstance) {
//}
//CKDX_InitDirect3DApp::~CKDX_InitDirect3DApp() {
//}
//bool CKDX_InitDirect3DApp::Init() {
//    if (!D3DApp::Init())
//        return false;
//    return true;
//}
//void CKDX_InitDirect3DApp::OnResize() {
//    D3DApp::OnResize();
//}
//void CKDX_InitDirect3DApp::UpdateScene(float dt) {
//}
//void CKDX_InitDirect3DApp::DrawScene() {
//    assert(md3dImmediateContext);
//    assert(mSwapChain);
//
//    md3dImmediateContext->ClearRenderTargetView(mRenderTargetView, reinterpret_cast<const
//        float*>(&Colors::Blue));
//    md3dImmediateContext->ClearDepthStencilView(mDepthStencilView, D3D11_CLEAR_DEPTH |
//        D3D11_CLEAR_STENCIL, 1.0f, 0);
//
//    HR(mSwapChain->Present(0, 0));
//}