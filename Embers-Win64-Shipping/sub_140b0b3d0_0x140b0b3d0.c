// 函数: sub_140b0b3d0
// 地址: 0x140b0b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140b0c1e0(arg1, arg2)
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0xa] = *(arg2 + 0x50)
arg1[0xb].d = arg2[0x16]
arg1[0xc].b = 0
arg1[0xd].d = arg3
*(arg1 + 0x6c) = arg4

if (arg2[0x18].b != 0)
    arg2[0x18].b = 0

void* rcx_4 = &arg2[4]

if ((arg2[3] | arg2[2] | arg2[1] | *arg2) == 0)
    rcx_4 = nullptr

if (rcx_4 != 0)
    int64_t r8 = *rcx_4
    (*r8)(rcx_4, 0, r8)

return arg1
