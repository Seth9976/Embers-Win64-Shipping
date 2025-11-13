// 函数: sub_141fb5c60
// 地址: 0x141fb5c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x88)

if (*(arg1 + 0x98) s> 0)
    rcx = **(arg1 + 0x90)

if (rcx == 0)
    *arg2 = rcx.d
    return arg2

int64_t* rcx_1 = *(rcx + 0x68)
int32_t arg_8
(*(*rcx_1 + 0x2c8))(rcx_1, &arg_8)
*arg2 = arg_8
return arg2
