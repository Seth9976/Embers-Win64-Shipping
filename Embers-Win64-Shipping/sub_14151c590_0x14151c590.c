// 函数: sub_14151c590
// 地址: 0x14151c590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x10)
uint64_t rbx = zx.q(arg2)
int16_t r8 = rbx.w
int16_t rsi = *(result + (rbx << 1))

if (rbx.w != 0)
    do
        int64_t rdx = *(arg1 + 0x18)
        int64_t r10_1 = *(arg1 + 0x10)
        result = zx.q((zx.d(r8) - 1) s>> 1)
        uint64_t r11_1 = zx.q(*(r10_1 + (zx.q(result.w) << 1)))
        
        if (*((zx.q(rsi) << 2) + rdx) u>= *(rdx + (r11_1 << 2)))
            break
        
        int16_t* rdx_1 = zx.q(r8) * 2
        *(rdx_1 + r10_1) = r11_1.w
        *(*(arg1 + 0x20) + (zx.q(*(*(arg1 + 0x10) + rdx_1)) << 1)) = r8
        r8 = result.w
    while (result.w != 0)
    
    if (r8 != rbx.w)
        uint64_t rcx_5 = zx.q(r8) * 2
        *(rcx_5 + *(arg1 + 0x10)) = rsi
        result = *(arg1 + 0x20)
        *(result + (zx.q(*(*(arg1 + 0x10) + rcx_5)) << 1)) = r8

return result
