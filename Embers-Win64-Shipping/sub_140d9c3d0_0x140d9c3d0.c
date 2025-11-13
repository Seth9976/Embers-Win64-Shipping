// 函数: sub_140d9c3d0
// 地址: 0x140d9c3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg1
void* rax = arg1[1]
arg2[1] = rax

if (rax != 0)
    *(rax + 0xc) += 1

*(arg2 + 0x10) = *arg3
*(arg2 + 0x20) = arg3[1]
*(arg2 + 0x30) = arg3[2]
*(arg2 + 0x40) = *(arg1 + 0x40)
*(arg2 + 0x50) = *(arg1 + 0x50)
*(arg2 + 0x60) = *(arg1 + 0x60)
arg2[0xe] = arg1[0xe]
*(arg2 + 0x78) = *(arg1 + 0x78)
*(arg2 + 0x88) = *(arg1 + 0x88)
*(arg2 + 0x98) = *(arg1 + 0x98)
arg2[0x15].b = arg1[0x15].b
return arg2
