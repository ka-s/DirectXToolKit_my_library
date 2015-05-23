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
        // テクスチャデータ
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> texture_data;

    public:
        // デフォルトコンストラクタ
        Texture();
        // コンストラクタ
        //   @pass  ファイルパス
        Texture(wchar_t *pass);

        // テクスチャ取得
        //   @return テクスチャデータ
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> Get();
        // テクスチャレンダリング
        void render();

    };
}
