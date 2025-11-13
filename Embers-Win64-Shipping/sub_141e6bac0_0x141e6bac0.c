// 函数: sub_141e6bac0
// 地址: 0x141e6bac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_1 = *(arg1 + 8)
uint64_t rax = zx.q(*(rdx_1 + 0xb8))
float zmm1

if (rax.b == 3)
    zmm1 = 20f
else if (rax.b == 6)
    zmm1 = 20000f
else
    zmm1 = 1f
    uint32_t zmm0[0x4]
    
    if ((*(rdx_1 + 0x352) & 0x20) != 0 && data_143f39930 == 1)
        zmm0 = *(*(arg1 + 0x10) + 0x134)
        zmm0[0] = zmm0[0] f- 20000f
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 9.99999994e-09f))
            zmm1 = 0.25f
    
    rax = *(arg1 + 0x10)
    float temp0_2 = __minss_xmmss_memss(zmm1 f* *(rax + 0x134), *(rax + 0x12c))
    *(arg1 + 0x24) = temp0_2
    zmm0 = _mm_min_ss((*(rax + 0x138))[0], temp0_2)
    *(arg1 + 0x24) = zmm0[0]
    float temp0_4 = _mm_min_ss(*(rax + 0x13c), zmm0[0])
    *(arg1 + 0x24) = temp0_4
    zmm0 = _mm_min_ss((*(rax + 0x18))[0], temp0_4)
    *(arg1 + 0x24) = zmm0[0]
    zmm1 = _mm_min_ss(*(rax + 0x130), zmm0[0])

*(arg1 + 0x24) = zmm1
char rdx = *(rdx_1 + 0xb8)

if (rdx == 4)
    *(arg1 + 0x28) = 0x469c4000
    return rax

if (rdx == 7)
    *(arg1 + 0x28) = 0x41a00000
    return rax

void* rax_2 = *(arg1 + 0x10)
*(arg1 + 0x28) = __maxss_xmmss_memss((*(rax_2 + 0x140))[0], *(rax_2 + 0x1c))[0]
return rax_2
