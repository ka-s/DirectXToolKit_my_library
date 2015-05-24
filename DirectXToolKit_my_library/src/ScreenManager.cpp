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
    t_cat = Texture(L"Data/Graph/cat2.png");

    // ��{�W�I���g��
    m_shape = GeometricPrimitive::CreateSphere(Direct3DObject::m_d3dContext.Get());
    m_world = Matrix::Identity;
    m_view = Matrix::CreateLookAt(Vector3(2.f, 2.f, 2.f), Vector3::Zero, Vector3::UnitY);
    m_proj = Matrix::CreatePerspectiveFieldOfView(XM_PI / 4.f,
                                                  800.f / 600.f, 0.1f, 10.f);
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
    t_cat.render(Vector2(0.f, 0.f), false, Vector2(0.5f, 0.5f), 0.f);
    t_test.render(Vector2(100.f, 100.f), true, Vector2::One, rotate);

    // ��{�W�I���g��
    m_shape->Draw(m_world, m_view, m_proj);
}
