// 函数: sub_142c29600
// 地址: 0x142c29600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 0xa).b != 0)
    uint16_t rdx_1 = zx.w(*arg1)
    uint32_t r8_1 = zx.d(arg1[1])
    
    if (4 u<= rdx_1 * 0x100 + r8_1.w)
        uint32_t rcx_5 = (zx.d(rdx_1.b) << 8) + r8_1
        uint32_t r8_4 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
        
        if ((rcx_5 == 0 || r8_4 u< divu.dp.d(0:0xffffffff, rcx_5))
                && sub_142bf7510(arg2, &arg1[0xa], r8_4 * rcx_5).b != 0)
            result.b = 1
            return result

result.b = 0
return result
