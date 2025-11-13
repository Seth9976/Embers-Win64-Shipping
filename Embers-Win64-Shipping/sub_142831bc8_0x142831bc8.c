// 函数: sub_142831bc8
// 地址: 0x142831bc8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
char const* const rdx_1

if (arg2 s< 0 || rbx.d s>= *(arg1 + 0x18))
    rdx_1 = "Channel out of range"
else if (arg3.d u> 0x7f)
    rdx_1 = "Ctrl out of range"
else
    if (arg4 u<= 0x7f)
        if (*(arg1 + 0xe) != 0)
            int32_t var_18_1 = arg4
            sub_142833a04(3, "cc\t%d\t%d\t%d", zx.q(rbx.d))
        
        sub_14283ddec(*(*(arg1 + 0x58) + (rbx << 3)), arg3.d, arg4)
        return 0
    
    rdx_1 = "Value out of range"

sub_142833a04(2, rdx_1, arg3)
return 0xffffffff
