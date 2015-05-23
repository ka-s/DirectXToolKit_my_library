//
// Texture.cpp
//

// @author ka-s

#include "pch.h"
#include "Texture.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;
using namespace kas;

using Microsoft::WRL::ComPtr;

// �f�t�H���g�R���X�g���N�^
Texture::Texture()
{

}

// �R���X�g���N�^
//   @pass  �t�@�C���p�X
Texture::Texture(wchar_t *pass)
{
    // �e�N�X�`�����[�h
    CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(),
                             pass, nullptr,
                             texture_data.ReleaseAndGetAddressOf());
}

// �e�N�X�`���擾
//   @return �e�N�X�`���f�[�^
Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> Texture::Get()
{
    return texture_data;
}
