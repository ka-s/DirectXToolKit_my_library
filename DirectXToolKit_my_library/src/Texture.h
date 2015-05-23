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

        // 画像の中心ベクトル
        DirectX::SimpleMath::Vector2 v_center;

        // 中心描画判定メソッド
        DirectX::SimpleMath::Vector2 IsCenter(bool b);

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
        void render(DirectX::SimpleMath::Vector2 pos, 
                    bool isCenter);
        void render(DirectX::SimpleMath::Vector2 pos, 
                    bool isCenter, 
                    DirectX::SimpleMath::Vector2 scale,
                    float rotate);

    };
}
