// 函数: sub_142b18a00
// 地址: 0x142b18a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[3]

if (rcx != 0)
    arg1[4].d = sub_142a9fa50(rcx) - 1
    *(arg1 + 0x34) = sub_142aa0f40(arg1[3])
else
    arg1[4].d = 0xffffffff
    *(arg1 + 0x34) = 0

*(arg1 + 0x24) = 0
arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 0

if (arg1[4].d s>= 0)
    (*(*arg1 + 0x10))(arg1, 0)

arg1[2] = 0
arg1[6].d = 0
