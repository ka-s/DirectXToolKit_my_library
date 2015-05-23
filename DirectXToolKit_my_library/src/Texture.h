//
// Texture.h
//

// @author ka-s

#pragma once

#include "pch.h"

namespace kas
{
    class Texture
    {
    private:
        // �e�N�X�`���f�[�^
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> texture_data;

        // �摜�̒��S�x�N�g��
        DirectX::SimpleMath::Vector2 v_center;

        // ���S�`�攻�胁�\�b�h
        DirectX::SimpleMath::Vector2 IsCenter(bool b);

    public:
        // �f�t�H���g�R���X�g���N�^
        Texture();
        // �R���X�g���N�^
        //   @pass  �t�@�C���p�X
        Texture(wchar_t *pass);

        // �e�N�X�`���擾
        //   @return �e�N�X�`���f�[�^
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> Get();
        // �e�N�X�`�������_�����O
        void render();
        void render(DirectX::SimpleMath::Vector2 pos, 
                    bool isCenter);
        void render(DirectX::SimpleMath::Vector2 pos, 
                    bool isCenter, 
                    DirectX::SimpleMath::Vector2 scale,
                    float rotate);

    };
}
