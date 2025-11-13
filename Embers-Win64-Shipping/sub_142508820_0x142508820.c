// 函数: sub_142508820
// 地址: 0x142508820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_48

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
float zmm7[0x4] = *rcx_1
float zmm8[0x4] = *(rcx_1 + 4)
int128_t zmm6 = *(rcx_1 + 8)
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm6.d f* zmm6.d
float zmm3 = zmm7[0]
float temp0[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3)
float zmm2[0x4] = 0x3f000000
zmm3 = zmm3 * 0.5f
temp0[0] = temp0[0] * temp0[0]
zmm2[0] = 0.5f - zmm3 * temp0[0]
temp0[0] = temp0[0] * zmm2[0]
temp0[0] = temp0[0] + temp0[0]
temp0[0] = temp0[0] * (0.5f - zmm3 * temp0[0] * temp0[0])
temp0[0] = temp0[0] + temp0[0]
zmm7[0] = zmm7[0] * temp0[0]
zmm8[0] = zmm8[0] * temp0[0]
zmm6.d = zmm6.d f* temp0[0]
int32_t result = zmm6.d
*arg3 = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
arg3[1].d = result
return result
