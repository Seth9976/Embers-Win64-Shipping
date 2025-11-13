// 函数: sub_142b29c40
// 地址: 0x142b29c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b1c950(*(arg1 + 0x1c0), arg2, arg3, arg1 + 0x1c8, ((arg3 - arg2) s>> 1).d, arg4)
int64_t result

if (*arg4 s<= 0)
    *(arg1 + 0x1a8) = arg2
    *(arg1 + 0x1b0) = arg3
    char rax_3 = (*(arg1 + 0x1d0)).b
    void* rcx_1
    
    if ((rax_3 & 0x11) == 0)
        rcx_1 = arg1 + 0x1d2
        
        if ((rax_3 & 2) == 0)
            rcx_1 = *(arg1 + 0x1e0)
    else
        rcx_1 = nullptr
    
    *(arg1 + 0x188) = rcx_1
    int16_t rax_4 = *(arg1 + 0x1d0)
    int32_t rax_6
    
    if (rax_4 s< 0)
        rax_6 = *(arg1 + 0x1d4)
    else
        rax_6 = sx.d(rax_4) s>> 5
    
    result.b = 1
    *(arg1 + 0x198) = rcx_1 + (sx.q(rax_6) << 1)
else
    result.b = 0

return result
