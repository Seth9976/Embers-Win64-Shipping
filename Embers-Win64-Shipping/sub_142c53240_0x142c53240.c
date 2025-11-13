// 函数: sub_142c53240
// 地址: 0x142c53240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 != 0xbab1e)
    return 1

if (arg2 == 0 || arg2[0x9f8].d != 0xc0dedbad)
    return 2

if (arg2[0x18] != 0)
    return 7

sub_142c69f40(&arg2[0x983], 0)

if (arg2[9].d != 0)
    arg2[9].d = 0

if (*(arg2 + 0x605) != 0 && arg2[0x17].d != 1)
    void* rax_2 = sub_142c5a060()
    
    if (rax_2 != 0)
        arg2[0x17].d = 1
        arg2[0x16] = rax_2
else if (arg2[0x16] == 0 || arg2[0x17].d == 0)
    arg2[0x17].d = 2
    arg2[0x16] = &arg1[0x20]

*arg2 = 0
arg2[0x149] = &arg1[0x3c]

if (*(arg1 + 8) == 0)
    arg2[1] = 0
    *(arg1 + 8) = arg2
else
    int64_t** rax_4 = *(arg1 + 0x10)
    *rax_4 = arg2
    arg2[1] = rax_4

*(arg1 + 0x10) = arg2
arg2[0x18] = arg1
sub_142c52ab0(arg2, 0, 6, arg3)
arg1[6] += 1
arg1[7] += 1
*(arg1 + 0x1b0) = 0
*(arg1 + 0x1b8) = 0
*(*(arg1 + 0x140) + 0x380) = arg2[0x70].d
*(*(arg1 + 0x140) + 0x38c) = *(arg2 + 0x38c)
sub_142c556d0(arg1)
return 0
