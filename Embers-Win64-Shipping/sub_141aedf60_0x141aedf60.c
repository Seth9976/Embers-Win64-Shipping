// 函数: sub_141aedf60
// 地址: 0x141aedf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_141b04c50(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
sub_14077e140(&var_10[1], arg3)
var_10[0xb].d = 0xffffffff
int32_t r8 = *(var_10 + 4)
int32_t rdx_4 = (*var_10 - r8) ^ r8 u>> 0xd
int32_t rcx_3 = (0x9e3779b9 - rdx_4 - r8) ^ rdx_4 << 8
int32_t r8_3 = (r8 - rcx_3 - rdx_4) ^ rcx_3 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_3 - r8_3) ^ r8_3 u>> 0xc
int32_t rcx_6 = (rcx_3 - rdx_7 - r8_3) ^ rdx_7 << 0x10
int32_t r8_6 = (r8_3 - rcx_6 - rdx_7) ^ rcx_6 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_6 - r8_6) ^ r8_6 u>> 3
int32_t rcx_9 = (rcx_6 - rdx_10 - r8_6) ^ rdx_10 << 0xa
int32_t arg_8
sub_141b11990(arg1, &arg_8, (r8_6 - rcx_9 - rdx_10) ^ rcx_9 u>> 0xf, var_10, var_18, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x60
