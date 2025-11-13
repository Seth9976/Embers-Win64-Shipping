// 函数: sub_141c43630
// 地址: 0x141c43630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg1 + 0x24)
uint32_t zmm4 = arg2[0]
uint32_t zmm0[0x4] = *(arg1 + 0x2c)
zmm0[0] = zmm0[0] f- zmm2

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f< *(arg1 + 0x28)))
    zmm2 = zmm2 f* *(arg1 + 0x34) f+ *(arg1 + 0x38)
    *(arg1 + 0x24) = zmm2
    int32_t r8_1 = *(arg1 + 0x10)
    zmm2 = zmm2 f* *(arg1 + 0x1c) * 0.00100000005f
    *(arg1 + 0x20) = zmm2
    
    if (zmm2 >= 0f)
        zmm0 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(r8_1 - 1))[0], zmm2)
    else
        zmm0 = zx.o(0)
    
    *(arg1 + 0x20) = zmm0[0]
    zmm0[0] = zmm0[0] f+ 1f
    int32_t rcx = *(arg1 + 0x18)
    int32_t rax_2 = int.d(zmm0[0])
    int32_t rcx_1 = rcx - rax_2
    *(arg1 + 0x14) = rcx_1
    
    if (rcx - rax_2 s< 0)
        *(arg1 + 0x14) = rcx_1 + r8_1

zmm2 = *(arg1 + 0x20)
int64_t r8_2 = *(arg1 + 8)

if (not(zmm2 == 0f))
    int64_t rcx_2 = sx.q(*(arg1 + 0x14))
    int32_t zmm3 = *(r8_2 + (rcx_2 << 2))
    int32_t rcx_3 = rcx_2.d - 1
    
    if (rcx_2.d - 1 s< 0)
        rcx_3 = *(arg1 + 0x10) - 1
    
    arg2 = *(r8_2 + (sx.q(rcx_3) << 2))
    arg2[0] = arg2[0] f- zmm3
    zmm2 = zmm2 f- _mm_cvtepi32_ps(zx.o(int.d(zmm2)))[0]
    arg2[0] = arg2[0] f* zmm2
    arg2[0] = arg2[0] f+ zmm3

*(r8_2 + (sx.q(*(arg1 + 0x18)) << 2)) = zmm4
*(arg1 + 0x18) += 1
int32_t rax_7 = *(arg1 + 0x18)
bool cond:2 = rax_7 s>= *(arg1 + 0x10)
arg2[0] = arg2[0] f* *(arg1 + 0x3c)

if (cond:2)
    rax_7 = 0

*(arg1 + 0x14) += 1
*(arg1 + 0x18) = rax_7
int32_t result = *(arg1 + 0x14)

if (result s>= *(arg1 + 0x10))
    result = 0

*(arg1 + 0x14) = result
return result
