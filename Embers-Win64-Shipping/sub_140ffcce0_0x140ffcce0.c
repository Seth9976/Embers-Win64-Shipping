// 函数: sub_140ffcce0
// 地址: 0x140ffcce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg1 + 0x28))(arg1, arg3, arg4, arg5)

if (result s>= 0)
    return result

int32_t rcx
int32_t rdx_1
int64_t r8_1

if (arg4 == 0)
    rcx = 0
    rdx_1 = 0
    r8_1 = 0
else
    rcx = *(arg4 + 0xc)
    rdx_1 = arg4[1].d
    r8_1 = *arg4

return sub_140ffeb30(result, arg2, 
    "Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Texture.cpp", 0x1e0, 
    *arg3, arg3[1], arg3[3], arg3[4].b, arg3[2], (arg3[8]).b, arg3[7], arg3[9], arg3[0xa], arg3[5], 
    arg3[6], r8_1, rdx_1, rcx, arg1)
