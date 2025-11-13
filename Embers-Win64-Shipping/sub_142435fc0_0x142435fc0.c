// 函数: sub_142435fc0
// 地址: 0x142435fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x238)

if (rcx == 0)
    __builtin_memset(arg2, 0, 0x1c)
    return arg2

(*(*rcx + 0x480))(rcx, arg3, &rcx[0x38])
return arg2
