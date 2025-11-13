// 函数: sub_140d91f10
// 地址: 0x140d91f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax = arg2[1]
arg1[1] = rax

if (rax != 0)
    *(rax + 0xc) += 1

*(arg1 + 0x10) = *arg3
*(arg1 + 0x20) = arg3[1]
*(arg1 + 0x30) = arg3[2]
*(arg1 + 0x40) = *arg4
*(arg1 + 0x50) = arg4[1]
*(arg1 + 0x60) = arg4[2]
arg1[0xe] = arg4[3].q
*(arg1 + 0x78) = *arg5
*(arg1 + 0x88) = arg5[1]
arg1[0x15].b = arg6
*(arg1 + 0x98) = arg5[2]
return arg1
