// 函数: sub_1406111b0
// 地址: 0x1406111b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)

if (r8_1 != temp0)
    int32_t rcx = 1
    
    if (r8_1 s< temp0)
        rcx = -1
    
    return zx.q(rcx)

int32_t r8 = **(arg1 + 0x10)
int32_t temp1 = **(arg2 + 0x10)

if (r8 == temp1)
    int64_t result
    result.b = *(arg2 + 8) != 0x2f
    return result

if (r8 s< temp1)
    return 1

return 0xffffffff
