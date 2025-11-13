// 函数: sub_142c2df20
// 地址: 0x142c2df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
*(arg1[1] + 0x5c) = 0
uint64_t result = arg1[1]

while (*(result + 0x58) != 0)
    void* r10_1 = arg1[1]
    uint64_t rsi_1 = zx.q(*(r10_1 + 0x5c))
    int32_t rbp_1 = *(r10_1 + 0x60)
    uint32_t r11_1
    
    if (rsi_1.d u>= rbp_1)
        r11_1 = 0
    else
        int32_t rdx = *(*(r10_1 + 0x70) + rsi_1 * 0x14)
        void* rcx_1 = *arg1
        
        if (rdx != 0xffff)
            void* r8_2 = zx.q(*(rcx_1 + 3)) + (zx.q(*(rcx_1 + 2)) << 8) + rcx_1
            uint64_t rdx_2 = zx.q(rdx - (zx.d(*r8_2) << 8) - zx.d(*(r8_2 + 1)))
            
            if (rdx_2.d u< (zx.d(*(r8_2 + 2)) << 8) + zx.d(*(r8_2 + 3)))
                r11_1 = zx.d(*(rdx_2 + r8_2 + 4))
            else
                r11_1 = 1
        else
            r11_1 = 2
    
    char* r8_3 = *arg1
    uint32_t r9_3 = (zx.d(*r8_3) << 8) + zx.d(r8_3[1])
    
    if (r11_1 u>= r9_3)
        r11_1 = 1
    
    void* rbx_1 = &r8_3[(zx.q(r8_3[6]) << 8) + zx.q(r8_3[7])
        + (zx.q(r8_3[zx.q(r8_3[5]) + (zx.q(r8_3[4]) << 8) + zx.q(r9_3 * r15 + r11_1)]) << 2)]
    
    if (r15 != 0)
        int32_t rax_15
        
        if (*(r10_1 + 0x59) == 0)
            rax_15 = rsi_1.d
        else
            rax_15 = *(r10_1 + 0x64)
        
        if (rax_15 != 0 && rsi_1.d u< rbp_1 && (((*(rbx_1 + 3) & 0xf) != 0
                && *(arg2 + 4) u< *(arg2 + 8)) || zx.w(*rbx_1) * 0x100 != neg.w(zx.w(*(rbx_1 + 1)))
                || zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)) != 0x4000))
            int32_t rdx_9
            
            if (*(r10_1 + 0x59) == 0)
                rdx_9 = rsi_1.d
            else
                rdx_9 = *(r10_1 + 0x64)
            
            sub_142bf5b60(r10_1, rdx_9 - 1, (rsi_1 + 1).d)
    
    void* r11_2 = arg1[1]
    int32_t rbp_2 = *(r11_2 + 0x5c)
    
    if (rbp_2 + 2 u<= *(r11_2 + 0x60))
        char* r8_5 = *arg1
        uint32_t r9_8 = (zx.d(*r8_5) << 8) + zx.d(r8_5[1])
        int32_t rax_26
        rax_26.b = r9_8 == 0
        
        if ((r8_5[(zx.q(r8_5[6]) << 8) + zx.q(r8_5[7]) + (
                zx.q(r8_5[(zx.q(r8_5[4]) << 8) + zx.q(r8_5[5]) + zx.q(r9_8 * r15 + rax_26)]) << 2) + 3]
                & 0xf) != 0 && *(arg2 + 4) u< *(arg2 + 8) && 2 u>= 2)
            sub_142bf5c70(r11_2, rbp_2, rbp_2 + 2)
    
    sub_142c36480(arg2, arg1, rbx_1)
    char* rdx_15 = *arg1
    void* r9_9 = arg1[1]
    result = zx.q(divs.dp.d(
        sx.q(((zx.d(*rbx_1) - zx.d(rdx_15[4])) << 8) - zx.d(rdx_15[5]) + zx.d(*(rbx_1 + 1))), 
        (zx.d(*rdx_15) << 8) + zx.d(rdx_15[1])))
    r15 = result.d
    
    if (*(r9_9 + 0x5c) == *(r9_9 + 0x60))
        break
    
    int32_t rcx_21
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) != 0)
        rcx_21 = *(r9_9 + 0x30)
        *(r9_9 + 0x30) = rcx_21 - 1
    
    if ((0x4000 & (zx.w(*(rbx_1 + 2)) * 0x100 + zx.w(*(rbx_1 + 3)))) == 0 || rcx_21 s<= 0)
        void* rbx_2 = arg1[1]
        
        if (*(rbx_2 + 0x59) == 0)
            *(rbx_2 + 0x5c) += 1
        else if (*(rbx_2 + 0x78) != *(rbx_2 + 0x70) || *(rbx_2 + 0x64) != *(rbx_2 + 0x5c))
            if (sub_142bf50b0(rbx_2, 1, 1) != 0)
                int64_t rdx_18 = *(rbx_2 + 0x70)
                uint64_t r9_10 = zx.q(*(rbx_2 + 0x5c)) * 5
                uint64_t rcx_23 = zx.q(*(rbx_2 + 0x64)) * 5
                int64_t rax_42 = *(rbx_2 + 0x78)
                *(rax_42 + (rcx_23 << 2)) = *(rdx_18 + (r9_10 << 2))
                *(rax_42 + (rcx_23 << 2) + 0x10) = *(rdx_18 + (r9_10 << 2) + 0x10)
                *(rbx_2 + 0x64) += 1
                *(rbx_2 + 0x5c) += 1
        else
            *(rbx_2 + 0x64) += 1
            *(rbx_2 + 0x5c) += 1
    
    result = arg1[1]

return result
