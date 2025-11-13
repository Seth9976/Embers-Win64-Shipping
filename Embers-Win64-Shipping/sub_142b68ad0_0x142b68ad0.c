// 函数: sub_142b68ad0
// 地址: 0x142b68ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142af42a0(*(arg1 + 8), arg2)
void* rdx = *(arg1 + 8)

if (result.w u>= 0xfc00)
    result.w u>>= 1
    return result

if (result.w u>= *(rdx + 0x12) && *(rdx + 0x1a) u> result.w)
    uint64_t rcx_1 = zx.q(result.w)
    result = *(rdx + 0x30)
    uint64_t rcx_2 = rcx_1 u>> 1
    
    if ((*(result + (rcx_2 << 1)) & 0x80) != 0)
        return zx.q(*(result + (rcx_2 << 1) - 2))

result.b = 0
return result
