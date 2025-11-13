// 函数: sub_1407e8830
// 地址: 0x1407e8830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
int32_t rdx = arg3 * 2
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg3 - 1))

if (rdx s> 0)
    sub_1405dadb0(arg2, rdx)

if (arg3 s> 0)
    int128_t zmm8
    zmm8.d = 1f f/ zmm6.d
    
    do
        zmm6.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* zmm8.d
        zmm6.d = zmm6.d f/ *(arg1 + 0x48)
        zmm6.d = zmm6.d f+ *(arg1 + 0x40)
        int128_t zmm0_1
        uint128_t zmm6_1
        int512_t zmm7_1
        zmm0_1, zmm6_1, zmm7_1 = sub_141f86ef0(arg1 + 0xd8, zmm6, zx.o(0))
        zmm7_1.o = zmm0_1
        uint128_t zmm0_2
        int32_t zmm7_2
        zmm0_2, zmm7_2, zmm8 = sub_141f86ef0(arg1 + 0x58, zmm6_1, zx.o(0))
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        *(*arg2 + (rsi_1 << 2)) = zmm0_2.d
        int64_t rsi_2 = sx.q(arg2[1].d)
        int32_t rax_3 = (rsi_2 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        rdi += 1
        *(*arg2 + (rsi_2 << 2)) = zmm7_2
    while (rdi s< arg3)

return arg2
