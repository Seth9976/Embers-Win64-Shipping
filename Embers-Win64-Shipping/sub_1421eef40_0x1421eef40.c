// 函数: sub_1421eef40
// 地址: 0x1421eef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rax
int64_t zmm1
int128_t var_28

if ((*(arg1 + 0x168) & 8) == 0)
    int32_t var_10_1 = *(arg1 + 0xd8)
    rax = &var_28
    zmm1 = *(arg1 + 0xd0)
    var_28 = *(arg1 + 0xc0)
    int64_t var_18_1 = zmm1
else
    rax = sub_140ae2d40(arg1 + 0x3a4, &var_28, arg1 + 0x80)
zmm1 = *(rax + 0x10)
int32_t rax_2 = rax[6]
*arg2 = *rax
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_2
return arg2
