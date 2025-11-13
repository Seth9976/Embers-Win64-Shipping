// 函数: sub_1424fa3b0
// 地址: 0x1424fa3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = data_142d3f660
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rdi = &var_28
int128_t var_18 = data_142d3f660

if (rax_2 != 0)
    rdi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* rcx_2 = &var_18

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float zmm3[0x4] = *rcx_2
zmm3[0] = zmm3[0] f* *rdi
float result = *(rcx_2 + 4) f* *(rdi + 4)
float zmm1 = *(rcx_2 + 8) f* *(rdi + 8)
float zmm2 = *(rcx_2 + 0xc) f* *(rdi + 0xc)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = result
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
