// 函数: sub_142a71f20
// 地址: 0x142a71f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10_1 = sx.q(*(arg1 + 0xc))
int32_t r9 = *(arg1 + 0x14)

if (r10_1.d s< r9)
    int64_t r11_1 = *(arg1 + 0x18)
    int32_t rdx_2 = zx.d(*(r11_1 + (r10_1 << 1))) & 0xfffffc00
    *(arg1 + 0xc) = r10_1.d + 1
    
    if (rdx_2 == 0xd800 && r10_1.d + 1 != r9
            && (zx.d(*(r11_1 + (sx.q(r10_1.d + 1) << 1))) & 0xfffffc00) == 0xdc00)
        *(arg1 + 0xc) = r10_1.d + 2
    
    int64_t rcx_2 = sx.q(*(arg1 + 0xc))
    
    if (rcx_2.d s< r9)
        uint32_t rdx_3 = zx.d(*(r11_1 + (rcx_2 << 1)))
        
        if ((rdx_3 & 0xfffffc00) == 0xd800 && rcx_2.d + 1 != r9)
            uint32_t rax_5 = zx.d(*(r11_1 + (sx.q(rcx_2.d + 1) << 1)))
            
            if ((rax_5 & 0xfffffc00) == 0xdc00)
                rdx_3 = ((rdx_3 - 0xd7f7) << 0xa) + rax_5
        
        return zx.q(rdx_3)

*(arg1 + 0xc) = r9
return 0xffff
