// 函数: sub_141c39d10
// 地址: 0x141c39d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = arg2
int32_t r8
int32_t var_14 = r8
int32_t r9
int32_t var_10 = r9
int32_t arg_10
int512_t result

if (*sub_141c37a30(arg1 + 0x78, &arg_10, &var_18) == 0xffffffff)
    result.o = zx.o(0)
    return result

sub_141c37a30(arg1 + 0x78, &arg_10, &var_18)
int64_t rax_1 = sx.q(arg_10)

if (rax_1.d == 0xffffffff)
    result.o = *0xc
    return result

result.o = *(*(arg1 + 0x78) + rax_1 * 0x18 + 0xc)
return result
