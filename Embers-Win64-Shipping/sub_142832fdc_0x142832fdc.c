// 函数: sub_142832fdc
// 地址: 0x142832fdc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg4)
char* rdx_2

if (r8.d s< 0 || r8.d s>= *(arg1 + 0x18))
    rdx_2 = "Channel out of range"
else if (arg5 u> 0x7f)
    rdx_2 = "Key out of range"
else
    if (arg6 - 1 u<= 0x7e)
        arg4 = arg6
        *(arg1 + 0x74) = arg2
        jump(*(arg3 + 0x30))
    
    rdx_2 = "Velocity out of range"

sub_142833a04(2, rdx_2, r8)
return 0xffffffff
