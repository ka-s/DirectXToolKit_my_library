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

    };
}
