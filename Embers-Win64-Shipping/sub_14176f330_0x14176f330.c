// 函数: sub_14176f330
// 地址: 0x14176f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3[0]
float zmm0[0x4] = (*arg1)[0x2d]
int32_t zmm1[0x8]
zmm1[0].o = (*arg1)[0x2e]
float zmm4 = arg1[0xb][0]
int32_t zmm3[0x8]
zmm3[0].o = zmm1[0].o
arg3[0].o = (*arg1)[0x2f]
zmm3[0] = zmm3[0] f+ zmm1[0]
float zmm13[0x4] = zmm0 ^ data_142d3f780
zmm13[0] = zmm13[0] + zmm13[0]
float zmm14[0x4] = zmm3[0].o
zmm14[0] = zmm14[0] f* arg3[0]
zmm13[0] = zmm13[0] * zmm0[0]
zmm0 = zmm3[0].o
zmm0[0] = zmm0[0] f* zmm1[0]
zmm3[0] = zmm3[0] f* zmm4
zmm13[0] = zmm13[0] - zmm0[0]
zmm13[0] = zmm13[0] * zmm4
zmm13[0] = zmm13[0] f* arg3[0]
zmm13[0] = zmm13[0] + 1f
zmm14[0] = zmm14[0] - zmm13[0]
zmm13[0] = zmm13[0] f+ zmm3[0]
int64_t var_b8
int32_t var_b0

if (arg6 != 2)
    var_b8 = 0
    var_b0 = 0x3f800000
else
    var_b8.d = 0
    var_b8 = 0x3f800000

zmm1[0].o = zx.o(var_b8)
float zmm6[0x4] = zmm1[0].o
float zmm9[0x4] = (*arg1)[0x29]
float zmm11[0x4] = (*arg1)[0x2a]
float zmm12[0x4] = arg1[0xa][0]
zmm3[0].o = (*arg1)[0x2b]
float zmm5 = zmm11[0]
var_b8 = (zmm1[0].o).q
zmm4 = zmm12[0]
arg3[0].o = var_b8.d
zmm1[0].o = zmm3[0].o
zmm9[0] = zmm9[0] f* var_b0
zmm5 = zmm5 f* arg3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm11[0] = zmm11[0] * temp0[0]
zmm4 = zmm4 * temp0[0]
zmm9[0] = zmm9[0] - zmm11[0]
zmm12[0] = zmm12[0] f* var_b0
zmm5 = zmm5 - zmm12[0]
zmm9[0] = zmm9[0] f* arg3[0]
zmm9[0] = zmm9[0] + zmm9[0]
zmm4 = zmm4 - zmm9[0]
zmm1[0] = zmm1[0] f* zmm9[0]
zmm5 = zmm5 + zmm5
zmm11[0] = zmm11[0] * zmm9[0]
zmm1[0] = zmm1[0] f+ arg3[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm11[0] = zmm11[0] * zmm5
zmm4 = zmm4 + zmm4
arg3[0].o = zmm13
zmm9[0] = zmm9[0] * zmm4
zmm9[0] = zmm9[0] - zmm11[0]
zmm12[0] = zmm12[0] * zmm4
zmm12[0] = zmm12[0] * zmm5
zmm11[0] = zmm11[0] - zmm12[0]
zmm9[0] = zmm9[0] f+ zmm1[0]
zmm1[0].o = zmm3[0].o
zmm1[0] = zmm1[0] f* zmm5
zmm12[0] = zmm12[0] - zmm9[0]
zmm3[0] = zmm3[0] f* zmm4
zmm1[0] = zmm1[0] f+ temp0[0]
zmm3[0] = zmm3[0] f+ var_b0
zmm11[0] = zmm11[0] f+ zmm1[0]
zmm1[0].o = zmm14
zmm1[0] = zmm1[0] f* zmm9[0]
zmm12[0] = zmm12[0] f+ zmm3[0]
zmm3[0].o = zmm13
zmm14[0] = zmm14[0] * zmm11[0]
zmm3[0] = zmm3[0] f* zmm11[0]
zmm14[0] = zmm14[0] * zmm12[0]
arg3[0] = arg3[0] f* zmm12[0]
zmm3[0] = zmm3[0] f- zmm14[0]
zmm13[0] = zmm13[0] * zmm9[0]
zmm13[0] = zmm13[0] * zmm12[0]
arg3[0] = arg3[0] f- zmm13[0]
zmm13[0] = zmm13[0] * zmm11[0]
zmm13[0] = zmm13[0] * zmm9[0]
zmm1[0] = zmm1[0] f- zmm13[0]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3[0].o, arg3[0].q)
zmm14[0] = zmm14[0] + zmm13[0]
var_b8 = temp0_1.q
int32_t var_a0 = zmm1[0]
zmm14[0] = zmm14[0] + zmm13[0]
int32_t var_b0_2 = var_a0
zmm14 ^= data_142d3f780

if (__andps_xmmxud_memxud(zmm14, data_142d3f770)[0] <= arg1[0x19][0])
    *arg2 = 0
    *(arg2 + 4) = 1
else if (arg7 == 0)
    zmm1[0].o = *(arg4 + 0x2c)
    
    if (not(zmm1[0] f> 0f))
        zmm1[0].o = *arg5
    
    zmm3[0].o = zmm14
    sub_14176def0(arg1, arg1, &var_b8)
    *arg2 = 1
else
    arg3[0].o = *(arg4 + 0x50)
    
    if (not(arg3[0] f> 0f))
        arg3[0].o = arg5[0x15]
    
    zmm3[0].o = *(arg4 + 0x54)
    
    if (not(zmm3[0] f> 0f))
        zmm3[0].o = arg5[0x16]
    
    zmm1[0].o = arg_18
    int32_t* rcx
    rcx.b = arg5[0x10] == 0
    sub_14176e1f0(arg1, zmm1, arg3, zmm3, rcx.b, &var_b8, zmm14[0], &(*arg1)[0x37])
    *arg2 = 1

return arg2
