// 函数: sub_141e901e0
// 地址: 0x141e901e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(arg2 + 0xc)
arg1[1] = *((*(*arg2 + 0x150))(arg2) + 0xc)
int32_t r8
r8.b = 1
arg1[2] = arg2[0x4b].d
*(arg1 + 0x10) = *(arg2 + 0x260)
*(arg1 + 0x20) = *(arg2 + 0x270)
*(arg1 + 0x30) = *(arg2 + 0x280)
*(arg1 + 0x40) = *(arg2 + 0x290)
arg1[0x14] = arg2[0x54].d
int64_t* rcx_1 = arg2[0x47]
*(arg1 + 0x58) = (*(*rcx_1 + 0x6a8))(rcx_1, 0, r8)
return arg1
