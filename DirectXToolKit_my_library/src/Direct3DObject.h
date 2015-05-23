//
// Direct3DObject.h
//

// @author ka-s

#pragma once

#include "pch.h"

class Direct3DObject
{
private:

public:
    // Direct3D Objects
    static Microsoft::WRL::ComPtr<ID3D11Device>            m_d3dDevice;
    static Microsoft::WRL::ComPtr<ID3D11Device1>           m_d3dDevice1;
    static Microsoft::WRL::ComPtr<ID3D11DeviceContext>     m_d3dContext;
    static Microsoft::WRL::ComPtr<ID3D11DeviceContext1>    m_d3dContext1;

    // SpriteBatch
    static std::unique_ptr<DirectX::SpriteBatch> sprite_batch;

};
