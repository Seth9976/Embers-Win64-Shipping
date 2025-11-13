// 函数: sub_1403f7420
// 地址: 0x1403f7420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = arg3
arg1[3] = 9
arg1[4].d = 0x80
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
uint32_t rdx

if (arg3 == 0)
    rdx = 0
else
    rdx = zx.d(*arg2)
    *(arg1 + 0x1c) = 1

*(arg1 + 0x2c) = rdx
arg1[6].d = 0
*(arg1 + 0x24) = 0x7f - (rdx s>> 1)
return sub_1403f7470(arg1) __tailcall
