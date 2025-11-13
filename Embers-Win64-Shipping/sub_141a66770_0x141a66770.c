// 函数: sub_141a66770
// 地址: 0x141a66770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9488)
int32_t result = sub_140b4e7c0(arg2, &data_1439a9488)

if (result s< 7)
    int64_t arg_20
    sub_141a514d0(&arg_20)
    int64_t rbx_1 = arg_20
    char var_18
    int32_t arg_10
    int32_t arg_18
    
    if ((*(arg1 + 0xc4) & 1) == 0 || *(arg1 + 0xc8) == 0)
        sub_141a6d2f0(&arg_10, arg1, rbx_1, _mm_cvtps_pd((*(arg1 + 0xb4)).q))
        sub_141a6d2f0(&arg_18, arg1, rbx_1, _mm_cvtps_pd((*(arg1 + 0xb8)).q))
        int32_t var_14_1 = arg_10
        var_18 = 1
        int32_t var_c_1 = arg_18 + 1
        char var_10_1 = 0
    else
        arg_10.b = 2
        int32_t arg_1c = 0
        int32_t arg_14 = 0
        var_18.q = arg_10.q
        arg_18.b = 2
        char var_10
        var_10.q = arg_18.q
    uint128_t zmm3_1 = zx.o(arg_20:4.d)
    *(arg1 + 0x90) = var_18.o
    double zmm0_1[0x2] = _mm_cvtps_pd((*(arg1 + 0xbc))[0])
    int64_t temp0_4 = _mm_cvtepi32_pd(zx.q(rbx_1.d))
    zmm3_1 = _mm_cvtepi32_pd(zmm3_1.q)
    zmm0_1[0] = zmm0_1[0] f* temp0_4
    zmm0_1[0] = zmm0_1[0] f/ zmm3_1.q
    int64_t rcx_5 = int.q(zmm0_1[0])
    
    if (rcx_5 != -0x8000000000000000 && not(float.d(rcx_5) f== zmm0_1[0]))
        uint32_t temp0_7 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_5 - (zx.q(temp0_7) & 1))
    
    int32_t rax_8 = int.d(zmm0_1[0])
    zmm0_1 = _mm_cvtps_pd((*(arg1 + 0xc0))[0])
    *(arg1 + 0xa0) = rax_8
    zmm0_1[0] = zmm0_1[0] f* temp0_4
    zmm0_1[0] = zmm0_1[0] f/ zmm3_1.q
    int64_t rcx_7 = int.q(zmm0_1[0])
    
    if (rcx_7 != -0x8000000000000000 && not(float.d(rcx_7) f== zmm0_1[0]))
        uint32_t temp0_10 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_7 - (zx.q(temp0_10) & 1))
    
    result = int.d(zmm0_1[0])
    *(arg1 + 0xa4) = result

return result
