// 函数: sub_140a2c620
// 地址: 0x140a2c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = *(arg1 + 0x40008)
uint64_t r11 = zx.q(*(arg1 + 0x40018))
uint64_t rdi = r8
uint64_t r10 = *(arg1 + 0x40000)

if (r10 u>= r8 + 4 + r11)
    uint64_t r9_1 = zx.q(*(arg1 + 0x40020))
    
    if (r9_1.d u< r10.d - r8.d - 3)
        uint64_t r10_1 = r8 + r9_1
        
        do
            uint64_t rdx = zx.q(*r10_1 * 0x9e3779b1)
            r10_1 += 1
            int32_t* r8_1 = rdx u>> 0x11 << 2
            uint64_t rdx_3 = zx.q(r9_1.d - *(r8_1 + arg1))
            
            if (rdx_3 u> 0xffff)
                rdx_3 = 0xffff
            
            *(arg1 + (zx.q(r9_1.w) << 1) + 0x20000) = rdx_3.w
            *(r8_1 + arg1) = r9_1.d
            r9_1 = zx.q(r9_1.d + 1)
        while (r9_1.d u< r10.d - r8.d - 3)
        
        r11 = zx.q(*(arg1 + 0x40018))
        r10 = zx.q(*(arg1 + 0x40000))
        r8 = zx.q(*(arg1 + 0x40008))
        rdi = *(arg1 + 0x40008)

*(arg1 + 0x40000) = arg2
uint64_t rdx_4 = zx.q(r10.d - r8.d)
int64_t result = arg2 - rdx_4
*(arg1 + 0x40008) = result
*(arg1 + 0x4001c) = r11.d
*(arg1 + 0x40018) = rdx_4.d
*(arg1 + 0x40010) = rdi
*(arg1 + 0x40020) = rdx_4.d
*(arg1 + 0x40028) = 0
return result
