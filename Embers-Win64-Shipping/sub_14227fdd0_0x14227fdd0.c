// 函数: sub_14227fdd0
// 地址: 0x14227fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

float var_58
float zmm2_1[0x4] = *sub_140ade170(arg3 + 0x30, &var_58)
int64_t rax_2 = *rbx
float zmm8_1 = *(arg3 + 0x3c) * 6.28318548f
float zmm7_1 = *(arg3 + 0x40) * 6.28318548f
float zmm6_1 = *(arg3 + 0x44) * 6.28318548f
float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float var_54_1 = temp0_1[0]
float var_48_1 = (*arg2)[0]
float zmm0_1[0x4] = (*arg2)[2]
var_58 = zmm2_1[0]
float var_50_1 = temp0_2[0]
float zmm1_1[0x4] = (*arg2)[1]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
float var_40_1 = zmm0_1[0]
float var_4c_1 = temp0_3[0]
float var_44_1 = zmm1_1[0]
(*(rax_2 + 0x150))(rbx, &var_58)
zmm1_1 = arg2[1][0]
int64_t rax_3 = *rbx
var_58 = (*arg2)[3][0]
float var_50_2 = (*arg2)[5][0]
float var_68 = zmm8_1
float var_64_1 = zmm7_1
float var_60_1 = zmm6_1
float var_54_2 = zmm1_1[0]
(*(rax_3 + 0x160))(rbx, &var_58, &var_68)
