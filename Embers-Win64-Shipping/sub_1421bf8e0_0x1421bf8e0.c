// 函数: sub_1421bf8e0
// 地址: 0x1421bf8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]

if (rcx != 0 && *(rcx + 0xa8) == 0)
    sub_141ee69e0(rcx)

arg1[0x1c].d |= 1
arg1[0x25] = 0
arg1[0x2e].d = 0
*(arg1 + 0x11c) = 0
jump(*(*arg1 + 0x90))
