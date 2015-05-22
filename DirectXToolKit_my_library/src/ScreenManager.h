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
    // ‰Šú‰»
    void Init();
    // I—¹
    void Fin();
    // XV
    void Update();
    // •`‰æ
    void Render();
};
