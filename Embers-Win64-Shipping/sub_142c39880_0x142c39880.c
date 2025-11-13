// 函数: sub_142c39880
// 地址: 0x142c39880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg3 + 0x60)

if (result != 0)
    int16_t* r11_1 = *(arg3 + 0x70) + 0x10
    uint64_t rdi_1 = zx.q(result)
    uint64_t i
    
    do
        int16_t r10_1 = *r11_1
        result.b = r10_1.b & 0x1f
        
        if (result.b == 0xc)
            uint32_t rdx = zx.d(r10_1)
            int32_t rbx_2 = 1 << (rdx.b & 0x1f) & 0x1c00
            uint32_t rdx_1
            
            if (rbx_2 == 0)
                rdx_1 = 0
            else
                rdx_1 = rdx u>> 8
            
            result = sub_142c3a5a0(*(r11_1 - 0x10), rdx_1)
            
            if (rbx_2 != 0)
                result.w <<= 8
                *r11_1 = (r10_1 & 0xff) | result.w
        
        r11_1 = &r11_1[0xa]
        i = rdi_1
        rdi_1 -= 1
    while (i != 1)

return result
