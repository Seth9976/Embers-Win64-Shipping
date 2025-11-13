// 函数: sub_142b65cf0
// 地址: 0x142b65cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11_1 = zx.q(*(arg1 + 4)) + arg1
uint16_t r8 = 0
uint32_t r10 = zx.d(*r11_1)
uint32_t r9 = r10

if (r10 - 1 s> 0)
    do
        uint16_t rax_3 = ((zx.d(r8) + r9) u>> 1).w
        
        if ((arg2 u>> 5).w u>= *(r11_1 + 2 + zx.q(rax_3) * 6))
            r8 = rax_3
        else
            r10 = zx.d(rax_3)
        
        r9 = zx.d(r10.w)
    while (zx.d(r8) s< r9 - 1)

return r11_1 + 2 + zx.q(r8) * 6
