//
// ScreenManager.h
//

// @author ka-s

#pragma once

#include "pch.h"
#include "Texture.h"

class ScreenManager
{
private:
    // Texture�f�[�^
    kas::Texture t_test;
    kas::Texture t_cat;
    kas::Texture t_earth;

    // ��{�W�I���g��
    std::unique_ptr<DirectX::GeometricPrimitive> m_shape;
    DirectX::SimpleMath::Matrix m_world;
    DirectX::SimpleMath::Matrix m_view;
    DirectX::SimpleMath::Matrix m_proj;

    // ���C�e�B���O
    // ����
    std::unique_ptr<DirectX::BasicEffect> lights_effect;
    Microsoft::WRL::ComPtr<ID3D11InputLayout> m_inputLayout;

public:
    // ������
    void Init();
    // �I��
    void Fin();
    // �X�V
    void Update();
    // �`��
    void Render();
};
