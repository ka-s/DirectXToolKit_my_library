//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

// 初期化
void ScreenManager::Init()
{
    // SpriteBatch初期化
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
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
    sprite_batch->Begin();

    // 何かを描画
    sprite_batch->Draw(nullptr, Vector2(0.f, 0.f));

    // SpriteBatch描画物をGPUに転送
    sprite_batch->End();
}
