// 函数: sub_141e4f2c0
// 地址: 0x141e4f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_14324c678
arg1[2].d = arg4
arg1[3] = 0
arg1[6] = 0
int32_t rcx = arg1[2].d
int32_t r8 = 4
int32_t rax_5

if (rcx == 1)
    arg1[4].d = *(arg2 + 0x14)
    *(arg1 + 0x24) = *(arg2 + 0x18)
    rax_5 = 1
else if (rcx == 2)
    r8 = 8
    arg1[4].d = *(arg2 + 0x28) * *(arg2 + 0x24)
    *(arg1 + 0x24) = *(arg2 + 0x20)
    rax_5 = *(arg2 + 0x1c)
else
    arg1[4].d = *(arg2 + 0xc)
    *(arg1 + 0x24) = *(arg2 + 0x10)
    rax_5 = 1

arg1[5].d = rax_5
int64_t count = sx.q(rax_5 * r8 * *(arg1 + 0x24) * arg1[4].d)

if (sub_140bc7f20(arg3) != count)
    sub_140bcb6b0(arg3, 2)
    memset(sub_140bce470(arg3, count), 0, count)
    sub_140bd1d40(arg3)
else
    sub_140bc7fd0(arg3, &arg1[6], 0)

return arg1
