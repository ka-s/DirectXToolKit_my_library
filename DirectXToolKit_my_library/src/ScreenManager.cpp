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

namespace
{
    float rotate = 0.f;
}

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
    rotate += 0.1f;
}

// �`��
void ScreenManager::Render()
{
    // ������`��
    t_test.render(Vector2(0.f, 0.f), true, Vector2::One, rotate);
}
