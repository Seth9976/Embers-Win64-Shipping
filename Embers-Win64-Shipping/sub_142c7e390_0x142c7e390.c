// 函数: sub_142c7e390
// 地址: 0x142c7e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET rdx = arg1[0x48]

if (rdx == -1)
    *(arg1 + 0x3fe) = 0
    return 

sub_142c65200(arg1, rdx)
arg1[0x48] = -1
*(arg1 + 0x3fe) = 0
