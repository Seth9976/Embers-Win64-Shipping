// 函数: _CopyMan
// 地址: 0x1406c6020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (arg1[1] != 0)
    int32_t* rax_10 = arg1[1] + 8
    *rax_10 += 1

arg1[2].d = arg2[2].d
return arg1
