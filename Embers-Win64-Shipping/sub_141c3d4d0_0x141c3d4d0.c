// 函数: sub_141c3d4d0
// 地址: 0x141c3d4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg5
uint32_t (* r9)[0x4] = arg2
uint32_t arg_20 = arg4[0]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
arg4[0] = arg4[0] f- zmm1[0]
int32_t result = (temp1 + (temp0 & 3)) s>> 2

if (__andps_xmmxud_memxud(arg4, data_142d3f770)[0] f> 9.99999994e-09f)
    zmm1[0] = zmm1[0] f- arg4[0]
    uint32_t zmm0[0x4] = _mm_cvtepi32_ps(zx.o(result))
    zmm1[0] = zmm1[0] f/ zmm0[0]
    arg5 = zmm1[0]
    zmm1 = arg_20
    float zmm2[0x4] = arg5
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    
    if (arg3 s> 0)
        void* rcx_1 = arg1 - r9
        uint64_t i_3 = zx.q(((arg3 - 1) u>> 2) + 1)
        uint64_t i
        
        do
            zmm0 = _mm_mul_ps(*(r9 + rcx_1), zmm1)
            zmm1 = _mm_add_ps(zmm1, zmm2)
            *r9 = __addps_xmmps_memps(zmm0, *r9)
            r9 = &r9[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (not(arg4[0] f== 0f))
    zmm1 = arg_20
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    
    if (arg3 s> 0)
        uint32_t (* rcx)[0x4] = arg1 - r9
        uint64_t i_2 = zx.q(((arg3 - 1) u>> 2) + 1)
        uint64_t i_1
        
        do
            *r9 = __addps_xmmps_memps(_mm_mul_ps(*(rcx + r9), zmm1), *r9)
            r9 = &r9[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
