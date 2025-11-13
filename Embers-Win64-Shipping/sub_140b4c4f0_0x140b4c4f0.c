// 函数: sub_140b4c4f0
// 地址: 0x140b4c4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c310(arg1)
*arg1 = &data_142e79898
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = arg2
*(arg1 + 0xb1) = 0
int32_t rcx_2 = ((arg2 + 7) s>> 3).d + arg1[0x13].d
arg1[0x13].d = rcx_2

if (rcx_2 s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

arg1[0x16].b = arg3
memset(arg1[0x12], 0, sx.q(arg1[0x13].d))
int64_t rdx_1
rdx_1.b = 1
(*arg1)[0x15](arg1, rdx_1)
int64_t rdx_2
rdx_2.b = 1
(*arg1)[0x1b](arg1, rdx_2)
*(arg1 + 0x2b) |= 8
return arg1
