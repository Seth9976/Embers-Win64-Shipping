// 函数: sub_142505ea0
// 地址: 0x142505ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rcx_1 = &var_48

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int128_t zmm6 = *(rcx_1 + 4)
float zmm8[0x4] = *rcx_1
int128_t zmm7 = *(rcx_1 + 8)
float zmm2 = zmm8[0] * zmm8[0] + zmm6.d f* zmm6.d + zmm7.d f* zmm7.d
float temp0 = _mm_rsqrt_ss(zmm2, zmm2)
float zmm3 = zmm2 * 0.5f
float zmm4 = temp0 + temp0 * (0.5f - zmm3 * temp0 * temp0)
zmm4 = zmm4 + zmm4 * (0.5f - zmm3 * zmm4 * zmm4)
zmm8[0] = zmm8[0] * zmm4
zmm6.d = zmm6.d f* zmm4
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
zmm7.d = zmm7.d f* zmm4
temp0_1[0] = zmm6.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm7.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = 0
*arg3 = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
return (zx.o(0)).d
