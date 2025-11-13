// 函数: sub_142b68f50
// 地址: 0x142b68f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
uint32_t result

if (arg2 s>= zx.d(*(rbx + 0xa)))
    result = sub_142af42a0(rbx, arg2)
    
    if (result.w u>= *(rbx + 0x16) && (*(rbx + 0x1a) u> result.w || result.w u>= *(rbx + 0x1e)))
        result.b = 0
        return result

result.b = 1
return result
