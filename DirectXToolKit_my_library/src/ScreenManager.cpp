//
// ScreenManager.cpp
//

// @author ka-s

#include "pch.h"
#include "ScreenManager.h"

using namespace DirectX;
using namespace DirectX::SimpleMath;
using namespace kas;

using Microsoft::WRL::ComPtr;

// 初期化
void ScreenManager::Init()
{
    // Test用Texture読み込み
    t_test = Texture(L"Data/Graph/cat.png");
}

// 終了
void ScreenManager::Fin()
{

}

// 更新
void ScreenManager::Update()
{

}

// 描画
void ScreenManager::Render()
{
    // 何かを描画
    t_test.render();
}
