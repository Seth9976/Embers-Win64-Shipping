// 函数: sub_1407e8970
// 地址: 0x1407e8970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg2 = 0
arg2[1] = 0
int32_t rdx = (arg3 << 2).d
int32_t rbp = arg3.d
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o((arg3 - 1).d))

if (rdx s> 0)
    sub_1405dadb0(arg2, rdx)

if (rbp s> 0)
    void* rdi_1 = arg1 + 0x58
    int128_t zmm10
    zmm10.d = 1f f/ zmm6.d
    
    do
        zmm6.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* zmm10.d
        zmm6.d = zmm6.d f/ *(arg1 + 0x48)
        zmm6.d = zmm6.d f+ *(arg1 + 0x40)
        int128_t zmm0_1
        uint128_t zmm6_1
        int512_t zmm9_1
        zmm0_1, zmm6_1, zmm9_1 = sub_141f86ef0(arg1 + 0x1d8, zmm6, zx.o(0))
        zmm9_1.o = zmm0_1
        int128_t zmm0_2
        uint128_t zmm6_2
        int512_t zmm8_1
        zmm0_2, zmm6_2, zmm8_1 = sub_141f86ef0(arg1 + 0x158, zmm6_1, zx.o(0))
        zmm8_1.o = zmm0_2
        int128_t zmm0_3
        uint128_t zmm6_3
        int512_t zmm7_1
        zmm0_3, zmm6_3, zmm7_1 = sub_141f86ef0(arg1 + 0xd8, zmm6_2, zx.o(0))
        zmm7_1.o = zmm0_3
        uint128_t zmm0_4
        int32_t zmm7_2
        int32_t zmm8_2
        int32_t zmm9_2
        zmm0_4, zmm7_2, zmm8_2, zmm9_2 = sub_141f86ef0(rdi_1, zmm6_3, zx.o(0))
        int64_t rdi_2 = sx.q(arg2[1].d)
        int32_t rax_1 = (rdi_2 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        *(*arg2 + (rdi_2 << 2)) = zmm0_4.d
        int64_t rdi_3 = sx.q(arg2[1].d)
        int32_t rax_3 = (rdi_3 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        *(*arg2 + (rdi_3 << 2)) = zmm7_2
        int64_t rdi_4 = sx.q(arg2[1].d)
        int32_t rax_5 = (rdi_4 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        *(*arg2 + (rdi_4 << 2)) = zmm8_2
        int64_t rdi_5 = sx.q(arg2[1].d)
        int32_t rax_7 = (rdi_5 + 1).d
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_1406105e0(arg2)
        
        rsi += 1
        *(*arg2 + (rdi_5 << 2)) = zmm9_2
        rdi_1 = arg1 + 0x58
    while (rsi s< rbp)

return arg2
