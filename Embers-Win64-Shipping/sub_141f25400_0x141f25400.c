// 函数: sub_141f25400
// 地址: 0x141f25400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x44] == 0
*(arg1 + 0x20c) = arg2
arg1[0x41].d = arg3

if (cond:0)
    return sub_141ee8490(arg1) __tailcall

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

jump(*(**(rax + 0x1b0) + 0xa8))
