// 函数: sub_1422dbf70
// 地址: 0x1422dbf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[2].d
arg1[2].d = rcx
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
int32_t rdx = 0
arg1[4].d = arg2[4].d
arg1[1].d = 0

if (rcx s> *(arg1 + 0xc))
    sub_1405947f0(arg1, rcx)
    rdx = arg1[1].d

int32_t rcx_3 = arg1[2].d + rdx
arg1[1].d = rcx_3

if (rcx_3 s> *(arg1 + 0xc))
    sub_140594770(arg1)

memcpy(*arg1, *arg2, arg1[2].d * 2)
return arg1
