//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

using Microsoft::WRL::ComPtr;

// ‰Šú‰»
void ScreenManager::Init()
{
    // SpriteBatch‰Šú‰»
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // AlphaƒuƒŒƒ“ƒh—pƒXƒe[ƒ^ƒX‰Šú‰»
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test—pTexture“Ç‚İ‚İ
    //CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(), 
    //                         L"Data/Graph/cat.png", nullptr,
    //                         t_test.ReleaseAndGetAddressOf());
    t_test = kas::Texture(L"Data/Graph/cat.png");
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
    sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // ‰½‚©‚ğ•`‰æ
    sprite_batch->Draw(t_test.Get().Get(), Vector2(0.f, 0.f));

    // SpriteBatch•`‰æ•¨‚ğGPU‚É“]‘—
    sprite_batch->End();
}
