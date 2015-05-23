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

// ‰Šú‰»
void ScreenManager::Init()
{
    // SpriteBatch‰Šú‰»
    Direct3DObject::sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // AlphaƒuƒŒƒ“ƒh—pƒXƒe[ƒ^ƒX‰Šú‰»
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test—pTexture“Ç‚İ‚İ
    t_test = Texture(L"Data/Graph/cat.png");
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
    Direct3DObject::sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // ‰½‚©‚ğ•`‰æ
    t_test.render();

    // SpriteBatch•`‰æ•¨‚ğGPU‚É“]‘—
    Direct3DObject::sprite_batch->End();
}
