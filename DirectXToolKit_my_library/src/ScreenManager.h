//
// ScreenManager.h
//

// @author ka-s

#pragma once

#include "pch.h"

class ScreenManager
{
private:
    // SpriteBatch
    std::unique_ptr<DirectX::SpriteBatch> sprite_batch;

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
