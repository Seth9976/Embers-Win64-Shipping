// 函数: sub_14176afe0
// 地址: 0x14176afe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4][0x4]
float (* rax)[0x4]
int32_t zmm1[0x8]
int32_t zmm2_1[0x8]
int128_t zmm6_1
rax, zmm1, zmm2_1, zmm6_1 = sub_140ad9d00(&var_58, &arg1[0xa])
float zmm3[0x4] = arg1[9][0]
zmm3[0] = zmm3[0] - (*arg1)[0x21]
zmm1[0].o = rax[1]
float var_98[0x4] = *rax
int128_t var_88 = zmm1[0].o
zmm1[0].o = rax[3]
float var_78[0x4] = rax[2]
int64_t rax_2 = sx.q(arg4) * 2
int128_t var_68 = zmm1[0].o
float zmm0[0x4] = var_98[1 + rax_2 * 2]
zmm1[0].o = var_98[rax_2 * 2]
zmm2_1[0].o = var_98[2 + rax_2 * 2]
zmm3[0] = zmm3[0] * zmm0[0]
float var_a4 = zmm0[0]
zmm0 = (*arg1)[0x23]
int32_t var_a8 = zmm1[0]
int32_t var_a0 = zmm2_1[0]
zmm0[0] = zmm0[0] - arg1[8][0]
zmm0[0] = zmm0[0] f* zmm1[0]
zmm1[0].o = (*arg1)[0x25]
zmm1[0] = zmm1[0] f- (*arg1)[0x22]
zmm3[0] = zmm3[0] + zmm0[0]
zmm1[0] = zmm1[0] f* zmm2_1[0]
zmm3[0] = zmm3[0] f+ zmm1[0]

if (arg5 != 2)
    zmm2_1[0].o = arg7[7]
else
    zmm2_1[0].o = zx.o(0)

zmm0 = zmm2_1[0].o
zmm1[0].o = zmm3
zmm0[0] = zmm0[0] + (*arg1)[0x63]
zmm1[0].o = __andps_xmmxud_memxud(zmm1[0].o, data_142d3f770)

if (zmm1[0] f<= zmm0[0])
    *arg2 = 0
    *(arg2 + 4) = 1
else
    if (zmm3[0] <= 0f)
        zmm2_1[0] = zmm2_1[0] f+ zmm3[0]
        zmm3 = zmm2_1[0].o
    else
        zmm3[0] = zmm3[0] f- zmm2_1[0]
    
    if (arg5 != 1 || arg7[0xe].b == 0)
        zmm1[0].o = *(arg6 + 0x2c)
        
        if (not(zmm1[0] f> 0f))
            zmm1[0].o = *arg7
        
        sub_14176b2c0(arg1, zmm1[0].o, &var_a8, zmm3)
        *arg2 = 1
    else
        zmm2_1[0].o = *(arg6 + 0x40)
        
        if (not(zmm2_1[0] f> 0f))
            zmm2_1[0].o = arg7[0x11]
        
        zmm0 = *(arg6 + 0x44)
        
        if (not(zmm0[0] > 0f))
            zmm0 = arg7[0x12]
        
        zmm1[0].o = zmm6_1
        int32_t* rcx_1
        rcx_1.b = arg7[0xf] == 0
        sub_140038d90(arg1, zmm1, zmm2_1, zmm0, rcx_1.b, &var_a8, zmm3[0], &(*arg1)[0x26])
        *arg2 = 1

return arg2
