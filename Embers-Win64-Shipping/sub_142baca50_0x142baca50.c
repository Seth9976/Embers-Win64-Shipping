// 函数: sub_142baca50
// 地址: 0x142baca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s< 0)
    int32_t r8 = *(arg1 + 0x2c4)
    int32_t rcx_1 = *(arg1 + 0x2c0)
    result = neg.d(divs.dp.d(sx.q(*(arg1 + 0x2c8) - r8 - arg2 + arg3), rcx_1) * rcx_1 + r8)
    
    if (result s> 0)
        return neg.d(r8)
else
    int32_t r9_1 = *(arg1 + 0x2c0)
    int32_t rcx = *(arg1 + 0x2c4)
    int32_t rax_7 = divs.dp.d(sx.q(*(arg1 + 0x2c8) - rcx + arg2 + arg3), r9_1) * r9_1
    result = rax_7 + rcx
    
    if (rax_7 + rcx s< 0)
        return zx.q(rcx)

return result
