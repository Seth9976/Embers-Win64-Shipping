// 函数: sub_1423d3b50
// 地址: 0x1423d3b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg4
int64_t rbx = *arg1
uint128_t zmm8 = zx.o(arg4[2] - *arg4)
int32_t rax_3 = arg4[3] - arg4[1]
*arg2 = zmm0
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rax_3))
zmm8 = _mm_cvtepi32_ps(zmm8)
void arg_8
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(*(*(rbx + 0x18))(arg1, &arg_8)))
(*(rbx + 0x168))(arg1)
uint128_t zmm6 = zmm0
zmm0.d = zmm8.d f/ zmm9.d
void arg_10
zmm7.d = zmm7.d f/ _mm_cvtepi32_ps(zx.o(*((*(*arg1 + 0x18))(arg1, &arg_10) + 4))).d
zmm6.d = zmm6.d f/ zmm7.d
uint128_t zmm10
zmm10.d = arg3.d f/ zmm6.d
uint128_t zmm1
zmm1.d = zmm10.d f- zmm0.d

if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 0.00999999978f))
    if (zmm1.d f<= 0f)
        int32_t rcx_3 = *arg4
        zmm10.d = zmm10.d f* zmm9.d
        zmm10.d = zmm10.d f+ zmm10.d
        zmm10.d = zmm10.d f+ 0.5f
        int32_t r8_4 = int.d(zmm10.d) s>> 1
        
        if (r8_4 s<= 1)
            r8_4 = 1
        
        zmm8.d = zmm8.d f- _mm_cvtepi32_ps(zx.o(r8_4)).d
        zmm8.d = zmm8.d f* 0.5f
        zmm8.d = zmm8.d f+ zmm8.d
        zmm8.d = zmm8.d f+ 0.5f
        int32_t rdx_5 = int.d(zmm8.d) s>> 1
        *arg2 = rdx_5 + rcx_3
        *(arg2 + 8) = rdx_5 + rcx_3 + r8_4
    else
        int32_t rcx_2 = arg4[1]
        zmm8.d = zmm8.d f/ zmm10.d
        zmm8.d = zmm8.d f+ zmm8.d
        zmm8.d = zmm8.d f+ 0.5f
        int32_t r8_2 = int.d(zmm8.d) s>> 1
        
        if (r8_2 s<= 1)
            r8_2 = 1
        
        zmm9.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(r8_2)).d
        zmm9.d = zmm9.d f* 0.5f
        zmm9.d = zmm9.d f+ zmm9.d
        zmm9.d = zmm9.d f+ 0.5f
        int32_t rdx_3 = int.d(zmm9.d) s>> 1
        *(arg2 + 4) = rdx_3 + rcx_2
        *(arg2 + 0xc) = rdx_3 + rcx_2 + r8_2

return arg2
