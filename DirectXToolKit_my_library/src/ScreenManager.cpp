//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

// ‰Šú‰»
void ScreenManager::Init()
{
    // SpriteBatch‰Šú‰»
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
}

// I—¹
void ScreenManager::Fin()
{

}

// XV
void ScreenManager::Update()
{

}

// •`‰æ
void ScreenManager::Render()
{
    // SpriteBatch•`‰æŠJn
    sprite_batch->Begin();

    // ‰½‚©‚ğ•`‰æ
    sprite_batch->Draw(nullptr, Vector2(0.f, 0.f));

    // SpriteBatch•`‰æ•¨‚ğGPU‚É“]‘—
    sprite_batch->End();
}
