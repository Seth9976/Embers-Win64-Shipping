// 函数: sub_14283ff40
// 地址: 0x14283ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
uint32_t temp0[0x4] = _mm_and_ps(*sub_14283ef00(&data_143702c70, &var_48), arg1)
uint32_t temp0_1[0x4] = _mm_or_ps(*sub_14283ef00(&data_143702d10, &var_48), temp0)
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(arg1, *sub_14283ef00(&data_143702c50, &var_48))
int128_t* rax_3 = sub_14283ef00(&data_143702d10, &var_48)
float temp0_3[0x4] = _mm_add_ps(temp0_1, arg1)
uint32_t zmm6[0x4] = __cmpps_xmmps_memps_immb(temp0_2, *rax_3, 2)
return _mm_and_ps(_mm_sub_ps(temp0_3, temp0_1), zmm6) ^ _mm_andnot_ps(zmm6, arg1)
