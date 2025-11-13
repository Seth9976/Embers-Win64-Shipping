// 函数: sub_142bf5140
// 地址: 0x142bf5140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
uint64_t r10 = zx.q(arg2)

if (*(arg1 + 0x1c) != 2)
    int64_t r11_2 = *(arg1 + 0x70)
    uint64_t rdi_1 = zx.q((r10 + 1).d)
    int32_t r8_1 = *(r11_2 + r10 * 0x14 + 8)
    
    if (rdi_1.d u< i_1)
        uint64_t i_4 = zx.q(i_1 - rdi_1.d)
        int32_t* rdx_3 = r11_2 + (((rdi_1 << 2) + 2 + zx.q(rdi_1.d)) << 2)
        uint64_t i
        
        do
            if (r8_1 u>= *rdx_3)
                r8_1 = *rdx_3
            
            rdx_3 = &rdx_3[5]
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    for (; i_1 u< *(arg1 + 0x60); i_1 += 1)
        if (*(r11_2 + zx.q(i_1 - 1) * 0x14 + 8) != *(r11_2 + zx.q(i_1) * 0x14 + 8))
            break
    
    int32_t i_2 = *(arg1 + 0x5c)
    bool cond:1_1 = i_2 != r10.d
    
    if (i_2 u< r10.d)
        uint64_t rdi_3
        
        do
            rdi_3 = zx.q((r10 - 1).d)
            
            if (*(r11_2 + rdi_3 * 0x14 + 8) != *(r11_2 + zx.q(r10.d) * 0x14 + 8))
                break
            
            r10 = zx.q(rdi_3.d)
        while (i_2 u< rdi_3.d)
        cond:1_1 = i_2 != r10.d
    
    if (not(cond:1_1))
        uint64_t r11_3 = zx.q(*(arg1 + 0x64))
        
        while (r11_3.d != 0)
            r11_3 = zx.q(r11_3.d - 1)
            void* rdx_6 = *(arg1 + 0x78) + r11_3 * 0x14
            
            if (*(rdx_6 + 8) != *(*(arg1 + 0x70) + zx.q(r10.d) * 0x14 + 8))
                break
            
            if (*(rdx_6 + 8) != r8_1)
                *(rdx_6 + 4) &= 0xfffffffe
            
            *(rdx_6 + 8) = r8_1
    
    if (r10.d u< i_1)
        uint64_t rcx_10 = zx.q(r10.d) * 0x14
        uint64_t i_5 = zx.q(i_1 - r10.d)
        uint64_t i_3
        
        do
            uint64_t rax = *(arg1 + 0x70)
            
            if (*(rcx_10 + rax + 8) != r8_1)
                *(rcx_10 + rax + 4) &= 0xfffffffe
            
            *(rcx_10 + rax + 8) = r8_1
            rcx_10 += 0x14
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
else if (arg3 - r10.d u>= 2)
    return sub_142bf5c70(arg1, r10.d, arg3) __tailcall
