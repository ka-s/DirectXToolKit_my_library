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
    // ������`��
    t_test.render();
}
