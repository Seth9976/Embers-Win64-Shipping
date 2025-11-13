// 函数: sub_140b0a230
// 地址: 0x140b0a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140b0c1e0(arg1, arg3)
*(arg1 + 0x40) = *(arg3 + 0x40)
arg1[0xa] = *(arg3 + 0x50)
arg1[0xb].d = arg2
arg1[0xc].b = 0

if (arg4[1].b != 0)
    *(arg1 + 0x5c) = *arg4
    arg1[0xc].b = 1

void* rcx = &arg3[4]

if ((arg3[3] | arg3[2] | arg3[1] | *arg3) == 0)
    rcx = nullptr

if (rcx != 0)
    int64_t r8 = *rcx
    (*r8)(rcx, 0, r8)

if (arg4[1].b != 0)
    arg4[1].b = 0

return arg1
