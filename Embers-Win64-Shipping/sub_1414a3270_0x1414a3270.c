// 函数: sub_1414a3270
// 地址: 0x1414a3270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    arg2[7][0].q = *(data_143f10e68 + 0x10)
    *(arg2 + 0x78) = *(data_143f10e68 + 0x10)
    arg2[8][0].q = *(data_143f10e68 + 0x18)
    void* rax_11 = data_143f10e68
    *(arg2 + 0x88) = *(rax_11 + 0x18)
    arg2[6] = zx.o(0)
    return rax_11

float var_58[0x4] = data_142d3f660
float var_48[0x4]
sub_14148d370(arg1, &var_48, &var_58, nullptr)
float (* rcx)[0x4] = arg1 + 0x558
*arg2 = var_48
float var_38[0x4]
arg2[1] = var_38
float var_28[0x4]
arg2[2] = var_28
float zmm0_1[0x4] = var_58
float var_18[0x4]
arg2[3] = var_18
arg2[4] = zmm0_1
void* rdx_1 = *(*(arg1 + 0x5c0) + 0x20)
zmm0_1 = *(rdx_1 + 0x50)
float zmm1[0x4] = *(rdx_1 + 0x60)
float zmm3[0x4] = *(rdx_1 + 0x40)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0_1[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = 0x3f800000
arg2[5] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float (* rax_1)[0x4] = *(rcx + 8)

if (rax_1 != 0)
    rcx = rax_1

zmm3 = *rcx
zmm3[0] = zmm3[0] f* *(rdx_1 + 0x30)
float zmm2 = zmm3[0]
zmm3[0] = zmm3[0] f* *(rdx_1 + 0x34)
zmm2 = zmm2 f* *(rdx_1 + 0x38)
zmm3[0] = zmm3[0] * 0.318309873f
zmm3[0] = zmm3[0] * 0.318309873f
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_4[0] = zmm3[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = zmm2 * 0.318309873f
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_6[0] = zmm3[0]
arg2[6] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
arg2[7][0].q = *(**(arg1 + 0x28) + 0x10)
*(arg2 + 0x78) = *(*(*(arg1 + 0x28) + 8) + 0x10)
arg2[8][0].q = data_14395f4d0
int64_t rax_7 = data_14395f4d0
*(arg2 + 0x88) = rax_7
return rax_7
