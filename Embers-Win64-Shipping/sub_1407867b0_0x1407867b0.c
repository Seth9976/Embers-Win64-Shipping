// 函数: sub_1407867b0
// 地址: 0x1407867b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg3 - 1))

if (arg3 s> 0)
    sub_1405dadb0(arg2, arg3)

if (arg3 s> 0)
    int128_t zmm7
    zmm7.d = 1f f/ zmm6.d
    
    do
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* zmm7.d
        zmm1.d = zmm1.d f/ *(arg1 + 0x48)
        zmm1.d = zmm1.d f+ *(arg1 + 0x40)
        int32_t zmm0_1
        zmm0_1, zmm7 = sub_141f86ef0(arg1 + 0x58, zmm1, zx.o(0))
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        rdi += 1
        *(*arg2 + (rsi_1 << 2)) = zmm0_1
    while (rdi s< arg3)

return arg2
