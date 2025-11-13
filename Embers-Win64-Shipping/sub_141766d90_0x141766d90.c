// 函数: sub_141766d90
// 地址: 0x141766d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8
int32_t arg_8
int64_t rdx_1
int32_t zmm1[0x8]
int32_t zmm2[0x8]
int32_t zmm3[0x8]
rdx_1, zmm1, zmm2, zmm3 = sub_141778400(&arg1[0xa], &arg1[0xb], *(arg4 + 8), &var_a8, &arg_8)
float zmm5[0x4] = (*arg1)[0x2a]
float zmm9[0x4] = (*arg1)[0x29]
int32_t var_a0
uint32_t zmm11[0x4] = var_a0
float zmm8[0x4] = arg1[0xa][0]
zmm2[0].o = var_a8
int32_t var_a4
uint32_t zmm12[0x4] = var_a4
zmm3[0].o = (*arg1)[0x2b]
zmm5[0] = zmm5[0] f* zmm12[0]
zmm5[0] = zmm5[0] f* zmm2[0]
zmm8[0] = zmm8[0] f* zmm12[0]
zmm9[0] = zmm9[0] f* zmm11[0]
zmm9[0] = zmm9[0] - zmm5[0]
zmm8[0] = zmm8[0] f* zmm11[0]
zmm5[0] = zmm5[0] - zmm8[0]
zmm9[0] = zmm9[0] f* zmm2[0]
zmm9[0] = zmm9[0] + zmm9[0]
zmm8[0] = zmm8[0] - zmm9[0]
zmm5[0] = zmm5[0] + zmm5[0]
zmm1[0].o = zmm9
zmm1[0] = zmm1[0] f* zmm3[0]
zmm8[0] = zmm8[0] + zmm8[0]
zmm1[0] = zmm1[0] f+ zmm2[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm2[0].o = zmm9
zmm2[0] = zmm2[0] f* zmm5[0]
zmm8[0] = zmm8[0] * zmm9[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] - zmm5[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] f* zmm3[0]
zmm2[0] = zmm2[0] f- zmm8[0]
zmm8[0] = zmm8[0] f+ zmm1[0]
zmm1[0].o = zmm5
zmm1[0] = zmm1[0] f* zmm3[0]
zmm8[0] = zmm8[0] f+ zmm11[0]
zmm3[0].o = arg5[3].d
zmm5[0] = zmm5[0] * zmm8[0]
zmm1[0] = zmm1[0] f+ zmm12[0]
zmm5[0] = zmm5[0] - zmm9[0]
zmm2[0] = zmm2[0] f+ zmm1[0]
zmm5[0] = zmm5[0] + zmm8[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm8, zmm2[0].q)
zmm2[0].o = *(arg5 + 0x34)
int64_t var_98 = temp0.q
float zmm0[0x4] = zmm2[0].o
zmm0[0] = zmm0[0] f- zmm3[0]
float var_90 = zmm5[0]

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] <= 9.99999975e-05f))
    uint32_t temp0_2[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
    uint32_t temp0_3[0x4] = _mm_and_ps(zmm12, 0x7fffffff)
    zmm1[0].o = temp0_3
    zmm0 = temp0_2
    zmm0[0] = zmm0[0] f* zmm2[0]
    zmm1[0] = zmm1[0] f* zmm3[0]
    zmm0[0] = zmm0[0] f* zmm2[0]
    zmm2[0].o = zx.o(0)
    zmm1[0] = zmm1[0] f* zmm3[0]
    zmm0[0] = zmm0[0] f* temp0_2[0]
    zmm1[0] = zmm1[0] f* temp0_3[0]
    zmm1[0] = zmm1[0] f+ zmm0[0]
    zmm2[0].o = _mm_sqrt_ss(0, zmm1[0])

zmm2[0] = zmm2[0] f+ arg1[0x19][0]
float zmm4[0x4] = arg_8
zmm1[0].o = zx.o(0)
zmm3[0].o = zx.o(0)

if (not(zmm4[0] f<= zmm2[0]))
    zmm3[0].o = zmm4
    zmm3[0] = zmm3[0] f- zmm2[0]
else if (not(zmm4[0] >= (zmm2[0].o ^ data_142d3f780)[0]))
    zmm3[0].o = zmm2[0].o
    zmm3[0] = zmm3[0] f+ zmm4[0]

if (_mm_and_ps(zmm3[0].o, 0x7fffffff)[0] <= 0f)
    *arg2 = 0
    *(arg2 + 4) = 1
else if (arg6 == 0)
    zmm0 = *(arg4 + 0x2c)
    
    if (not(zmm0[0] > 0f))
        zmm0 = *arg5
    
    zmm1[0].o = zmm0
    sub_14176def0(arg1, rdx_1, &var_98)
    *arg2 = 1
else
    zmm2[0].o = *(arg4 + 0x50)
    
    if (not(zmm2[0] f> 0f))
        zmm2[0].o = *(arg5 + 0x54)
    
    zmm0 = *(arg4 + 0x54)
    
    if (not(zmm0[0] > 0f))
        zmm0 = *(arg5 + 0x58)
    
    zmm1[0].o = arg3
    int128_t* rcx_1
    rcx_1.b = arg5[4].d == 0
    int32_t* var_c8
    var_c8.b = rcx_1.b
    zmm3[0].o = zmm0
    sub_14176e1f0(arg1, zmm1, zmm2, zmm3, var_c8.b, &var_98, zmm3[0], &(*arg1)[0x37])
    *arg2 = 1

return arg2
