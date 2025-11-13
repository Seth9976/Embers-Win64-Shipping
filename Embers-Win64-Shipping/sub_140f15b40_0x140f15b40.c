// 函数: sub_140f15b40
// 地址: 0x140f15b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3a8) = *arg2
*(arg1 + 0x3a9) = arg2[1]
sub_140692f90(arg1 + 0x3b0, &arg2[8])
void* rcx_1 = *(arg1 + 0x2b0)
*(rcx_1 + 0x10) = *(arg1 + 0x3a8)
*(rcx_1 + 0x11) = *(arg1 + 0x3a9)
sub_140692f90(rcx_1 + 0x18, arg1 + 0x3b0)
return sub_140745b20(&arg2[8]) __tailcall
