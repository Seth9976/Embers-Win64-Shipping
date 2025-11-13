// 函数: sub_14283396c
// 地址: 0x14283396c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

FILE* rax = __acrt_iob_func(1)

if (data_143fe7784 == 0)
    sub_142833a88()

if (arg1 == 0)
    sub_141528310(rax, "%s: panic: %s\n", data_143b806a0)
else if (arg1 == 1)
    sub_141528310(rax, "%s: error: %s\n", data_143b806a0)
else if (arg1 == 2)
    sub_141528310(rax, "%s: warning: %s\n", data_143b806a0)
else if (arg1 == 3 || arg1 != 4)
    sub_141528310(rax, "%s: %s\n", data_143b806a0)

return fflush(rax) __tailcall
