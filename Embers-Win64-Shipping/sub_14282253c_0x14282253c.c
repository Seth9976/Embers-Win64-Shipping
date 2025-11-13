// 函数: sub_14282253c
// 地址: 0x14282253c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281f460(arg1, U"'", 1)
int64_t* rcx = arg2

if (arg2[3] u>= 0x10)
    rcx = *arg2

int64_t arg_18 = sub_14058e700(rcx)

while (true)
    int64_t* rcx_1 = arg2
    
    if (arg2[3] u>= 0x10)
        rcx_1 = *arg2
    
    int32_t arg_10
    
    if (sub_142820414(&arg_10, &arg_18, sub_14058e700(rcx_1) + arg2[2]) == 0)
        sub_14281f460(arg1, U"'", 1)
        return 1
    
    int32_t rdx_1 = arg_10
    
    if (rdx_1 == 0xa)
        break
    
    if (rdx_1 != 0x27)
        sub_1428220d8(arg1, rdx_1)
    else
        sub_14281f460(arg1, "''", zx.q(rdx_1 - 0x25))

return 0
