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
    // Textureデータ
    kas::Texture t_test;
    kas::Texture t_cat;
    kas::Texture t_earth;

    // 基本ジオメトリ
    std::unique_ptr<DirectX::GeometricPrimitive> m_shape;
    DirectX::SimpleMath::Matrix m_world;
    DirectX::SimpleMath::Matrix m_view;
    DirectX::SimpleMath::Matrix m_proj;

    // ライティング
    // 光源
    std::unique_ptr<DirectX::BasicEffect> lights_effect;
    Microsoft::WRL::ComPtr<ID3D11InputLayout> m_inputLayout;

public:
    // 初期化
    void Init();
    // 終了
    void Fin();
    // 更新
    void Update();
    // 描画
    void Render();
};
