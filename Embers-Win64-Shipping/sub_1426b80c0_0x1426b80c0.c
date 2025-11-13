// 函数: sub_1426b80c0
// 地址: 0x1426b80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2

if (arg1[0x14] != arg2)
    *(arg2 + 0x30) = 0
    arg1[5] = 0
    return 0

if (arg3 == 2 || (arg3 == 3 && arg1[0x15].b == 1))
    sub_1426bb8e0(arg1, arg4)
    *(rdi + 0x30) = 0
    arg1[5] = 0
    return 0

arg2.b = 3
(*(*arg1 + 0x270))(arg1, arg2)
*(rdi + 0x30) = 0
arg1[5] = 0
return 0
