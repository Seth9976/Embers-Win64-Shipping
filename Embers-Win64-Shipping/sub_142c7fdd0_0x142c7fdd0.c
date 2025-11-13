// 函数: sub_142c7fdd0
// 地址: 0x142c7fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t rdi = *(arg1 + 0x744)

if (arg2 - 0xc8 u< 0x64)
    int512_t zmm2_1 = sub_142c64850(rsi, "Connect data stream actively\n", arg3, arg4)
    arg1[0xea].d = 0
    
    if (*(*(*arg1 + 0x250) + 0x18) == 0)
        *(arg1 + 0x3fc) = 1
    else
        sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2_1, 0, 0xffffffff, nullptr)
    
    *(arg1 + 0x729) = 1
    return 0

if (rdi == 0)
    arg3, arg4 = sub_142c64850(rsi, "disabling EPRT usage\n", arg3, arg4)
    *(arg1 + 0x405) = rdi.b

if (rdi != 1)
    return sub_142c80af0(arg1, rdi + 1, arg4) __tailcall

sub_142c64760(rsi, "Failed to do PORT", arg3, arg4)
return zx.q(rdi + 0x1d)
