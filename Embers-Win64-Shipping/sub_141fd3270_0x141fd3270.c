// 函数: sub_141fd3270
// 地址: 0x141fd3270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140598750(arg1, &var_18)
int64_t* var_10
*var_10 = *arg3
var_10[2].d = 0xffffffff
uint32_t r10_1 = (*var_10 u>> 4).d
int32_t rdx_2 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t r8_2 = neg.d(rdx_2 + r10_1) ^ rdx_2 u>> 0xd
int32_t r10_4 = (r10_1 - rdx_2 - r8_2) ^ r8_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - r10_4 - r8_2) ^ r10_4 << 0x10
int32_t r8_5 = (r8_2 - rdx_5 - r10_4) ^ rdx_5 u>> 5
int32_t r10_7 = (r10_4 - rdx_5 - r8_5) ^ r8_5 u>> 3
int32_t rdx_8 = (rdx_5 - r10_7 - r8_5) ^ r10_7 << 0xa
sub_141fdedb0(arg1, arg2, (r8_5 - rdx_8 - r10_7) ^ rdx_8 u>> 0xf, var_10, var_18, arg4)
return arg2
