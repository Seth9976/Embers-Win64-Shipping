// 函数: sub_14237f5c0
// 地址: 0x14237f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

PSGSI1::`scalar deleting destructor'(arg1, arg2, arg3)
arg1[0xc].d = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x16].d = 0
arg1[0x18] = 0
arg1[0x1a] = 0
*arg1 = &data_143336720
void* rax = arg2[0xb]

if (rax != 0)
    arg1[0x20].d = zx.d(*(rax + 0x13))
    return arg1

arg1[1] = -1
*(arg1 + 0x54) = 1
arg1[0x20].d = 0xffffffff
return arg1
