// 函数: sub_140b0a6d0
// 地址: 0x140b0a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140b0c1e0(arg1, arg3)
*(arg1 + 0x40) = *arg2
arg1[0xa] = arg2[1].q
void* rcx_4 = &arg3[4]

if ((arg3[3] | arg3[2] | arg3[1] | *arg3) == 0)
    rcx_4 = nullptr

if (rcx_4 != 0)
    int64_t r8 = *rcx_4
    (*r8)(rcx_4, 0, r8)

return arg1
