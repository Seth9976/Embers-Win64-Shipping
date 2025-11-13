// 函数: sub_141fa2400
// 地址: 0x141fa2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48
sub_140783a30(arg1, &var_48)
int64_t var_34
__builtin_memset(&var_34, 0, 0x14)
int32_t* var_40
*var_40 = *arg3
int32_t rax_2 = var_48
int64_t var_2c
double temp0[0x2] = _mm_unpacklo_pd(var_2c:4.o, 0)
*(var_40 + 8) = 0xffffffff.o
*(var_40 + 0x18) = temp0
char var_18
*(var_40 + 0x28) = ((var_18 & 0xf0) | 0x10).q
var_40[0xc] = 0xffffffff
int32_t arg_8
sub_141fafc90(arg1, &arg_8, arg2, var_40, rax_2, nullptr)
return *arg1 + sx.q(arg_8) * 0x38 + 8
