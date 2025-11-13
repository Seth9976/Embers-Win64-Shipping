// 函数: sub_14173a170
// 地址: 0x14173a170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8

if (arg4 == 0xffffffff)
    arg2[1].d = 0x3f800000
    *arg2 = 0
else
    uint32_t r8 = zx.d(*(arg1 + 0x46))
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg4)
    uint128_t zmm1 = *(arg1 + 0x4c)
    uint128_t zmm2 = *(arg1 + 0x3c)
    uint128_t zmm4 = *(arg1 + 0x30)
    int32_t rax_5 = (temp3_1 - temp2_1) s>> 1
    int32_t r9_1 = rax_5 + divs.dp.d(sx.q(rax_5), zx.d(*(arg1 + 0x46)) - 1)
    int64_t rcx_2 = sx.q(r9_1)
    int32_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(r9_1)
    int64_t rdx_4 = *(arg1 + 0x10)
    uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp10_1:temp11_1, r8)))
    uint32_t rax_11 = zx.d(*(rdx_4 + (rcx_2 << 1)))
    uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp10_1:temp11_1, r8)))
    uint128_t zmm9
    zmm9.d = zmm4.d f* zmm7.d
    uint128_t zmm6
    zmm6.d = zmm7.d f+ 1f
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* zmm1.d
    uint128_t zmm5 = _mm_unpacklo_ps(zmm7, zmm3.q)
    zmm0.d = zmm0.d f+ zmm2.d
    int32_t var_b0_1 = zmm0.d
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_2 << 1) + 2))).d f* zmm1.d
    zmm0.d = zmm0.d f+ zmm2.d
    int32_t var_b0_2 = zmm0.d
    zmm0 = _mm_unpacklo_ps(zmm6, zmm3.q)
    zmm3.d = zmm3.d f+ 1f
    uint64_t var_9c_1 = zmm0.q
    int64_t rcx_3 = sx.q(r8 + r9_1)
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_3 << 1)))).d f* zmm1.d
    zmm0.d = zmm0.d f+ zmm2.d
    int32_t var_b0_3 = zmm0.d
    uint64_t var_90_1 = (_mm_unpacklo_ps(zmm7, zmm3.q)).q
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(rdx_4 + (rcx_3 << 1) + 2))).d f* zmm1.d
    zmm0.d = zmm0.d f+ zmm2.d
    int32_t var_b0_4 = zmm0.d
    uint64_t var_84_1 = (_mm_unpacklo_ps(zmm6, zmm3.q)).q
    zmm3 = *(arg1 + 0x34)
    zmm2 = *(arg1 + 0x38)
    uint128_t zmm11
    zmm11.d = zmm2.d f* var_b0_1
    uint128_t zmm10
    zmm10.d = zmm3.d f* _mm_shuffle_ps(zmm5, zmm5, 0x55).d
    zmm0.d = zmm4.d f* zmm6.d
    zmm1.d = var_9c_1:4.d.d f* zmm3.d
    var_9c_1.d = zmm0.d
    zmm0.d = var_b0_2.d f* zmm2.d
    var_9c_1:4.d = zmm1.d
    int32_t var_94_2 = zmm0.d
    zmm0.d = zmm4.d f* zmm7.d
    zmm1.d = var_90_1:4.d.d f* zmm3.d
    zmm4.d = zmm4.d f* zmm6.d
    var_90_1.d = zmm0.d
    zmm0.d = var_b0_3.d f* zmm2.d
    var_90_1:4.d = zmm1.d
    int32_t var_88_2 = zmm0.d
    zmm0.d = var_84_1:4.d.d f* zmm3.d
    zmm1.d = var_b0_4.d f* zmm2.d
    var_84_1.d = zmm4.d
    var_84_1:4.d = zmm0.d
    int32_t var_7c_2 = zmm1.d
    int32_t var_c0_1
    int32_t rax_21
    
    if ((arg4.b & 1) == 0)
        var_c8 = var_9c_1
        zmm0 = zx.o(var_84_1)
        var_c0_1 = var_94_2
        rax_21 = var_7c_2
    else
        var_c8 = var_84_1
        zmm0 = zx.o(var_90_1)
        var_c0_1 = var_7c_2
        rax_21 = var_88_2
    
    zmm2.d = var_c0_1.d f- zmm11.d
    zmm5.d = var_c8.d.d f- zmm9.d
    uint64_t var_b8_1 = zmm0.q
    zmm4.d = var_c8:4.d.d f- zmm10.d
    zmm6.d = var_b8_1:4.d.d f- zmm10.d
    zmm3.d = var_b8_1.d.d f- zmm9.d
    zmm1.d = rax_21.d f- zmm11.d
    zmm0 = zmm6
    zmm6.d = zmm6.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm2.d
    zmm7 = zmm1
    zmm9.d = zmm3.d f* zmm2.d
    zmm1.d = zmm1.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm9.d = zmm9.d f- zmm1.d
    zmm3.d = zmm3.d f* zmm4.d
    zmm7.d = zmm7.d f- zmm0.d
    zmm6.d = zmm6.d f- zmm3.d
    zmm2.d = zmm9.d f* zmm9.d
    zmm0.d = zmm7.d f* zmm7.d
    zmm1.d = zmm6.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    int32_t var_c0_2
    
    if (zmm2.d f>= 9.99999975e-05f)
        uint128_t zmm8
        zmm8.d = 1f f/ _mm_sqrt_ss(0, zmm2.d).d
        zmm1.d = zmm8.d f* zmm7.d
        zmm0.d = zmm8.d f* zmm9.d
        zmm8.d = zmm8.d f* zmm6.d
        var_c8.d = zmm1.d
        var_c8:4.d = zmm0.d
        var_c0_2 = zmm8.d
    else
        var_c8 = 0x3f800000
        var_c0_2 = 0
    
    *arg2 = var_c8
    arg2[1].d = var_c0_2

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
