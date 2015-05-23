//
// Direct3DObject.cpp
//

// @author ka-s

#include "pch.h"
#include "Direct3DObject.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;

// Direct3D Objects
Microsoft::WRL::ComPtr<ID3D11Device>            Direct3DObject::m_d3dDevice;
Microsoft::WRL::ComPtr<ID3D11Device1>           Direct3DObject::m_d3dDevice1;
Microsoft::WRL::ComPtr<ID3D11DeviceContext>     Direct3DObject::m_d3dContext;
Microsoft::WRL::ComPtr<ID3D11DeviceContext1>    Direct3DObject::m_d3dContext1;

// SpriteBatch
std::unique_ptr<SpriteBatch>  Direct3DObject::sprite_batch;
