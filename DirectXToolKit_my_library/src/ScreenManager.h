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
    // SpriteBatch
    std::unique_ptr<DirectX::SpriteBatch> sprite_batch;
    // Alpha�u�����h�p�X�e�[�^�X
    std::unique_ptr<DirectX::CommonStates> alpha_states;

    // Texture�f�[�^
    //Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> t_test;
    kas::Texture t_test;

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
