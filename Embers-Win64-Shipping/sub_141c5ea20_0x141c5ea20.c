// 函数: sub_141c5ea20
// 地址: 0x141c5ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x160) != 2)
    return *(arg1 + 0xc4)

int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    int32_t r9_1 = *(arg1 + 0x64)
    
    if (r9_1 s> 0)
        float result[0x4] = zx.o(0)
        int64_t rdx = sx.q(*(rcx + 0x8c)) * 0x3f0
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r9_1))
        void* rax_2 = *(arg1 + 0x10)
        result[0] = float.s(*(rdx + *(*rcx + 0xc8) + 0x98))
        result[0] = result[0] f/ zmm0.d
        *(arg1 + 0xc4) = result[0]
        
        if (*(rax_2 + 0xf8) == 0)
            result = __minss_xmmss_memss(result[0], 0x3f800000)
            *(arg1 + 0xc4) = result[0]
        
        return result

return 0x3f800000
