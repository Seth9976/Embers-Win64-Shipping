// 函数: sub_14135bd40
// 地址: 0x14135bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg2 & 0x3ff
int32_t i = i_1
int32_t zmm2 = (zx.o(0)).d
int32_t zmm3 = (zx.o(0)).d
float zmm1 = 0.5f
uint128_t zmm0

if (i_1 u> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        i = (temp1_1 - temp0_1) s>> 1
        zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* zmm1
        zmm1 = zmm1 * 0.5f
        zmm3 = zmm3 f+ zmm0.d
    while (i s> 0)

*arg1 = zmm3
zmm1 = 0.333333343f

if (i_1 != 0)
    uint64_t rdx_2
    
    do
        rdx_2 = zx.q(i_1 s/ 3)
        i = (rdx_2 * 3).d
        zmm0 = zx.o(i_1 - i)
        i_1 = rdx_2.d
        zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm1
        zmm1 = zmm1 * 0.333333343f
        zmm2 = zmm2 f+ zmm0.d
    while (rdx_2.d s> 0)

arg1[1] = zmm2
return i
