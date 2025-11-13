// 函数: sub_141012e10
// 地址: 0x141012e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int512_t zmm0 = sub_141044ca0(arg4, arg5)
int32_t rsi = 0x10

if (arg2 != 0)
    rsi = arg2

if (*(rbp + 0x550) u> 0x80)
    sub_141059b40(rbp + 0x500, 1, 0)
    zmm0 = sub_1410161a0(&arg1[2])

char rax_1

if (rsi u<= arg1[4].d)
    rax_1 = sub_141037c90(&arg1[2], rsi, arg3, arg4, zmm0)

if (rsi u> arg1[4].d || rax_1 == 0)
    uint64_t r9_1 = zx.q(*(arg1 + 0xc))
    int32_t r8_1 = arg1[1].d
    int32_t var_30_1 = 0
    void* const arg_8 = nullptr
    int32_t rax_3 = sub_141048240(rbp, 2, r8_1, r9_1, zx.q(rsi), &arg_8, 0x42efe7f8)
    
    if (rax_3 s< 0)
        int64_t var_28 = 0
        int64_t* var_40_2 = &var_28
        int64_t var_20_1 = 0
        sub_14106a020(rax_3, 
            "Adapter->CreateBuffer(D3D12_HEAP_TYPE_UPLOAD, GetGPUMask(), GetVisibilityMask(), Size, "
        "&NewResource, TEXT("Stand Alone Upload Buffer"))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 
            0x39e, nullptr)
    
    sub_141014320(arg4, arg_8, rsi, 0)

return *(arg4 + 0x40)
