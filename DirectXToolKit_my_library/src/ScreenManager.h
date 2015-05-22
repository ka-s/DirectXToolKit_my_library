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
    // ������
    void Init();
    // �I��
    void Fin();
    // �X�V
    void Update();
    // �`��
    void Render();
};
