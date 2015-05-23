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
    // Alphaブレンド用ステータス
    std::unique_ptr<DirectX::CommonStates> alpha_states;

    // Textureデータ
    kas::Texture t_test;

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
