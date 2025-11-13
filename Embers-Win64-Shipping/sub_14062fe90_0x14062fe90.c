// 函数: sub_14062fe90
// 地址: 0x14062fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
void arg_8
*arg1 = *sub_1420e4d10(arg2, &arg_8)
arg1[1] = *(arg2 + 0x50)
float zmm1[0x4] = *(arg2 + 0x90)
float var_20 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
arg1[2] = (_mm_unpacklo_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x55)[0].q)).q
arg1[3].d = var_20
float var_18[0x4] = *(arg2 + 0x80)
void var_28
int32_t* rax_3 = sub_140adf5d0(&var_18, &var_28)
*(arg1 + 0x1c) = *rax_3
*(arg1 + 0x24) = rax_3[2]
char rcx_2

if (*(arg2 + 0x128) != 0 || *(arg2 + 0x130) != 0)
    rcx_2 = 1
else
    rcx_2 = 0

char rax_5 = (arg1[5].b & 0xfe) | rcx_2
arg1[5].b = rax_5
uint8_t rcx_3 = ((*(arg2 + 0xba) u>> 2 ^ rax_5) & 2) ^ rax_5
arg1[5].b = rcx_3
arg1[5].b = ((*(arg2 + 0xba) u>> 5 ^ rcx_3) & 4) ^ rcx_3
*(arg1 + 0x2c) = *(arg2 + 0xb0)
return arg1
