// 函数: sub_142b84250
// 地址: 0x142b84250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t var_48
memmove(&var_48, &arg_8, 8)
int64_t r10 = var_48
int64_t rcx_2 = r10 & 0xfffffffffffff
int64_t rax_1 = r10 & 0x7ff0000000000000
int64_t rdx_1 = rcx_2 + 0x10000000000000

if (rax_1 == 0)
    rdx_1 = rcx_2

int32_t r10_1

if (rax_1 != 0)
    r10_1 = ((r10 u>> 0x34).d & 0x7ff) - 0x433
else
    r10_1 = -0x432

while ((0x10000000000000 & rdx_1) == 0)
    rdx_1 *= 2
    r10_1 -= 1

var_48 = rdx_1 << 0xb
int64_t var_38 = 0
int32_t var_30 = 0
int32_t var_40 = r10_1 - 0xb
int32_t arg_18
sub_142b90d70(0xffffff84 - (r10_1 - 0xb), zx.q(0xffffffa0 - (r10_1 - 0xb)), &var_38, &arg_18)
int128_t var_28 = var_48.o
sub_142b90ce0(&var_28, &var_38)
var_48.o = *arg3
int128_t var_18 = var_28
int64_t result = sub_142b83c10(&var_18, arg2, &var_48, arg4, &arg_8)
*arg5 = arg_8.d - arg_18
return result
