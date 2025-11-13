// 函数: sub_141e6dd00
// 地址: 0x141e6dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_141e74970(arg1, &var_18)
int64_t rax = *arg2
uint32_t rcx_1 = (rax u>> 4).d
int64_t* var_10
*var_10 = rax
int32_t rdx_2 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
*(var_10 + 8) = *arg3
int32_t r8_2 = neg.d(rcx_1 + rdx_2) ^ rdx_2 u>> 0xd
int32_t rcx_4 = (rcx_1 - r8_2 - rdx_2) ^ r8_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_4 - r8_2) ^ rcx_4 << 0x10
*(var_10 + 0x18) = arg3[1]
int32_t r8_5 = (r8_2 - rcx_4 - rdx_5) ^ rdx_5 u>> 5
*(var_10 + 0x28) = arg3[2]
int32_t rcx_7 = (rcx_4 - r8_5 - rdx_5) ^ r8_5 u>> 3
*(var_10 + 0x38) = arg3[3]
int32_t rdx_8 = (rdx_5 - rcx_7 - r8_5) ^ rcx_7 << 0xa
int32_t rax_15 = var_18
*(var_10 + 0x48) = arg3[4]
var_10[0xb] = arg3[5].q
var_10[0xc].d = 0xffffffff
int32_t arg_8
sub_141e79e10(arg1, &arg_8, (r8_5 - rcx_7 - rdx_8) ^ rdx_8 u>> 0xf, var_10, rax_15, nullptr)
return *arg1 + sx.q(arg_8) * 0x68 + 8
