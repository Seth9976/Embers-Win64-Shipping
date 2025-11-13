// 函数: sub_14082c3b0
// 地址: 0x14082c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x36)

if ((r8 & 4) != 0)
    int64_t* r11_1 = *(arg1 + 0x70)
    int64_t* rax_1 = r11_1
    void* r9_1 = &r11_1[sx.q(*(arg1 + 0x78))]
    
    if (r11_1 != r9_1)
        do
            if (*rax_1 == *(arg2 + 0x240))
                if (((rax_1 - r11_1) s>> 3).d != 0xffffffff)
                    return zx.q(*(arg1 + 0x37)) & 7
                
                break
            
            rax_1 = &rax_1[1]
        while (rax_1 != r9_1)

return zx.q(r8 u>> 4) & 7
