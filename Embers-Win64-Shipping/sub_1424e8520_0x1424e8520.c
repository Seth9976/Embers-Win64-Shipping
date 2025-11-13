// 函数: sub_1424e8520
// 地址: 0x1424e8520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
float zmm3[0x4] = var_18
float zmm4[0x4] = zx.o(0)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int32_t var_14
float temp0[0x4] = _mm_unpacklo_ps(var_14, 0)
*(arg2 + 0x20) = rcx_1 + rax_2
uint32_t zmm5[0x4] = data_143f65c20
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm5, data_143f65be0)
zmm5[0].q = zmm4 u>> 0x40
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm5, 0xc4)
int32_t result_1
uint32_t result[0x4] = result_1
arg3[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result[0].q), temp0[0].q)
*arg3 = temp0_2
arg3[2] = temp0_1
return result
