// 函数: sub_142a721f0
// 地址: 0x142a721f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x10)

if (arg2 s>= rcx)
    int32_t rcx_1 = *(arg1 + 0x14)
    
    if (arg2 s<= rcx_1)
        *(arg1 + 0xc) = arg2
    else
        *(arg1 + 0xc) = rcx_1
else
    *(arg1 + 0xc) = rcx

int64_t rcx_2 = sx.q(*(arg1 + 0xc))

if (rcx_2.d s>= *(arg1 + 0x14))
    return 0xffff

return zx.q(*(*(arg1 + 0x18) + (rcx_2 << 1)))
