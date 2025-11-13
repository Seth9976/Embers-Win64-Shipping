// 函数: sub_1424fd9d0
// 地址: 0x1424fd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
float zmm4[0x4] = *rcx_1 ^ 0x80000000
int128_t zmm1 = *(rcx_1 + 4) ^ 0x80000000
int32_t zmm3 = *(rcx_1 + 0xc)
int128_t zmm2 = *(rcx_1 + 8) ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0[0] = zmm1.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm3
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
