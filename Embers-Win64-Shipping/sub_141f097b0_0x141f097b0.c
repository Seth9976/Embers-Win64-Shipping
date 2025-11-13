// 函数: sub_141f097b0
// 地址: 0x141f097b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x410))
float zmm3[0x4] = 0x3f800000

if (r9.d s> 0)
    int64_t rcx = 0
    void* rax_2 = *(arg1 + 0x408) + 0x14
    
    do
        if ((*(rax_2 - 4) & 1) != 0)
            zmm3 = 0x49800000
            break
        
        rcx += 1
        zmm3 = __maxss_xmmss_memss(_mm_max_ss((*rax_2)[0], zmm3[0])[0], *(rax_2 + 4))
        rax_2 += 0x28
    while (rcx s< r9)

uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(*(arg3 + 0x20), data_143f3ade0)
float temp0_7[0x4] = _mm_max_ps(_mm_max_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)), 
    _mm_shuffle_ps(temp0_3, temp0_3, 0xd2))
uint32_t zmm2[0x4] = *(arg3 + 0x10)
zmm3[0] = zmm3[0] * temp0_7[0]
float var_20 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
float var_14 = zmm3[0]
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
zmm3[0] = zmm3[0] * zmm3[0]
arg2[1].d = var_20
*(arg2 + 0x14) = var_14
zmm3[0] = zmm3[0] * 3f
arg2[3].d = _mm_sqrt_ss(0, zmm3[0])[0]
return arg2
