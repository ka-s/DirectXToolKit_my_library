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

// ������
void ScreenManager::Init()
{
    // SpriteBatch������
    Direct3DObject::sprite_batch.reset(new SpriteBatch(Direct3DObject::m_d3dContext.Get()));
    // Alpha�u�����h�p�X�e�[�^�X������
    alpha_states.reset(new CommonStates(Direct3DObject::m_d3dDevice.Get()));

    // Test�pTexture�ǂݍ���
    t_test = Texture(L"Data/Graph/cat.png");
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
    Direct3DObject::sprite_batch->Begin(SpriteSortMode_Deferred, alpha_states->NonPremultiplied());

    // ������`��
    t_test.render();

    // SpriteBatch�`�敨��GPU�ɓ]��
    Direct3DObject::sprite_batch->End();
}
