// 函数: sub_14213c9c0
// 地址: 0x14213c9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    uint32_t result = zx.d(*(arg1 + 0x24e))
    
    if (arg2 == result.w || ((zx.d(arg2) - result) & 0x3fff) u>= 0x2000)
        return result
    
    result.w += 1
    result.w &= 0x3fff
    char r8_3 = 0
    *(arg1 + 0x24e) = result.w
    int32_t r9_1 = *(arg1 + 0x230)
    
    if (result.w == arg2)
        r8_3 = arg3
    
    int32_t r8_4 = *(arg1 + 0x22c)
    int32_t rcx_2 = *(arg1 + 0x234)
    *(arg1 + 0x22c) = (r8_4 * 2) | zx.d(r8_3)
    *(arg1 + 0x230) = r8_4 u>> 0x1f | (r9_1 * 2)
    int32_t r8_7 = *(arg1 + 0x238)
    *(arg1 + 0x234) = (rcx_2 * 2) | r9_1 u>> 0x1f
    int32_t rcx_4 = *(arg1 + 0x23c)
    *(arg1 + 0x238) = (r8_7 * 2) | rcx_2 u>> 0x1f
    int32_t r8_9 = *(arg1 + 0x240)
    *(arg1 + 0x23c) = (rcx_4 * 2) | r8_7 u>> 0x1f
    int32_t rcx_6 = *(arg1 + 0x244)
    *(arg1 + 0x240) = (r8_9 * 2) | rcx_4 u>> 0x1f
    *(arg1 + 0x244) = (rcx_6 * 2) | r8_9 u>> 0x1f
    *(arg1 + 0x248) = rcx_6 u>> 0x1f | (*(arg1 + 0x248) * 2)
