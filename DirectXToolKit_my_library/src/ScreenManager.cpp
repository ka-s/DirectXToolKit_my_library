//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

using Microsoft::WRL::ComPtr;

// ������
void ScreenManager::Init()
{
    // SpriteBatch������
    sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // Alpha�u�����h�p�X�e�[�^�X������
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test�pTexture�ǂݍ���
    //CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(), 
    //                         L"Data/Graph/cat.png", nullptr,
    //                         t_test.ReleaseAndGetAddressOf());
    t_test = kas::Texture(L"Data/Graph/cat.png");
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
    sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // ������`��
    sprite_batch->Draw(t_test.Get().Get(), Vector2(0.f, 0.f));

    // SpriteBatch�`�敨��GPU�ɓ]��
    sprite_batch->End();
}
