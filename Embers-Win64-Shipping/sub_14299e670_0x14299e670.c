// 函数: sub_14299e670
// 地址: 0x14299e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdx = arg1[1]

if (arg1[2] == rdx)
    return sub_142991d40(arg1, rdx, arg2) __tailcall

rdx[1].q = 0
*(rdx + 0x18) = 0
*rdx = *arg2
rdx[1] = arg2[1]
arg2[1].q = 0
*(arg2 + 0x18) = 0xf
*arg2 = 0
rdx[2].d = arg2[2].d
*(rdx + 0x24) = *(arg2 + 0x24)
*(rdx + 0x28) = *(arg2 + 0x28)
char result = *(arg2 + 0x2c)
*(rdx + 0x2c) = result
arg1[1] += 0x30
return result
