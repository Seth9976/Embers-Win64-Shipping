// 函数: sub_141f28010
// 地址: 0x141f28010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x16]

if (result == 0 || (arg1[0x1d].b & 0x10) == 0)
    return result

float zmm2[0x4] = *(result + 0x1d0)
float var_20_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
int64_t rax_1 = *arg1
float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
int64_t var_28 = temp0_3.q
void var_18
int64_t* rax_2 = (*(rax_1 + 0x4e8))(temp0_3, &var_18, &var_28)
int64_t* rcx = arg1[0x16]
int32_t rax_3 = rax_2[1].d
var_28 = *rax_2
int32_t var_20_2 = rax_3
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
return sub_141f49c70(rcx, &var_28, 0, 0, zmm6, zmm7, zmm8, 0)
