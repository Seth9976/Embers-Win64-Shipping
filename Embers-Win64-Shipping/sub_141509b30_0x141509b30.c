// 函数: sub_141509b30
// 地址: 0x141509b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u< zx.d(*(arg1 + 0x11)))
    void* rcx = *(*(arg1 + 0x88) + zx.q(*(arg1 + (zx.q(arg3) << 1) + 0x98)) * 0x10)
    
    if (rcx != 0)
        uint64_t rax_3 = zx.q(*(rcx + 0x1b8) * *(rcx + 0x10))
        
        if (rax_3.d != 0)
            uint64_t rcx_1 = zx.q(*(arg1 + 0xc))
            uint64_t rdx = zx.q(*(arg1 + 8))
            char r8_2 = *(arg1 + 0x54)
            float zmm1 = 1f / float.s(rax_3)
            arg2[1] = float.s(rdx) * zmm1
            arg2[2] = float.s(rcx_1) * zmm1
            arg2[3] = float.s(zx.q((rdx + (rcx_1 << 1)).d)) * zmm1
            int32_t result
            result.b = r8_2 == 0
            *arg2 = result
            return result

*(arg2 + 4) = 0
arg2[3] = 0
*arg2 = 0
return 0
