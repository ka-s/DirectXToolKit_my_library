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
    // Texture�f�[�^
    kas::Texture t_test;
    kas::Texture t_cat;

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
