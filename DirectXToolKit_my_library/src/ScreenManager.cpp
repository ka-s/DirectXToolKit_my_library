//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

using Microsoft::WRL::ComPtr;

// 初期化
void ScreenManager::Init()
{
    // SpriteBatch初期化
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // Alphaブレンド用ステータス初期化
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test用Texture読み込み
    CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(), 
                             L"Data/Graph/cat.png", nullptr,
                             t_test.ReleaseAndGetAddressOf());
}

// 終了
void ScreenManager::Fin()
{

}

// 更新
void ScreenManager::Update()
{

}

// 描画
void ScreenManager::Render()
{
    // SpriteBatch描画開始
    sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // 何かを描画
    sprite_batch->Draw(t_test.Get(), Vector2(0.f, 0.f));

    // SpriteBatch描画物をGPUに転送
    sprite_batch->End();
}
