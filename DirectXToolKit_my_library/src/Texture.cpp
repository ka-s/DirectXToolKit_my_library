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
    texture_data = nullptr;
}

// �R���X�g���N�^
//   @pass  �t�@�C���p�X
Texture::Texture(wchar_t *pass)
{
    // ���\�[�X�쐬
    ComPtr<ID3D11Resource> resource;
    // �e�N�X�`�����[�h
    CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(),
                             pass, 
                             resource.GetAddressOf(),
                             texture_data.ReleaseAndGetAddressOf());

    // �摜���S�_�擾
    ComPtr<ID3D11Texture2D> texture;
    DX::ThrowIfFailed(resource.As(&texture));
    CD3D11_TEXTURE2D_DESC textureDesc;
    texture->GetDesc(&textureDesc);

    // ���S�_���i�[
    v_center.x = float(textureDesc.Width / 2);
    v_center.y = float(textureDesc.Height / 2);
}

// �e�N�X�`���擾
//   @return �e�N�X�`���f�[�^
Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> Texture::Get()
{
    return texture_data;
}

// �e�N�X�`�������_�����O
void Texture::render()
{
    Direct3DObject::sprite_batch->Draw(texture_data.Get(), Vector2::Zero);
}

void Texture::render(DirectX::SimpleMath::Vector2 pos, bool isCenter)
{
    Direct3DObject::sprite_batch->Draw(
        texture_data.Get(), 
        pos, 
        nullptr, 
        Colors::White, 
        0.f, 
        IsCenter(isCenter));
}

void Texture::render(DirectX::SimpleMath::Vector2 pos,
                     bool isCenter, 
                     DirectX::SimpleMath::Vector2 scale,
                     float rotate)
{
    Direct3DObject::sprite_batch->Draw(
        texture_data.Get(), 
        pos, 
        nullptr, 
        Colors::White, 
        rotate, 
        IsCenter(isCenter),
        scale);
}

// ���S�`�攻�胁�\�b�h
Vector2 Texture::IsCenter(bool b)
{
    Vector2 origin = Vector2::Zero;
    b ? origin = v_center : Vector2::Zero;
    return origin;
}
