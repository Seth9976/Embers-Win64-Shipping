// 函数: sub_140d8bae0
// 地址: 0x140d8bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_1405b3620(arg1, &var_18)
int64_t rax = *arg2
uint32_t rdx_2 = (rax u>> 4).d
int64_t* var_10
*var_10 = rax
int32_t rcx_1 = (0x9e3779b9 - rdx_2) ^ rdx_2 << 8
var_10[1].d = 0
var_10[2].d = 0xffffffff
int32_t r8_2 = neg.d(rdx_2 + rcx_1) ^ rcx_1 u>> 0xd
int32_t rdx_5 = (rdx_2 - r8_2 - rcx_1) ^ r8_2 u>> 0xc
int32_t rcx_4 = (rcx_1 - rdx_5 - r8_2) ^ rdx_5 << 0x10
int32_t r8_5 = (r8_2 - rdx_5 - rcx_4) ^ rcx_4 u>> 5
int32_t rdx_8 = (rdx_5 - r8_5 - rcx_4) ^ r8_5 u>> 3
int32_t rcx_7 = (rcx_4 - rdx_8 - r8_5) ^ rdx_8 << 0xa
int32_t arg_8
sub_1408651b0(arg1, &arg_8, (r8_5 - rdx_8 - rcx_7) ^ rcx_7 u>> 0xf, var_10, var_18, nullptr)
return *arg1 + sx.q(arg_8) * 0x18 + 8
