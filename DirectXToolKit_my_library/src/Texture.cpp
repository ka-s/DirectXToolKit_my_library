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

// デフォルトコンストラクタ
Texture::Texture()
{

}

// コンストラクタ
//   @pass  ファイルパス
Texture::Texture(wchar_t *pass)
{
    // テクスチャロード
    CreateWICTextureFromFile(Direct3DObject::m_d3dDevice.Get(),
                             pass, nullptr,
                             texture_data.ReleaseAndGetAddressOf());
}

// テクスチャ取得
//   @return テクスチャデータ
Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> Texture::Get()
{
    return texture_data;
}
