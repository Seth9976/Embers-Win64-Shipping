// 函数: sub_14105a560
// 地址: 0x14105a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
uint32_t r10_3 = ((arg7 & 0x40000) | 0x20000) u>> 0x11

if (r10_3 == 1)
    int512_t zmm0
    zmm0.o = *arg3
    uint128_t zmm1 = arg3[1]
    int64_t var_78_2 = arg9
    int128_t var_48 = zmm0.o
    zmm0.o = arg3[2]
    uint128_t var_38_1 = zmm1
    int128_t var_28_1 = zmm0.o
    uint64_t var_18_1 = arg3[3].q
    result = sub_141014050(arg1 + 0x838, &var_48, arg4, arg6, zmm0, arg5, arg8)
    
    if (result s< 0)
        int32_t var_80_1
        var_80_1.q = sub_141022ce0(arg1)
        return sub_141069b00(result, 
            "pDevice->GetTextureAllocator().AllocateTexture(TextureDesc, ClearValue, Format, "
        "*OutTexture2D, InitialState, Name)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Texture.cpp", 0x298, 
            arg3)
else if (r10_3 == 3)
    void** var_58 = nullptr
    int64_t* rax = sub_141022ce0(arg1)
    int32_t var_80
    var_80.q = 0
    (*(*rax + 0x130))(rax, arg3, 0, zx.q(zx.d(*(arg3 + 0x1e)) * zx.d(*(arg3 + 0x1c))), 0, 0, 0, 0, 
        &var_58)
    uint64_t r9_2 = zx.q(*(arg1 + 0x14))
    int32_t r8 = *(arg1 + 0x10)
    void* var_50
    var_80.q = &var_50
    void** rax_2 = var_58
    var_50 = nullptr
    int32_t rax_3 = sub_141048240(arg2, 3, r8, r9_2, rax_2, var_80, arg9.d)
    
    if (rax_3 s< 0)
        var_80.q = sub_141022ce0(arg1)
        sub_141069b00(rax_3, 
            "Adapter->CreateBuffer(HeapType, pDevice->GetGPUMask(), pDevice->GetVisibilityMask(), Size, "
        "&Resource, Name)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Texture.cpp", 0x28d, 
            arg3)
    
    return sub_141014320(arg5, var_50, 0, 0)

return result
