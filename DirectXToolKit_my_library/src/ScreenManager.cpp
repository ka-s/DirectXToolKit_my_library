//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

// ������
void ScreenManager::Init()
{
    // SpriteBatch������
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
}

// �I��
void ScreenManager::Fin()
{

}

// �X�V
void ScreenManager::Update()
{

}

// �`��
void ScreenManager::Render()
{
    // SpriteBatch�`��J�n
    sprite_batch->Begin();

    // ������`��
    sprite_batch->Draw(nullptr, Vector2(0.f, 0.f));

    // SpriteBatch�`�敨��GPU�ɓ]��
    sprite_batch->End();
}
