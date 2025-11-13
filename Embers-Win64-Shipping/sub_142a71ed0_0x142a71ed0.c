// 函数: sub_142a71ed0
// 地址: 0x142a71ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *(arg1 + 0xc) = *(arg1 + 0x10) + arg2
else if (arg3 == 1)
    *(arg1 + 0xc) += arg2
else if (arg3 == 2)
    *(arg1 + 0xc) = arg2 + *(arg1 + 0x14)

int32_t rcx_2 = *(arg1 + 0xc)
int32_t result = *(arg1 + 0x10)

if (rcx_2 s>= result)
    result = *(arg1 + 0x14)
    
    if (rcx_2 s<= result)
        return zx.q(rcx_2)

*(arg1 + 0xc) = result
return result
