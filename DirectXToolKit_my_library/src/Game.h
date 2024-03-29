//
// Game.h
//

#pragma once

#include "pch.h"
#include "StepTimer.h"

// A basic game implementation that creates a D3D11 device and
// provides a game loop
class Game
{
private:

    void Update(DX::StepTimer const& timer);

    void CreateDevice();
    void CreateResources();

    void OnDeviceLost();

    // Application state
    HWND                                            m_window;

    // Direct3D Objects
    D3D_FEATURE_LEVEL                               m_featureLevel;

    // Rendering resources
    Microsoft::WRL::ComPtr<IDXGISwapChain>          m_swapChain;
    Microsoft::WRL::ComPtr<IDXGISwapChain1>         m_swapChain1;
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView>  m_renderTargetView;
    Microsoft::WRL::ComPtr<ID3D11DepthStencilView>  m_depthStencilView;
    Microsoft::WRL::ComPtr<ID3D11Texture2D>         m_depthStencil;

    // Game state
    DX::StepTimer                                   m_timer;

    // 画面管理クラス
    std::shared_ptr<ScreenManager> screen_manager;

public:

    Game();

    // Initialization and management
    void Initialize(HWND window);

    // Basic game loop
    void Tick();
    void Render();

    // Rendering helpers
    void Clear();
    void Present();

    // Messages
    void OnActivated();
    void OnDeactivated();
    void OnSuspending();
    void OnResuming();
    void OnWindowSizeChanged();

    // Properites
    void GetDefaultSize( size_t& width, size_t& height ) const;
};
