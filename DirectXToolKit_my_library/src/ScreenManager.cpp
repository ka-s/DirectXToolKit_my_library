//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;
using namespace kas;

using Microsoft::WRL::ComPtr;

// 初期化
void ScreenManager::Init()
{
    // SpriteBatch初期化
    Direct3DObject::sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // Alphaブレンド用ステータス初期化
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test用Texture読み込み
    t_test = Texture(L"Data/Graph/cat.png");
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
    Direct3DObject::sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // 何かを描画
    t_test.render();

    // SpriteBatch描画物をGPUに転送
    Direct3DObject::sprite_batch->End();
}
