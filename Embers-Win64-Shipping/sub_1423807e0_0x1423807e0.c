// 函数: sub_1423807e0
// 地址: 0x1423807e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PSGSI1::`scalar deleting destructor'(arg1, arg2, arg3)
arg1[0xc].d = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x16].d = 0
arg1[0x18] = 0
arg1[0x1a] = 0
*arg1 = &data_143336818
void* rax = arg2[0xa]

if (rax != 0)
    arg1[0x20].d = zx.d(*(rax + 0x5f))
    return arg1

arg1[1] = -1
*(arg1 + 0x54) = 1
arg1[0x20].d = 0xffffffff
return arg1
