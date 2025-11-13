// 函数: sub_141b708f0
// 地址: 0x141b708f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140a696e0(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
var_10[1] = *arg3
var_10[2] = arg3[1]
arg3[1] = 0
*arg3 = 0
var_10[3].d = 0xffffffff
uint32_t rcx_1 = (*var_10 u>> 4).d
int32_t rdx_2 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t r8_2 = neg.d(rcx_1 + rdx_2) ^ rdx_2 u>> 0xd
int32_t rcx_4 = (rcx_1 - r8_2 - rdx_2) ^ r8_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_4 - r8_2) ^ rcx_4 << 0x10
int32_t r8_5 = (r8_2 - rcx_4 - rdx_5) ^ rdx_5 u>> 5
int32_t rcx_7 = (rcx_4 - r8_5 - rdx_5) ^ r8_5 u>> 3
int32_t rdx_8 = (rdx_5 - rcx_7 - r8_5) ^ rcx_7 << 0xa
int32_t arg_8
sub_140eb8320(arg1, &arg_8, (r8_5 - rcx_7 - rdx_8) ^ rdx_8 u>> 0xf, var_10, var_18, nullptr)
return *arg1 + (sx.q(arg_8) << 5) + 8
