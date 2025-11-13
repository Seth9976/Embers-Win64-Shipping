// 函数: sub_141c37840
// 地址: 0x141c37840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
int64_t r8 = sx.q(arg2)
uint32_t zmm0[0x4] = arg3
zmm0[0] = zmm0[0] f- arg4
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8.d)
int32_t result = (temp1 + (temp0 & 3)) s>> 2
float zmm1[0x4]

if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f)
    zmm1 = arg_18
    arg4 = arg4 - arg3[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    arg3 = arg4 f/ _mm_cvtepi32_ps(zx.o(result))[0]
    arg3 = _mm_shuffle_ps(arg3, arg3, 0)
    
    if (r8.d s> 0)
        uint64_t i_3 = zx.q(((r8 - 1).d u>> 2) + 1)
        uint64_t i
        
        do
            zmm0 = _mm_mul_ps(*arg1, zmm1)
            zmm1 = _mm_add_ps(zmm1, arg3)
            *arg1 = zmm0
            arg1 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    if (not(arg3[0] != 0f))
        return memset(arg1, 0, r8 << 2)
    
    zmm1 = arg_18
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    
    if (r8.d s> 0)
        uint64_t i_2 = zx.q(((r8 - 1).d u>> 2) + 1)
        uint64_t i_1
        
        do
            zmm0 = *arg1
            arg1 += 0x10
            *(arg1 - 0x10) = _mm_mul_ps(zmm0, zmm1)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
return result
