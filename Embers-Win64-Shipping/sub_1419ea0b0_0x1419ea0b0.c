// 函数: sub_1419ea0b0
// 地址: 0x1419ea0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_1405b3620(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
var_10[1] = *arg3
var_10[2].d = 0xffffffff
int64_t rax_2 = *var_10
uint32_t r8_1 = (rax_2 u>> 0x20).d
int32_t rax_4 = (rax_2.d - r8_1) ^ r8_1 u>> 0xd
int32_t rdx_3 = (0x9e3779b9 - rax_4 - r8_1) ^ rax_4 << 8
int32_t r8_4 = (r8_1 - rax_4 - rdx_3) ^ rdx_3 u>> 0xd
int32_t rax_7 = (rax_4 - r8_4 - rdx_3) ^ r8_4 u>> 0xc
int32_t rdx_6 = (rdx_3 - rax_7 - r8_4) ^ rax_7 << 0x10
int32_t r8_7 = (r8_4 - rax_7 - rdx_6) ^ rdx_6 u>> 5
int32_t rax_10 = (rax_7 - r8_7 - rdx_6) ^ r8_7 u>> 3
int32_t rdx_9 = (rdx_6 - rax_10 - r8_7) ^ rax_10 << 0xa
int32_t arg_8
sub_1419ed3b0(arg1, &arg_8, (r8_7 - rax_10 - rdx_9) ^ rdx_9 u>> 0xf, var_10, var_18, nullptr)
return *arg1 + sx.q(arg_8) * 0x18 + 8
