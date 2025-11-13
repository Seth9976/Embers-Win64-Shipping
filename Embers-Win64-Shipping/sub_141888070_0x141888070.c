// 函数: sub_141888070
// 地址: 0x141888070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18

if (*sub_141838ff0(arg1 + 8, &arg_18, arg2) == 0xffffffff)
    return 0

int32_t arg_8
sub_141838ff0(arg1 + 8, &arg_8, arg2)
int64_t rax_1 = sx.q(arg_8)

if (rax_1.d == 0xffffffff)
    if (0 != *0x10)
        return zx.q(*0x10)
    
    *0x10 = 0
    return 0

void* rdx_3 = rax_1 * 0x1c + *(arg1 + 8)

if (0 != *(rdx_3 + 0x10))
    return zx.q(*(rdx_3 + 0x10))

*(rdx_3 + 0x10) = 0
return 0
